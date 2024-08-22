// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUGROUPEDACTIONSROWVIEW_H
#define MUGROUPEDACTIONSROWVIEW_H

@class UIView, NSArray, NSString;
@protocol MUActionRowItemViewDelegate, MUActionRowItemViewModelObserver, MUPlaceCardActionsRowViewDelegate;


#import "MUStackLayout.h"
#import "MUGroupedActionsRowViewConfiguration.h"

@interface MUGroupedActionsRowView : UIView <MUActionRowItemViewDelegate, MUActionRowItemViewModelObserver>

 {
    NSArray *_constraints;
    NSArray *_actionButtons;
    MUStackLayout *_stackLayout;
    MUGroupedActionsRowViewConfiguration *_configuration;
}


@property (readonly, nonatomic) NSArray *actionButtons;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MUPlaceCardActionsRowViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger preferredDistribution;
@property (readonly, nonatomic) NSInteger preferredOrientation;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *viewModels; // ivar: _viewModels


-(id)_itemViewForViewModel:(id)arg0 ;
-(id)_viewModelForItemView:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(void)_setupStackLayout;
-(void)_updateLayoutIfNeeded;
-(void)actionRowItemPresentedMenu:(id)arg0 ;
-(void)actionRowItemSelected:(id)arg0 ;
-(void)actionRowItemViewModelDidUpdate:(id)arg0 ;
-(void)createActionViews;
-(void)didMoveToWindow;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif