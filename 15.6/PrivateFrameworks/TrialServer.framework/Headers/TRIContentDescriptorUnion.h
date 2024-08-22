// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRICONTENTDESCRIPTORUNION_H
#define TRICONTENTDESCRIPTORUNION_H

@class TRIExperimentDeployment, NSString<TRIFactorPackSetId>, TRIRolloutDeployment;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TRITreatmentContentDescriptor.h"

@interface TRIContentDescriptorUnion : NSObject <NSCopying>



@property (readonly, nonatomic) TRIExperimentDeployment *experiment; // ivar: _experiment
@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *factorPackSet; // ivar: _factorPackSet
@property (readonly, nonatomic) TRIRolloutDeployment *rollout; // ivar: _rollout
@property (readonly, nonatomic) TRITreatmentContentDescriptor *treatment; // ivar: _treatment
@property (readonly, nonatomic) unsigned char type; // ivar: _type


+(id)unionWithType:(unsigned char)arg0 experiment:(id)arg1 treatment:(id)arg2 rollout:(id)arg3 factorPackSet:(id)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToUnion:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementExperiment:(id)arg0 ;
-(id)copyWithReplacementFactorPackSet:(id)arg0 ;
-(id)copyWithReplacementRollout:(id)arg0 ;
-(id)copyWithReplacementTreatment:(id)arg0 ;
-(id)copyWithReplacementType:(unsigned char)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithType:(unsigned char)arg0 experiment:(id)arg1 treatment:(id)arg2 rollout:(id)arg3 factorPackSet:(id)arg4 ;


@end


#endif