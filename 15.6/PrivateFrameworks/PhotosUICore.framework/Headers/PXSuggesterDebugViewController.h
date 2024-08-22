// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSUGGESTERDEBUGVIEWCONTROLLER_H
#define PXSUGGESTERDEBUGVIEWCONTROLLER_H

@class UITableViewController, NSArray, NSString, NSDictionary, PHSuggestion, NSDate, UIActivityIndicatorView, UILabel, UIBarButtonItem;
@protocol PXOneUpPresentationDelegate;



@interface PXSuggesterDebugViewController : UITableViewController <PXOneUpPresentationDelegate>

 {
    NSArray *_heuristicallySortedItems;
    NSArray *_sortedItems;
    NSString *_name;
    NSDictionary *_options;
    PHSuggestion *_currentSuggestion;
    BOOL _fullLibraryIsEnabled;
    NSDate *_date;
    NSUInteger _currentSortCriteria;
    BOOL _showsInvalidItems;
    UIActivityIndicatorView *_spinnerView;
    UILabel *_noResultLabel;
    UIBarButtonItem *_fullLibraryButton;
    UIBarButtonItem *_dateButton;
    UIBarButtonItem *_showInvalidItemsButton;
    UIBarButtonItem *_sortButton;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)tableView:(id)arg0 canPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3 ;
-(BOOL)tableView:(id)arg0 shouldShowMenuForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)oneUpPresentationOrigin:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_stringWithSortCriteria:(NSUInteger)arg0 ;
-(id)assetsDataSourceManagerForSuggestion:(id)arg0 ;
-(id)dateButton;
-(id)fullLibraryButton;
-(id)initWithName:(id)arg0 options:(id)arg1 ;
-(id)oneUpPresentationDataSourceManager:(id)arg0 ;
-(id)oneUpPresentationMediaProvider:(id)arg0 ;
-(id)showInvalidItemsButton;
-(id)sortButton;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_fetchSuggestions;
-(void)_sortItems;
-(void)_updateToolbarItems;
-(void)configureCell:(id)arg0 withItem:(id)arg1 ;
-(void)didSelectDateButton:(id)arg0 ;
-(void)didSelectFullLibraryButton:(id)arg0 ;
-(void)didSelectShowInvalidItemsButton:(id)arg0 ;
-(void)didSelectSortButton:(id)arg0 ;
-(void)didStopProcessing;
-(void)refresh;
-(void)tableView:(id)arg0 accessoryButtonTappedForRowWithIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 performAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3 ;
-(void)updateShowInvalidItemsButton;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willStartProcessing;


@end


#endif