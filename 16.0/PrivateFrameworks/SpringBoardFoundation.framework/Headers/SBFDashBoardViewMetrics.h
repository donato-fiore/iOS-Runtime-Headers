// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFDASHBOARDVIEWMETRICS_H
#define SBFDASHBOARDVIEWMETRICS_H


#import <Foundation/Foundation.h>


@interface SBFDashBoardViewMetrics : NSObject



+(BOOL)_isPortrait;
+(BOOL)_presentsListBelowDateTime;
+(BOOL)layoutCentersContent:(NSUInteger)arg0 ;
+(BOOL)layoutUsesMargin:(NSUInteger)arg0 ;
+(BOOL)listScrollsDateTime;
+(CGFloat)_dateTimeMinXForReducedBounds:(struct CGRect )arg0 forPage:(NSUInteger)arg1 ;
+(CGFloat)_padSpecificInsets:(struct SBFDashBoardPadPageInsets )arg0 leading:(BOOL)arg1 ;
+(CGFloat)_padSpecificValueForDevice:(struct SBFDashBoardOrientationLeadingInsets )arg0 leading:(BOOL)arg1 ;
+(CGFloat)_padSpecificValueJ99:(CGFloat)arg0 otherPad:(CGFloat)arg1 ;
+(CGFloat)_phoneSpecificValueN56:(CGFloat)arg0 n61:(CGFloat)arg1 n69:(CGFloat)arg2 ;
+(CGFloat)_phoneSpecificValueN56:(CGFloat)arg0 n61:(CGFloat)arg1 n69:(CGFloat)arg2 d22:(CGFloat)arg3 ;
+(CGFloat)dateBaselineToListY;
+(CGFloat)listInsetXForPage:(NSUInteger)arg0 ;
+(CGFloat)listInsetXForPage:(NSUInteger)arg0 leading:(BOOL)arg1 ;
+(CGFloat)listMinYForPage:(NSUInteger)arg0 ;
+(CGFloat)listWidthForPage:(NSUInteger)arg0 ;
+(CGFloat)scaledFontSize:(CGFloat)arg0 withMaximumFontSizeCategory:(id)arg1 ;
+(CGFloat)searchBarWidth;
+(CGFloat)searchClippingLineMaxY;
+(CGFloat)singleLineDateViewBaselineDifferenceY;
+(CGFloat)timeLabelBaselineY;
+(CGFloat)timeLabelScrollPercentForPage:(NSUInteger)arg0 ;
+(CGFloat)timeLabelToSubtitleLabelDifferenceY;
+(CGFloat)timeSubtitleBaselineY;
+(CGFloat)timeToListInsetXforPage:(NSUInteger)arg0 ;
+(CGFloat)timeToSubtitleLabelBaselineDifferenceY;
+(NSUInteger)dateTimeLayoutForPage:(NSUInteger)arg0 ;
+(NSUInteger)listLayoutForPage:(NSUInteger)arg0 ;
+(id)dateFont;
+(id)dateOnlyLunarDateFont;
+(struct CGRect )_reducedPageBoundsFromBounds:(struct CGRect )arg0 forPage:(NSUInteger)arg1 ;
+(struct CGRect )suggestedFrameForCallToActionLabel:(id)arg0 yOffset:(CGFloat)arg1 inBounds:(struct CGRect )arg2 ;
+(struct CGRect )suggestedFrameForDateTimeViewInScreenCoordinates:(struct CGRect )arg0 centeredX:(BOOL)arg1 ;
+(struct CGRect )suggestedFrameForListForPage:(NSUInteger)arg0 pageBounds:(struct CGRect )arg1 ;
+(struct CGRect )suggestedFrameForListForPage:(NSUInteger)arg0 pageBounds:(struct CGRect )arg1 insets:(struct UIEdgeInsets )arg2 ;
+(struct CGRect )suggestedFrameForListForPage:(NSUInteger)arg0 pageBounds:(struct CGRect )arg1 insets:(struct UIEdgeInsets )arg2 scrollsDateTime:(BOOL)arg3 ;
+(struct CGRect )suggestedFrameForMediaArtworkForControlsFrame:(struct CGRect )arg0 bottomInset:(CGFloat)arg1 inPageBounds:(struct CGRect )arg2 ;
+(struct CGRect )suggestedFrameForMediaControlsForPageBounds:(struct CGRect )arg0 ;
+(struct CGRect )suggestedFrameForStatusView:(id)arg0 inView:(id)arg1 withInsets:(struct UIEdgeInsets )arg2 ;
+(struct UIEdgeInsets )_cachedGlyphInsetsForString:(id)arg0 withFont:(id)arg1 ;
+(struct UIEdgeInsets )suggestedContentInsetsForListForPage:(NSUInteger)arg0 pageBounds:(struct CGRect )arg1 ;
+(struct UIEdgeInsets )suggestedContentInsetsForListForPage:(NSUInteger)arg0 pageBounds:(struct CGRect )arg1 scrollsDateTime:(BOOL)arg2 ;


@end


#endif