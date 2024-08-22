// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISTATUSBARIMAGEVIEW_H
#define _UISTATUSBARIMAGEVIEW_H

@class NSString;
@protocol _UIStatusBarDisplayable;


#import "UIImageView.h"
#import "UIImage.h"
#import "UIAccessibilityHUDItem.h"

@interface _UIStatusBarImageView : UIImageView <_UIStatusBarDisplayable>



@property (retain, nonatomic) UIImage *accessibilityHUDImage; // ivar: _accessibilityHUDImage
@property (readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger fontStyle; // ivar: _fontStyle
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat iconScale; // ivar: _iconScale
@property (readonly, nonatomic) NSInteger overriddenVerticalAlignment;
@property (readonly, nonatomic) BOOL prefersBaselineAlignment;
@property (readonly, nonatomic) BOOL prefersCenterVerticalAlignment;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useDisabledAppearanceForAccessibilityHUD; // ivar: _useDisabledAppearanceForAccessibilityHUD
@property (readonly, nonatomic) BOOL wantsCrossfade;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)applyStyleAttributes:(id)arg0 ;


@end


#endif