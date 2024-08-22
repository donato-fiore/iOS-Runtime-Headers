// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HRONBOARDINGATRIALFIBRILLATIONWHATISVIEWCONTROLLER_H
#define HRONBOARDINGATRIALFIBRILLATIONWHATISVIEWCONTROLLER_H



#import "HROnboardingHeroExplanationViewController.h"
#import "HRVideoPlayerView.h"

@interface HROnboardingAtrialFibrillationWhatIsViewController : HROnboardingHeroExplanationViewController

@property (retain, nonatomic) HRVideoPlayerView *videoPlayerView; // ivar: _videoPlayerView


-(NSInteger)stackedButtonViewLastButtonMode;
-(id)bodyString;
-(id)buttonTitleString;
-(id)createHeroView;
-(id)initForOnboarding:(BOOL)arg0 upgradingFromAlgorithmVersion:(NSInteger)arg1 ;
-(id)titleString;
-(void)setUpUI;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif