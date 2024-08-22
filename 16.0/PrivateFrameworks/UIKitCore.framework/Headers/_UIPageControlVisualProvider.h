// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIPAGECONTROLVISUALPROVIDER_H
#define _UIPAGECONTROLVISUALPROVIDER_H


#import <Foundation/Foundation.h>

#import "UIPageControl.h"
#import "UIImage.h"

@interface _UIPageControlVisualProvider : NSObject {
    UIPageControl *_pageControl;
    NSInteger _displayedPage;
}


@property (readonly, nonatomic) NSInteger displayedPage;
@property (nonatomic) CGFloat indicatorOpacity;
@property (nonatomic) NSInteger interactionState; // ivar: _interactionState
@property (retain, nonatomic) UIImage *preferredActiveIndicatorImage; // ivar: _preferredActiveIndicatorImage
@property (retain, nonatomic) UIImage *preferredIndicatorImage;


-(BOOL)shouldDisableTouchTracking;
-(id)customActiveIndicatorImageForPage:(NSInteger)arg0 ;
-(id)customIndicatorImageForPage:(NSInteger)arg0 ;
-(id)initWithPageControl:(id)arg0 ;
-(struct CGRect )indicatorFrameForPage:(NSInteger)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeForNumberOfPages:(NSInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)didEndTrackingWithTouch:(id)arg0 ;
-(void)didUpdateBackgroundEffect;
-(void)didUpdateBackgroundStyle;
-(void)didUpdateCurrentPageIndicatorTintColor;
-(void)didUpdateCustomLayoutValues;
-(void)didUpdateInteractionTypeAvailability;
-(void)didUpdateLayoutDirection;
-(void)didUpdateNumberOfPages;
-(void)didUpdatePageIndicatorTintColor;
-(void)invalidateIndicators;
-(void)layoutSubviews;
-(void)prepare;
-(void)pruneArchivedSubviews:(id)arg0 ;
-(void)setCustomActiveIndicatorImage:(id)arg0 forPage:(NSInteger)arg1 ;
-(void)setCustomIndicatorImage:(id)arg0 forPage:(NSInteger)arg1 ;
-(void)teardownPageControl;
-(void)traitCollectionDidChangeOnSubtree:(id)arg0 ;
-(void)updateDisplayedPageToCurrentPage;


@end


#endif