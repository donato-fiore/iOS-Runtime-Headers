// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUICARDTABLEVIEWCONTROLLER_H
#define SEARCHUICARDTABLEVIEWCONTROLLER_H

@class SFCard, NSString;
@protocol SearchUICardTableBridgingProtocol, SearchUICardViewDelegate, SearchUICommandDelegate, SFFeedbackListener, SearchUIResultsViewDelegate, SearchUISizingDelegate;


#import "SearchUITableViewController.h"
#import "SearchUITableModel.h"

@interface SearchUICardTableViewController : SearchUITableViewController <SearchUICardTableBridgingProtocol>



@property (retain, nonatomic) SFCard *card; // ivar: _card
@property (weak, nonatomic) NSObject<SearchUICardViewDelegate> *cardViewDelegate; // ivar: _cardViewDelegate
@property (copy, nonatomic) id *cellWillDisplayHandler;
@property (weak, nonatomic) NSObject<SearchUICommandDelegate> *commandDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dragInteractionEnabled;
@property (weak, nonatomic) NSObject<SFFeedbackListener> *feedbackListener;
@property (readonly) NSUInteger hash;
@property (weak) NSObject<SearchUIResultsViewDelegate> *resultsViewDelegate;
@property (nonatomic) BOOL rowSelectionAppearanceEnabled; // ivar: _rowSelectionAppearanceEnabled
@property (nonatomic) BOOL shouldUseInsetRoundedSections;
@property (nonatomic) BOOL shouldUseStandardSectionInsets;
@property (nonatomic) BOOL showsVerticalScrollIndicator;
@property (weak) NSObject<SearchUISizingDelegate> *sizingDelegate;
@property (readonly) Class superclass;
@property (retain, nonatomic) SearchUITableModel *tableModel;
@property (copy, nonatomic) id *tableViewDidUpdateHandler;
@property (copy, nonatomic) id *tableViewWillUpdateHandler;
@property (nonatomic) BOOL threeDTouchEnabled;


-(BOOL)shouldDrawTopAndBottomSeparators;
-(BOOL)tableView:(id)arg0 shouldDrawBottomSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldDrawTopSeparatorForSection:(NSInteger)arg1 ;
-(CGFloat)offScreenContentScrollDistance;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(id)cellForIndexPath:(id)arg0 reuseIfPossible:(BOOL)arg1 ;
-(id)init;
-(id)scrollViewForSizing;
-(void)reloadViews;
-(void)showViewController:(id)arg0 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)updateSelectionStyleForCell:(id)arg0 ;
-(void)updateTopPadding;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif