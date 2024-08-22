// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIUIASSIGNMENT_H
#define TRIUIASSIGNMENT_H

@class NSString;


#import "TRIPBMessage.h"

@interface TRIUIAssignment : TRIPBMessage

@property (nonatomic) BOOL hasNumBuckets;
@property (nonatomic) BOOL hasTreatmentId;
@property (nonatomic) unsigned int numBuckets;
@property (copy, nonatomic) NSString *treatmentId;


+(id)descriptor;


@end


#endif