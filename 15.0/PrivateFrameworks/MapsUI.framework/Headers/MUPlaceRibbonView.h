// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUPLACERIBBONVIEW_H
#define MUPLACERIBBONVIEW_H

@class UIView, MURatingsCallToActionViewModel, NSMutableArray, NSArray;
@protocol MUPlaceRibbonViewDelegate;


#import "MUScrollableStackView.h"

@interface MUPlaceRibbonView : UIView {
    MUScrollableStackView *_contentStackView;
    MURatingsCallToActionViewModel *_callToActionViewModel;
    NSMutableArray *_focusItems;
}


@property (weak, nonatomic) NSObject<MUPlaceRibbonViewDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSArray *focusItems;
@property (readonly, nonatomic) BOOL hasContent;
@property (retain, nonatomic) NSArray *viewModels; // ivar: _viewModels


-(id)_visibleRibbonItemViews;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupStackView;
-(void)_updateAppearance;
-(void)reloadVisibility;


@end


#endif