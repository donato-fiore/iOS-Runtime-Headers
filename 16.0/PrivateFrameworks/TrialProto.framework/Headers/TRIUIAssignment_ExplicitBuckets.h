// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIUIASSIGNMENT_EXPLICITBUCKETS_H
#define TRIUIASSIGNMENT_EXPLICITBUCKETS_H



#import "TRIPBMessage.h"
#import "TRIPBUInt32Array.h"

@interface TRIUIAssignment_ExplicitBuckets : TRIPBMessage

@property (retain, nonatomic) TRIPBUInt32Array *bucketArray;
@property (readonly, nonatomic) NSUInteger bucketArray_Count;


+(id)descriptor;


@end


#endif