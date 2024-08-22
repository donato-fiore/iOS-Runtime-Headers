// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUICARDCOLLECTIONVIEWCONTROLLER_H
#define SEARCHUICARDCOLLECTIONVIEWCONTROLLER_H

@class SFCard, NSString, UITextField;
@protocol SearchUICardTableBridgingProtocol, SearchUIViewTesting, SearchUICardViewDelegate, SearchUICommandDelegate, SFFeedbackListener, SearchUIResultsViewDelegate, SearchUISizingDelegate;


#import "SearchUICollectionViewController.h"
#import "SearchUITableModel.h"

@interface SearchUICardCollectionViewController : SearchUICollectionViewController <SearchUICardTableBridgingProtocol, SearchUIViewTesting>



@property (retain, nonatomic) SFCard *card; // ivar: _card
@property (weak, nonatomic) NSObject<SearchUICardViewDelegate> *cardViewDelegate;
@property (readonly) CGSize collectionViewContentSize;
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
@property (weak, nonatomic) UITextField *textField;
@property (nonatomic) BOOL threeDTouchEnabled;
@property (copy, nonatomic) id *viewDidUpdateHandler;
@property (copy, nonatomic) id *viewWillUpdateHandler;


-(id)cellForItemAtIndexPath:(id)arg0 ;
-(id)scrollViewForSizing;
-(id)tableView;
-(void)reloadViews;
-(void)updateTopPadding;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif