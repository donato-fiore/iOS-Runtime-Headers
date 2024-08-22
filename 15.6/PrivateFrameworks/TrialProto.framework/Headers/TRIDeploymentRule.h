// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIDEPLOYMENTRULE_H
#define TRIDEPLOYMENTRULE_H

@class NSString, NSMutableArray;


#import "TRIPBMessage.h"

@interface TRIDeploymentRule : TRIPBMessage

@property (nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasTreatmentId;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *predicateArray;
@property (readonly, nonatomic) NSUInteger predicateArray_Count;
@property (copy, nonatomic) NSString *treatmentId;


+(id)descriptor;


@end


#endif