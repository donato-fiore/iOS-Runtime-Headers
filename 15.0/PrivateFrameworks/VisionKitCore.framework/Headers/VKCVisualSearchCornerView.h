// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKCVISUALSEARCHCORNERVIEW_H
#define VKCVISUALSEARCHCORNERVIEW_H

@class NSString, NSMutableArray, NSArray;
@protocol VKCCornerLookupButtonDelegate, VKCVisualSearchCornerViewDelegate;


#import "VKCTappableView.h"
#import "VKImageAnalysis.h"

@interface VKCVisualSearchCornerView : VKCTappableView <VKCCornerLookupButtonDelegate>



@property (copy, nonatomic) NSString *_customAnalyticsIdentifier; // ivar: __customAnalyticsIdentifier
@property (retain, nonatomic) VKImageAnalysis *analysis; // ivar: _analysis
@property (readonly, nonatomic) CGFloat buttonSpacing;
@property (retain, nonatomic) NSMutableArray *cornerButtons; // ivar: _cornerButtons
@property (retain, nonatomic) NSArray *cornerResultItems; // ivar: _cornerResultItems
@property (weak, nonatomic) NSObject<VKCVisualSearchCornerViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGRect visibleScrollViewUnitRect; // ivar: _visibleScrollViewUnitRect


-(BOOL)_itemObscuredByViewport:(id)arg0 ;
-(id)_resultItems;
-(id)init;
-(struct CGSize )intrinsicContentSize;
-(void)_contentSizeChanged:(id)arg0 ;
-(void)_showCornerLookupButtonsForResults:(id)arg0 ;
-(void)_updateButtonFrames;
-(void)automaticallyShowVisualSearchResultsIfApplicable;
-(void)generateVisualSearchResultForItems:(id)arg0 queryID:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)invalidateButtonsForResults;
-(void)lookupButton:(id)arg0 didProcessResultWithDuration:(CGFloat)arg1 ;
-(void)lookupButton:(id)arg0 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect )arg1 ;
-(void)lookupButtonDidDismissController:(id)arg0 ;
-(void)scrollViewDidZoomToUnitRect:(struct CGRect )arg0 ;
-(void)sendDismissedAnalyticsEventEventWithItem:(id)arg0 ;
-(void)sendProcessingAnalyticsEventEventWithItem:(id)arg0 duration:(CGFloat)arg1 ;
-(void)showVisualSearchResultView;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif