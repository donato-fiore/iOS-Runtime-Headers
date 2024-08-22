// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIEXPERIMENTALLOCATIONSTATUS_H
#define TRIEXPERIMENTALLOCATIONSTATUS_H

@class NSString, NSArray;


#import "TRIAllocationStatus.h"

@interface TRIExperimentAllocationStatus : TRIAllocationStatus

@property (readonly, nonatomic) int deploymentId; // ivar: _deploymentId
@property (readonly, nonatomic) NSString *experimentId; // ivar: _experimentId
@property (readonly, nonatomic) NSArray *namespaces; // ivar: _namespaces
@property (readonly, nonatomic) NSString *treatmentId; // ivar: _treatmentId


-(BOOL)isEqualToStatus:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(unsigned char)arg0 date:(id)arg1 experimentId:(id)arg2 deploymentId:(int)arg3 treatmentId:(id)arg4 ;
-(id)initWithType:(unsigned char)arg0 date:(id)arg1 experimentId:(id)arg2 deploymentId:(int)arg3 treatmentId:(id)arg4 namespaces:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif