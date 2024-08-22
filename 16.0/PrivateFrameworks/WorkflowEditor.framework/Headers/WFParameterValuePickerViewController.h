// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFPARAMETERVALUEPICKERVIEWCONTROLLER_H
#define WFPARAMETERVALUEPICKERVIEWCONTROLLER_H

@class UITableViewController, NSSet, NSMutableDictionary, UIBarButtonItem, WFVariableSubstitutableParameterState, NSString, INObjectCollection, UILabel, UIView, WFDebouncer, WFParameter<WFParameterValuePickable>, UISearchBar, UISearchController;
@protocol UISearchResultsUpdating, UISearchBarDelegate, UITableViewDelegatePrivate, WFParameterEventObserver, WFParameterValuePickerTableViewCellDelegate, WFParameterValuePickerViewControllerDelegate, WFVariableProvider, WFVariableUIDelegate;


#import "WFParameterValuePickerDataSource.h"

@interface WFParameterValuePickerViewController : UITableViewController <UISearchResultsUpdating, UISearchBarDelegate, UITableViewDelegatePrivate, WFParameterEventObserver, WFParameterValuePickerTableViewCellDelegate>



@property (copy, nonatomic) NSSet *allowedVariableTypes; // ivar: _allowedVariableTypes
@property (nonatomic) BOOL allowsMultipleSelection; // ivar: _allowsMultipleSelection
@property (retain, nonatomic) NSMutableDictionary *cachedPrompts; // ivar: _cachedPrompts
@property (retain, nonatomic) NSMutableDictionary *cachedResults; // ivar: _cachedResults
@property (readonly, nonatomic) UIBarButtonItem *cancelBarButtonItem; // ivar: _cancelBarButtonItem
@property (retain, nonatomic) WFVariableSubstitutableParameterState *currentState; // ivar: _currentState
@property (copy, nonatomic) NSString *customPrompt; // ivar: _customPrompt
@property (retain, nonatomic) WFParameterValuePickerDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *defaultPrompt; // ivar: _defaultPrompt
@property (retain, nonatomic) INObjectCollection *defaultResults; // ivar: _defaultResults
@property (weak, nonatomic) NSObject<WFParameterValuePickerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIBarButtonItem *doneBarButtonItem; // ivar: _doneBarButtonItem
@property (retain, nonatomic) UILabel *errorMessageLabel; // ivar: _errorMessageLabel
@property (retain, nonatomic) UIView *errorMessageView; // ivar: _errorMessageView
@property (retain, nonatomic) UILabel *errorTitleLabel; // ivar: _errorTitleLabel
@property (nonatomic) BOOL hasScrolledToSelectedItem; // ivar: _hasScrolledToSelectedItem
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WFDebouncer *inputDebouncer; // ivar: _inputDebouncer
@property (nonatomic) NSInteger maximumSelectableItemsCount; // ivar: _maximumSelectableItemsCount
@property (copy, nonatomic) NSString *noOptionAvailableTitle; // ivar: _noOptionAvailableTitle
@property (readonly, nonatomic) WFParameter<WFParameterValuePickable> *parameter; // ivar: _parameter
@property (readonly, nonatomic) UIBarButtonItem *removeItemBarButtonItem; // ivar: _removeItemBarButtonItem
@property (copy, nonatomic) NSString *removeItemButtonTitle; // ivar: _removeItemButtonTitle
@property (retain, nonatomic) UISearchBar *searchBar; // ivar: _searchBar
@property (retain, nonatomic) UISearchController *searchController; // ivar: _searchController
@property (nonatomic) BOOL showsCancelButton; // ivar: _showsCancelButton
@property (nonatomic) BOOL showsPrompt; // ivar: _showsPrompt
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<WFVariableProvider> *variableProvider; // ivar: _variableProvider
@property (weak, nonatomic) NSObject<WFVariableUIDelegate> *variableUIDelegate; // ivar: _variableUIDelegate
@property (readonly, nonatomic) NSInteger widgetFamily; // ivar: _widgetFamily


-(BOOL)accessibilityPerformEscape;
-(BOOL)currentSelectedValueIsVariable:(id)arg0 ;
-(BOOL)currentSelectedValuesContainsState:(id)arg0 ;
-(BOOL)tableView:(id)arg0 shouldDrawBottomSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHaveFullLengthBottomSeparatorForSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForHeaderInSection:(NSInteger)arg1 ;
-(id)extractIntentsExecutionErrorFromError:(id)arg0 ;
-(id)initWithParameter:(id)arg0 widgetFamily:(NSInteger)arg1 allowsVariables:(BOOL)arg2 initialCollection:(id)arg3 currentState:(id)arg4 delegate:(id)arg5 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)cancelPickingValue;
-(void)configureCell:(id)arg0 forState:(id)arg1 ;
-(void)configureCell:(id)arg0 forVariable:(id)arg1 ;
-(void)displayError:(id)arg0 ;
-(void)displayNoOptionsAvailableMessageIfNeeded;
-(void)finishPickingValue;
-(void)loadView;
-(void)parameterAttributesDidChange:(id)arg0 ;
-(void)parameterValuePickerTableViewCell:(id)arg0 didToggleSelection:(BOOL)arg1 ;
-(void)performSearchWithUserInput:(id)arg0 ;
-(void)reloadChoosingPrompt;
-(void)reloadDisplayingValuesWithCollection:(id)arg0 searchTerm:(id)arg1 validateCurrentState:(BOOL)arg2 animatingDifferences:(BOOL)arg3 ;
-(void)reloadNavigationBarButtonItems;
-(void)requestRemovingItem;
-(void)resetVisibleCellsSelection;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)toggleCell:(id)arg0 atIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)updateSearchResultsFromCurrentUserInput;
-(void)validateCurrentStateWithCollection:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif