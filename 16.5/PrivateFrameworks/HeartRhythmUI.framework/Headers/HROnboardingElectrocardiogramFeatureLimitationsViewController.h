// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HRONBOARDINGELECTROCARDIOGRAMFEATURELIMITATIONSVIEWCONTROLLER_H
#define HRONBOARDINGELECTROCARDIOGRAMFEATURELIMITATIONSVIEWCONTROLLER_H



#import "HRSpeedBumpViewController.h"

@interface HROnboardingElectrocardiogramFeatureLimitationsViewController : HRSpeedBumpViewController



-(BOOL)_hasOnboardedBeforeWithStore:(id)arg0 ;
-(id)_makeSpeedBumpItemForUpdateOnboarding:(BOOL)arg0 ;
-(id)initForOnboarding:(BOOL)arg0 upgradingFromAlgorithmVersion:(NSInteger)arg1 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif