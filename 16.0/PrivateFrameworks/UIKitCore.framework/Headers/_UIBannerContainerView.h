// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIBANNERCONTAINERVIEW_H
#define _UIBANNERCONTAINERVIEW_H

@class NSMutableArray;


#import "UIView.h"

@interface _UIBannerContainerView : UIView

@property (retain, nonatomic) NSMutableArray *banners; // ivar: _banners
@property (retain, nonatomic) NSMutableArray *constraints; // ivar: _constraints


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)_bannerAnimationToVisible:(BOOL)arg0 hiddenValue:(id)arg1 visibleValue:(id)arg2 withKeyPath:(id)arg3 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_dismissBanner:(id)arg0 alongsideAnimations:(id)arg1 completion:(id)arg2 ;
-(void)_presentBanner:(id)arg0 completion:(id)arg1 ;
-(void)_setBanner:(id)arg0 visible:(BOOL)arg1 alongsideAnimations:(id)arg2 completion:(id)arg3 ;
-(void)statusBarFrameDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif