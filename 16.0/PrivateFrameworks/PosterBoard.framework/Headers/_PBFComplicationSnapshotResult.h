// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PBFCOMPLICATIONSNAPSHOTRESULT_H
#define _PBFCOMPLICATIONSNAPSHOTRESULT_H

@class NSError, UIImage;

#import <Foundation/Foundation.h>


@interface _PBFComplicationSnapshotResult : NSObject

@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) UIImage *snapshot; // ivar: _snapshot


-(id)initWithSnapshot:(id)arg0 error:(id)arg1 ;


@end


#endif