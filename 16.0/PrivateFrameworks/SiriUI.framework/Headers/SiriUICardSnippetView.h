// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIUICARDSNIPPETVIEW_H
#define SIRIUICARDSNIPPETVIEW_H

@class UIView, UIButton, NSString;
@protocol SiriSharedUISnippetLoadingStateProviding, SiriUICardSnippetViewDataSource, SiriUICardSnippetViewDelegate;


#import "SiriUISashView.h"
#import "SiriUISnippetViewController.h"

@interface SiriUICardSnippetView : UIView <SiriSharedUISnippetLoadingStateProviding>

 {
    UIView *_cardView;
    SiriUISashView *_sashView;
}


@property (readonly, nonatomic) UIButton *backNavigationButton;
@property (weak, nonatomic) SiriUISnippetViewController *backingViewController; // ivar: _backingViewController
@property (weak, nonatomic) NSObject<SiriUICardSnippetViewDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SiriUICardSnippetViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isNavigating) BOOL navigating;
@property (nonatomic) BOOL shouldClipTopOfCard; // ivar: _shouldClipTopOfCard
@property (readonly) Class superclass;


-(BOOL)isLoading;
-(id)accessibilityIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_sashViewRecognizedTapGestureWithGestureRecognizer:(id)arg0 ;
-(void)layoutSubviews;
-(void)reloadData;
-(void)setCardView:(id)arg0 ;


@end


#endif