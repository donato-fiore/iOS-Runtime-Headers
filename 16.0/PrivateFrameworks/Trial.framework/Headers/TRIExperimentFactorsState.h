// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIEXPERIMENTFACTORSSTATE_H
#define TRIEXPERIMENTFACTORSSTATE_H

@class NSString;


#import "TRIFactorsState.h"
#import "TRIExperimentDeployment.h"

@interface TRIExperimentFactorsState : TRIFactorsState

@property (readonly, nonatomic) TRIExperimentDeployment *deployment; // ivar: _deployment
@property (readonly, nonatomic) NSString *treatmentId; // ivar: _treatmentId


+(BOOL)supportsSecureCoding;
-(BOOL)_isEqualToState:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)experimentIdentifiers;
-(id)initWithDeployment:(id)arg0 treatmentId:(id)arg1 ;
-(id)persisted;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif