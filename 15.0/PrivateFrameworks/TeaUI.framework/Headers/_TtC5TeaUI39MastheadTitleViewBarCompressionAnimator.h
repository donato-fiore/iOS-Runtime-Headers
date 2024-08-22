// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC5TEAUI39MASTHEADTITLEVIEWBARCOMPRESSIONANIMATOR_H
#define _TTC5TEAUI39MASTHEADTITLEVIEWBARCOMPRESSIONANIMATOR_H

@protocol TUBarCompressionAnimating;

#import <Foundation/Foundation.h>


@interface _TtC5TeaUI39MastheadTitleViewBarCompressionAnimator : NSObject <TUBarCompressionAnimating>

 {
    ? shouldAnimate;
    ? navigationBar;
}


@property (nonatomic, readonly) BOOL shouldCloseGapOnScroll;
@property (nonatomic, readonly) BOOL shouldCompressAtTop;
@property (nonatomic) CGFloat topOffset; // ivar: topOffset


-(BOOL)animationShouldBeginForScrollView:(id)arg0 currentlyFullyCompressed:(BOOL)arg1 ;
-(CGFloat)maximumBarHeightForTraitCollection:(id)arg0 ;
-(CGFloat)minimumBarHeightForTraitCollection:(id)arg0 ;
-(id)init;
-(void)prepareForUpdates;
-(void)reloadWithTraitCollection:(id)arg0 ;
-(void)scrollViewIsAtTop:(BOOL)arg0 ;
-(void)updateWithPercentage:(CGFloat)arg0 ;


@end


#endif