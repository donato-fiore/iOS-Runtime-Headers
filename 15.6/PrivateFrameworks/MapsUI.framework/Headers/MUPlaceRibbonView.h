// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUPLACERIBBONVIEW_H
#define MUPLACERIBBONVIEW_H

@class UIView, MURatingsCallToActionViewModel, NSMutableArray, NSString, NSArray;
@protocol UIScrollViewDelegate, MUScrollAnalyticActionObserving, MUPlaceRibbonViewDelegate;


#import "MUScrollableStackView.h"

@interface MUPlaceRibbonView : UIView <UIScrollViewDelegate>

 {
    MUScrollableStackView *_contentStackView;
    MURatingsCallToActionViewModel *_callToActionViewModel;
    NSMutableArray *_focusItems;
    CGPoint _beginAnalyticsScrollingPoint;
}


@property (weak, nonatomic) NSObject<MUScrollAnalyticActionObserving> *analyticsDelegate; // ivar: _analyticsDelegate
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MUPlaceRibbonViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *focusItems;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *viewModels; // ivar: _viewModels


-(id)_visibleRibbonItemViews;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupStackView;
-(void)_updateAppearance;
-(void)reloadVisibility;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;


@end


#endif