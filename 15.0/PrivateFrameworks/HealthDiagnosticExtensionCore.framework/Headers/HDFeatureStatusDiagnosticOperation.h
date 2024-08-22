// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDFEATURESTATUSDIAGNOSTICOPERATION_H
#define HDFEATURESTATUSDIAGNOSTICOPERATION_H



#import "HDDiagnosticOperation.h"

@interface HDFeatureStatusDiagnosticOperation : HDDiagnosticOperation



-(id)reportFilename;
-(void)_reportFeatureStatusByFeature;
-(void)_reportFeatureStatusForFeature:(id)arg0 healthStore:(id)arg1 ;
-(void)_reportRequirementSatisfactionOverridesByFeature;
-(void)run;


@end


#endif