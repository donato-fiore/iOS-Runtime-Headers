// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFBANNERBACKGROUNDVIEW_H
#define SFBANNERBACKGROUNDVIEW_H

@class UIVisualEffectView;



@interface SFBannerBackgroundView : UIVisualEffectView

@property (nonatomic) NSInteger bannerStyle; // ivar: _bannerStyle


-(id)initWithEffect:(id)arg0 ;
-(void)_updateStyle;
-(void)_updateVibrancy;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif