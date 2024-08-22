// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUANNOUNCETITLEVIEWCONTROLLER_H
#define HUANNOUNCETITLEVIEWCONTROLLER_H

@class UIImageView, NSString;
@protocol HUConfigurationViewControllerFlow, HUConfigurationViewController, HUConfigurationViewControllerDelegate;


#import "HUCenterFillOBWelcomeController.h"

@interface HUAnnounceTitleViewController : HUCenterFillOBWelcomeController <HUConfigurationViewControllerFlow, HUConfigurationViewController>



@property (retain, nonatomic) UIImageView *contentImageView; // ivar: _contentImageView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUConfigurationViewControllerDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFinalStep;
@property (readonly) Class superclass;


-(BOOL)_limitToNonScrollingContentHeight;
-(Class)onboardingFlowClass;
-(id)initWithHome:(id)arg0 ;
-(void)continuePressed:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif