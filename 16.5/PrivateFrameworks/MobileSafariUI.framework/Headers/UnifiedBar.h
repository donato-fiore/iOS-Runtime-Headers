// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UNIFIEDBAR_H
#define UNIFIEDBAR_H

@class SFUnifiedBar, NSString, NSArray, UITextField;
@protocol SFUnifiedTabBarNavigationDelegate, _SFNavigationBarCommon, _SFBarRegistrationObserving, _SFBarRegistrationToken, _SFPopoverSourceInfo, _SFNavigationBarDelegateCommon;



@interface UnifiedBar : SFUnifiedBar <SFUnifiedTabBarNavigationDelegate, _SFNavigationBarCommon, _SFBarRegistrationObserving>

 {
    id<_SFBarRegistrationToken> *_barRegistrationToken;
}


@property (readonly, nonatomic) CGRect URLOutlineFrameInNavigationBarSpace;
@property (readonly, nonatomic) NSObject<_SFPopoverSourceInfo> *URLOutlinePopoverSourceInfo;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<_SFNavigationBarDelegateCommon> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<_SFPopoverSourceInfo> *formatMenuButtonPopoverSourceInfo;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *popoverPassthroughViews;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITextField *textField;


-(BOOL)canBecomeFirstResponder;
-(id)popoverSourceInfoForBarItem:(NSInteger)arg0 ;
-(id)viewForBarItem:(NSInteger)arg0 ;
-(struct CGRect )urlOutlineFrameRelativeToView:(id)arg0 ;
// -(void)animateLinkImage:(struct CGImage *)arg0 fromRect:(struct CGRect )arg1 inView:(id)arg2 toBarItem:(NSInteger)arg3 afterImageDisappearsBlock:(id)arg4 afterDestinationLayerBouncesBlock:(unk)arg5  ;
-(void)animateSafariIconLinkFromPoint:(struct CGPoint )arg0 inView:(id)arg1 ;
-(void)didCompleteBarRegistrationWithToken:(id)arg0 ;
-(void)metricsDidChange;
-(void)squishedBarTapped;
-(void)unifiedTabBar:(id)arg0 didFinishShowingAvailabilityLabelOfType:(NSInteger)arg1 ;
-(void)unifiedTabBar:(id)arg0 extensionButtonTapped:(id)arg1 extension:(id)arg2 ;
-(void)unifiedTabBar:(id)arg0 multipleExtensionButtonTapped:(id)arg1 ;
-(void)unifiedTabBarMediaStateMuteButtonTapped:(id)arg0 ;
-(void)unifiedTabBarMenuButtonClicked:(id)arg0 ;
-(void)unifiedTabBarMenuButtonReceivedTouchDown:(id)arg0 ;
-(void)unifiedTabBarMenuButtonTapped:(id)arg0 ;
-(void)unifiedTabBarReaderButtonTapped:(id)arg0 ;
-(void)unifiedTabBarReloadButtonTapped:(id)arg0 ;
-(void)unifiedTabBarStopButtonTapped:(id)arg0 ;
-(void)unifiedTabBarTranslationButtonTapped:(id)arg0 ;
-(void)unifiedTabBarURLTapped:(id)arg0 completionHandler:(id)arg1 ;
-(void)unifiedTabBarVoiceSearchButtonTapped:(id)arg0 ;


@end


#endif