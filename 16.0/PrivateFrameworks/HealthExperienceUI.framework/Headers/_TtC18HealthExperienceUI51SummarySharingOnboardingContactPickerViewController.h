// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC18HEALTHEXPERIENCEUI51SUMMARYSHARINGONBOARDINGCONTACTPICKERVIEWCONTROLLER_H
#define _TTC18HEALTHEXPERIENCEUI51SUMMARYSHARINGONBOARDINGCONTACTPICKERVIEWCONTROLLER_H

@class UIViewController;
@protocol UISearchControllerDelegate, UISearchBarDelegate;



@interface _TtC18HealthExperienceUI51SummarySharingOnboardingContactPickerViewController : UIViewController <UISearchControllerDelegate, UISearchBarDelegate>

 {
    ? healthExperienceStore;
    ? healthStore;
    ? sharingEntryStore;
    ? selectionFlowContext;
    ? _reachabilityQueryState;
    ? reachabilityQueryStateCancellable;
    ? $__lazy_storage_$_searchController;
    ? autocompleteResults;
    ? reachableContactIdentifiers;
    ? meContactIdentifier;
    ? resultsTableViewController;
    ? $__lazy_storage_$_splashView;
    ? $__lazy_storage_$_splashContainerView;
    ? resultsTableView;
    ? searchManager;
    ? currentSearchTaskID;
    ? isInitialReachabilityQuery;
    ? foundSearchResults;
    ? cancellables;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)cancelButtonTapped:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif