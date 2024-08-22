// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OKNAVIGATORSCROLLVIEWCONTROLLER_H
#define OKNAVIGATORSCROLLVIEWCONTROLLER_H

@class UIPushBehavior;


#import "OKNavigatorScrollViewControllerProxy.h"

@interface OKNavigatorScrollViewController : OKNavigatorScrollViewControllerProxy {
    UIPushBehavior *_velocityPushBehavior;
}




+(id)supportedSettings;
-(id)dynamicsPushBehaviors;
-(id)layoutSettingsKeys;
-(struct CGPoint )contentOffset;
-(struct CGRect )contentBounds;
-(struct CGSize )contentSize;
-(struct CGSize )settingContentSize;
-(void)commonInit;
-(void)dealloc;
-(void)pushWatchdog:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)setSettingAlwaysBounceHorizontal:(BOOL)arg0 ;
-(void)setSettingAlwaysBounceVertical:(BOOL)arg0 ;
-(void)setSettingContentSize:(struct CGSize )arg0 ;
-(void)setSettingIndicatorStyle:(NSUInteger)arg0 ;
-(void)setSettingShowsHorizontalScrollIndicator:(BOOL)arg0 ;
-(void)setSettingShowsVerticalScrollIndicator:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif