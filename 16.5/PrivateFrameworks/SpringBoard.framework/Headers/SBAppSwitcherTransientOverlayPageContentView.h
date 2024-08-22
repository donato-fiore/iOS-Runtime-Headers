// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAPPSWITCHERTRANSIENTOVERLAYPAGECONTENTVIEW_H
#define SBAPPSWITCHERTRANSIENTOVERLAYPAGECONTENTVIEW_H

@class UIView, SBOrientationTransformWrapperView, NSString;
@protocol SBAppSwitcherPageContentView, SBAppSwitcherTransientOverlayPageContentViewDelegate;


#import "SBAppLayout.h"

@interface SBAppSwitcherTransientOverlayPageContentView : UIView <SBAppSwitcherPageContentView>

 {
    SBOrientationTransformWrapperView *_contentWrapperView;
    NSInteger _orientation;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, copy, nonatomic) SBAppLayout *appLayout; // ivar: _appLayout
@property (nonatomic) NSInteger contentOrientation;
@property (readonly, nonatomic) BOOL contentRequiresGroupOpacity;
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (nonatomic) CGFloat cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBAppSwitcherTransientOverlayPageContentViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger maskedCorners;
@property (nonatomic) NSInteger orientation;
@property (readonly) Class superclass;
@property (nonatomic, getter=isVisible) BOOL visible; // ivar: _visible


-(id)initWithFrame:(struct CGRect )arg0 appLayout:(id)arg1 ;
-(void)invalidate;
-(void)layoutSubviews;


@end


#endif