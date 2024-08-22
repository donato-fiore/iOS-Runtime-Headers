// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDSTRIALEXPERIMENTIDENTIFIERS_H
#define DDSTRIALEXPERIMENTIDENTIFIERS_H

@class TRIExperimentIdentifiers;
@protocol NSSecureCoding;



@interface DDSTrialExperimentIdentifiers : TRIExperimentIdentifiers <NSSecureCoding>





+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExperimentId:(id)arg0 treatmentId:(id)arg1 deploymentId:(int)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif