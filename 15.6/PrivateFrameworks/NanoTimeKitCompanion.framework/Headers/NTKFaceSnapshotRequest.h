// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKFACESNAPSHOTREQUEST_H
#define NTKFACESNAPSHOTREQUEST_H

@class NSDate, NSDictionary;

#import <Foundation/Foundation.h>

#import "NTKFace.h"

@interface NTKFaceSnapshotRequest : NSObject

@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) NTKFace *face; // ivar: _face
@property (readonly, copy, nonatomic) NSDictionary *options; // ivar: _options
@property (readonly, nonatomic, getter=isReady) BOOL ready;


-(id)initWithFace:(id)arg0 options:(id)arg1 completion:(id)arg2 ;


@end


#endif