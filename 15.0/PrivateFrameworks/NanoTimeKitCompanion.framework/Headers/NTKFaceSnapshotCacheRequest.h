// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKFACESNAPSHOTCACHEREQUEST_H
#define NTKFACESNAPSHOTCACHEREQUEST_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "NTKFace.h"
#import "NTKFaceSnapshotCacheRequestOptions.h"

@interface NTKFaceSnapshotCacheRequest : NSObject

@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy, nonatomic) NTKFace *face; // ivar: _face
@property (readonly, copy, nonatomic) NTKFaceSnapshotCacheRequestOptions *options; // ivar: _options


-(id)initWithFace:(id)arg0 options:(id)arg1 completion:(id)arg2 ;


@end


#endif