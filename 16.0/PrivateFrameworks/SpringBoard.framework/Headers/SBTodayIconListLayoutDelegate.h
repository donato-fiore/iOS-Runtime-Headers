// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBTODAYICONLISTLAYOUTDELEGATE_H
#define SBTODAYICONLISTLAYOUTDELEGATE_H

@class NSMutableDictionary, UIView, NSString, SBIconListView, UIScrollView;
@protocol SBIconListLayoutDelegate;

#import <Foundation/Foundation.h>


@interface SBTodayIconListLayoutDelegate : NSObject <SBIconListLayoutDelegate>



@property (nonatomic) UIEdgeInsets additionalLayoutInsets; // ivar: _additionalLayoutInsets
@property (nonatomic) UIEdgeInsets carouselInsets; // ivar: _carouselInsets
@property (nonatomic, getter=isCarouselLayout) BOOL carouselLayout; // ivar: _carouselLayout
@property (retain, nonatomic) NSMutableDictionary *catchupProperties; // ivar: _catchupProperties
@property (retain, nonatomic) NSMutableDictionary *catchupTimers; // ivar: _catchupTimers
@property (readonly, nonatomic) CGFloat collapseHeight; // ivar: _collapseHeight
@property (weak, nonatomic) UIView *containerView; // ivar: _containerView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat dismissProgress; // ivar: _dismissProgress
@property (readonly, nonatomic) CGFloat distanceToApex; // ivar: _distanceToApex
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) SBIconListView *iconListView; // ivar: _iconListView
@property (nonatomic) CGFloat revealProgress; // ivar: _revealProgress
@property (readonly, nonatomic) CGFloat revealProgressMaxTranslation; // ivar: _revealProgressMaxTranslation
@property (nonatomic, getter=isRevealed) BOOL revealed; // ivar: _revealed
@property (weak, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (readonly) Class superclass;
@property (nonatomic, getter=isVisuallyRevealed) BOOL visuallyRevealed; // ivar: _visuallyRevealed


-(CGFloat)_iconListView:(id)arg0 originYForIconCoordinate:(struct SBIconCoordinate )arg1 metrics:(id)arg2 adjustedForRevealProgress:(BOOL)arg3 ;
-(CGFloat)unadjustedOriginYForIconCoordinate:(struct SBIconCoordinate )arg0 ;
-(NSUInteger)iconListView:(id)arg0 rowAtPoint:(struct CGPoint )arg1 metrics:(id)arg2 proposedRow:(NSUInteger)arg3 ;
-(id)initWithIconListView:(id)arg0 ;
-(struct CGPoint )iconListView:(id)arg0 centerForIconCoordinate:(struct SBIconCoordinate )arg1 metrics:(id)arg2 proposedCenter:(struct CGPoint )arg3 ;
-(struct CGPoint )iconListView:(id)arg0 originForIconCoordinate:(struct SBIconCoordinate )arg1 metrics:(id)arg2 proposedOrigin:(struct CGPoint )arg3 ;
-(struct CGRect )unadjustedBoundsForIconCoordinate:(struct SBIconCoordinate )arg0 ;
-(struct CGSize )iconListView:(id)arg0 sizeThatFits:(struct CGSize )arg1 metrics:(id)arg2 proposedSize:(struct CGSize )arg3 ;
-(struct SBTodayIconListLayoutAttributes )layoutAttributesForIconCoordinate:(struct SBIconCoordinate )arg0 metrics:(id)arg1 adjustedForRevealProgress:(BOOL)arg2 ;
-(void)_layoutFocusGuideViewsInListView:(id)arg0 ;
-(void)_reorderSubviewsForCarouselLayoutInListView:(id)arg0 ;
-(void)iconListView:(id)arg0 willLayoutIconView:(id)arg1 ;
-(void)iconListViewDidLayoutIcons:(id)arg0 ;


@end


#endif