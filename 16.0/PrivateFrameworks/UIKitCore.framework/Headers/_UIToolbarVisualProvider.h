// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UITOOLBARVISUALPROVIDER_H
#define _UITOOLBARVISUALPROVIDER_H

@class NSString;
@protocol _UIBarAppearanceChangeObserver;

#import <Foundation/Foundation.h>

#import "UIView.h"
#import "UIToolbar.h"

@interface _UIToolbarVisualProvider : NSObject

@property (readonly, nonatomic) NSObject<_UIBarAppearanceChangeObserver> *appearanceObserver;
@property (copy, nonatomic) NSString *backdropGroupName; // ivar: _backdropGroupName
@property (readonly, nonatomic) CGRect backgroundFrame;
@property (nonatomic) CGFloat backgroundTransitionProgress;
@property (readonly, nonatomic) UIView *currentBackgroundView; // ivar: _currentBackgroundView
@property (retain, nonatomic) UIView *customBackgroundView; // ivar: _customBackgroundView
@property (nonatomic) NSInteger itemDistribution;
@property (readonly, nonatomic) UIToolbar *toolbar; // ivar: _toolbar
@property (readonly, nonatomic) BOOL toolbarIsSmall;
@property (nonatomic) BOOL useModernAppearance;


+(BOOL)shouldDecodeSubviews;
-(id)initWithToolbar:(id)arg0 ;
-(id)traitCollectionForChild:(id)arg0 baseTraitCollection:(id)arg1 ;
-(struct CGSize )defaultSizeForOrientation:(NSInteger)arg0 ;
-(void)customViewChangedForButtonItem:(id)arg0 ;
-(void)drawBackgroundViewInRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)positionToolbarButtonsAndResetFontScaleAdjustment:(BOOL)arg0 ;
-(void)prepare;
-(void)updateAppearance;
-(void)updateArchivedSubviews:(id)arg0 ;
-(void)updateBackgroundGroupName;
-(void)updateBarBackground;
-(void)updateBarBackgroundSize;
-(void)updateBarForStyle:(NSInteger)arg0 ;
-(void)updateItemsForNewFrame:(id)arg0 ;
-(void)updateWithItems:(id)arg0 fromOldItems:(id)arg1 animate:(BOOL)arg2 ;


@end


#endif