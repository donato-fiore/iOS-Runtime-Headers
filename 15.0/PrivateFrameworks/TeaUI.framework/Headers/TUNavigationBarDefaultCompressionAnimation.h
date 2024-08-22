// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUNAVIGATIONBARDEFAULTCOMPRESSIONANIMATION_H
#define TUNAVIGATIONBARDEFAULTCOMPRESSIONANIMATION_H

@class UINavigationBar, UIView;
@protocol TUBarCompressionAnimating;

#import <Foundation/Foundation.h>

#import "TUAnimationFloatFunction.h"

@interface TUNavigationBarDefaultCompressionAnimation : NSObject <TUBarCompressionAnimating>



@property (nonatomic) BOOL compressTitleView; // ivar: _compressTitleView
@property (nonatomic) BOOL hideTitleOnTop; // ivar: _hideTitleOnTop
@property (readonly, nonatomic) UINavigationBar *navigationBar; // ivar: _navigationBar
@property (retain, nonatomic) TUAnimationFloatFunction *opacityFunction; // ivar: _opacityFunction
@property (retain, nonatomic) TUAnimationFloatFunction *scaleFunction; // ivar: _scaleFunction
@property (readonly, nonatomic) BOOL shouldCloseGapOnScroll; // ivar: shouldCloseGapOnScroll
@property (readonly, nonatomic) BOOL shouldCompressAtTop; // ivar: shouldCompressAtTop
@property (retain, nonatomic) UIView *titleView; // ivar: _titleView
@property (nonatomic) CGFloat topOffset; // ivar: topOffset
@property (retain, nonatomic) TUAnimationFloatFunction *translateFunction; // ivar: _translateFunction


-(BOOL)animationShouldBeginForScrollView:(id)arg0 currentlyFullyCompressed:(BOOL)arg1 ;
-(CGFloat)maximumBarHeightForTraitCollection:(id)arg0 ;
-(CGFloat)minimumBarHeightForTraitCollection:(id)arg0 ;
-(id)fetchCustomTitleView;
-(id)fetchRegularTitleView;
-(id)initWithNavigationBar:(id)arg0 ;
-(void)prepareForUpdates;
-(void)reloadWithTraitCollection:(id)arg0 ;
-(void)scrollViewIsAtTop:(BOOL)arg0 ;
-(void)updateWithPercentage:(CGFloat)arg0 ;


@end


#endif