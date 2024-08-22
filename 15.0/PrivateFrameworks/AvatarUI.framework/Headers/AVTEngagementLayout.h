// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTENGAGEMENTLAYOUT_H
#define AVTENGAGEMENTLAYOUT_H

@protocol AVTCollectionViewLayout;

#import <Foundation/Foundation.h>


@interface AVTEngagementLayout : NSObject <AVTCollectionViewLayout>



@property (readonly, nonatomic) CGSize defaultCellSize; // ivar: _defaultCellSize
@property (readonly, nonatomic) CGSize engagedCellSize; // ivar: _engagedCellSize
@property (nonatomic) UIEdgeInsets engagementBoundsInsets; // ivar: _engagementBoundsInsets
@property (readonly, copy, nonatomic) id *interItemSpacingProvider; // ivar: _interItemSpacingProvider
@property (nonatomic) BOOL useEngagementSpacing; // ivar: _useEngagementSpacing


+(CGFloat)minimumInterItemSpacingForVisibileBoundsSize:(struct CGSize )arg0 defaultCellSize:(struct CGSize )arg1 engagedCellSize:(struct CGSize )arg2 ;
+(struct UIEdgeInsets )insetsToCenterFirstAndLastItemsGivenContainerSize:(struct CGSize )arg0 itemSize:(struct CGSize )arg1 ;
-(CGFloat)contentOriginXForVisibleSize:(struct CGSize )arg0 ;
-(CGFloat)contentTrailingXForVisibleSize:(struct CGSize )arg0 ;
-(CGFloat)engagementForValue:(CGFloat)arg0 withRangeMin:(CGFloat)arg1 rangeMax:(CGFloat)arg2 rangePeak:(CGFloat)arg3 ;
-(CGFloat)engagementForValue:(CGFloat)arg0 withRangeMin:(CGFloat)arg1 rangeMax:(CGFloat)arg2 rangePeakBegin:(CGFloat)arg3 rangePeakEnd:(CGFloat)arg4 ;
-(CGFloat)interitemSpacingForEngagement:(CGFloat)arg0 ;
-(CGFloat)spacingAfterElementEndingAt:(CGFloat)arg0 engagementBounds:(struct CGRect )arg1 ;
-(CGFloat)spacingBeforElementStartingAt:(CGFloat)arg0 engagementBounds:(struct CGRect )arg1 ;
-(CGFloat)xAxisScale;
-(id)indexesForElementsInRect:(struct CGRect )arg0 visibleBounds:(struct CGRect )arg1 numberOfItems:(NSInteger)arg2 ;
-(id)initWithDefaultCellSize:(struct CGSize )arg0 engagedCellSize:(struct CGSize )arg1 baseInteritemSpacing:(CGFloat)arg2 ;
-(id)initWithDefaultCellSize:(struct CGSize )arg0 engagedCellSize:(struct CGSize )arg1 interItemSpacingProvider:(id)arg2 ;
-(id)initWithDefaultCellSize:(struct CGSize )arg0 engagedCellSize:(struct CGSize )arg1 useEngagementSpacing:(BOOL)arg2 interItemSpacingProvider:(id)arg3 ;
-(struct CGPoint )centerForCenteringElementAtIndex:(NSInteger)arg0 visibleBoundsSize:(struct CGSize )arg1 proposedOrigin:(struct CGPoint )arg2 ;
-(struct CGRect )engagementBoundsForContainerBounds:(struct CGRect )arg0 ;
-(struct CGRect )finalFrameForDisappearingElementAtOriginForVisibleBounds:(struct CGRect )arg0 ;
-(struct CGRect )frameForElementAfterElementEndingAt:(CGFloat)arg0 engagementBounds:(struct CGRect )arg1 verticalBounds:(struct ? )arg2 ;
-(struct CGRect )frameForElementAtIndex:(NSInteger)arg0 visibleBounds:(struct CGRect )arg1 ;
-(struct CGRect )frameForElementAtIndex:(NSInteger)arg0 visibleBounds:(struct CGRect )arg1 engagementBounds:(struct CGRect )arg2 verticalBounds:(struct ? )arg3 ;
-(struct CGRect )frameForElementBeforeElementStartingAt:(CGFloat)arg0 engagementBounds:(struct CGRect )arg1 verticalBounds:(struct ? )arg2 ;
-(struct CGRect )frameForElementBeforeOriginForVisibleBounds:(struct CGRect )arg0 ;
-(struct CGRect )initialFrameForAppearingElementAtOriginForVisibleBounds:(struct CGRect )arg0 ;
-(struct CGSize )cellSizeForEngagement:(CGFloat)arg0 ;
-(struct CGSize )contentSizeForVisibleBounds:(struct CGRect )arg0 numberOfItems:(NSInteger)arg1 ;
-(struct CGSize )engagementSizeForVisibleBoundsSize:(struct CGSize )arg0 ;


@end


#endif