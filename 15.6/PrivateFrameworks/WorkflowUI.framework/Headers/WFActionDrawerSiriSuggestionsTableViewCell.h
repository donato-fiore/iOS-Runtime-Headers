// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFACTIONDRAWERSIRISUGGESTIONSTABLEVIEWCELL_H
#define WFACTIONDRAWERSIRISUGGESTIONSTABLEVIEWCELL_H

@class UITableViewCell, NSLayoutConstraint, UICollectionView, UIImage, UIButton, INIntent, WFActionDrawerSection, UIViewController;
@protocol WFActionDrawerSiriSuggestionsCollectionViewManagerDelegate, WFActionDrawerSiriSuggestionsTableViewCellDailyRoutineDelegate;


#import "WFActionDrawerSiriSuggestionsCollectionViewManager.h"
#import "WFModuleTitleView.h"

@interface WFActionDrawerSiriSuggestionsTableViewCell : UITableViewCell <WFActionDrawerSiriSuggestionsCollectionViewManagerDelegate>



@property (retain, nonatomic) NSLayoutConstraint *collectionViewHeightConstraint; // ivar: _collectionViewHeightConstraint
@property (weak, nonatomic) NSObject<WFActionDrawerSiriSuggestionsTableViewCellDailyRoutineDelegate> *dailyRoutineDelegate; // ivar: _dailyRoutineDelegate
@property (weak, nonatomic) UICollectionView *donationsCollectionView; // ivar: _donationsCollectionView
@property (retain, nonatomic) WFActionDrawerSiriSuggestionsCollectionViewManager *donationsCollectionViewManager; // ivar: _donationsCollectionViewManager
@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (weak, nonatomic) UIButton *infoButton; // ivar: _infoButton
@property (retain, nonatomic) INIntent *intent; // ivar: _intent
@property (readonly, nonatomic) WFActionDrawerSection *section; // ivar: _section
@property (weak, nonatomic) WFModuleTitleView *titleView; // ivar: _titleView
@property (weak, nonatomic) UIViewController *viewController; // ivar: _viewController


+(NSInteger)cellTypeForIntent:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)configureForDailyRoutines:(BOOL)arg0 ;
-(void)configureLoading;
-(void)configureWithActionDrawerSection:(id)arg0 ;
-(void)configureWithActionDrawerSection:(id)arg0 dailyRoutineDelegate:(id)arg1 viewController:(id)arg2 ;
-(void)siriSuggestionsCollectionViewManager:(id)arg0 didSelectAction:(id)arg1 ;
-(void)siriSuggestionsCollectionViewManager:(id)arg0 showViewController:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif