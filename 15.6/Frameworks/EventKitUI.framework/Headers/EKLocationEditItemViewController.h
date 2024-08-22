// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKLOCATIONEDITITEMVIEWCONTROLLER_H
#define EKLOCATIONEDITITEMVIEWCONTROLLER_H

@class UITableView, _UINavigationControllerPalette, UISearchBar, EKCalendarItem, EKVirtualConferenceRoomType, NSMutableDictionary, NSString, NSError, EKStructuredLocation, EKVirtualConference;
@protocol UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate, EKLocationVirtualConferenceSearchFieldsDelegate, EKUILocationSearchModelDelegate, VirtualConferenceRoomTypeSelectionDelegate, EKUIManagedViewController;


#import "EKEditItemViewController.h"
#import "EKLocationVirtualConferenceSearchFieldsView.h"
#import "EKUILocationSearchModel.h"
#import "EKUILocationRowModel.h"
#import "EKUIConferenceRoom.h"

@interface EKLocationEditItemViewController : EKEditItemViewController <UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate, EKLocationVirtualConferenceSearchFieldsDelegate, EKUILocationSearchModelDelegate, VirtualConferenceRoomTypeSelectionDelegate, EKUIManagedViewController>

 {
    UITableView *_tableView;
    _UINavigationControllerPalette *_palette;
    UISearchBar *_searchBar;
    EKLocationVirtualConferenceSearchFieldsView *_searchFieldsView;
    EKUILocationSearchModel *_searchModel;
    EKCalendarItem *_calendarItem;
    EKVirtualConferenceRoomType *_checkedRoomType;
    BOOL _shouldShowCheckedVirtualConference;
    NSMutableDictionary *_cachedConferenceRooms;
    CGSize _preferredContentSize;
    BOOL _supportsStructuredLocations;
    BOOL _tableConstraintsInstalled;
    BOOL _rotating;
    BOOL _wasFirstResponder;
}


@property (nonatomic) BOOL autoFillSelectedTextField; // ivar: _autoFillSelectedTextField
@property (nonatomic) BOOL conferenceTextFieldSelected; // ivar: _conferenceTextFieldSelected
@property (retain, nonatomic) EKUILocationRowModel *conferenceViewModel; // ivar: _conferenceViewModel
@property (readonly) BOOL conferenceViewModelRemoved;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableConferenceTextField; // ivar: _disableConferenceTextField
@property (nonatomic) BOOL forceSingleTextField; // ivar: _forceSingleTextField
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) EKUILocationRowModel *locationViewModel; // ivar: _locationViewModel
@property (readonly) BOOL locationViewModelRemoved;
@property (nonatomic) BOOL needsSave; // ivar: _needsSave
@property (nonatomic) BOOL pendingVirtualConference; // ivar: _pendingVirtualConference
@property (retain, nonatomic) NSError *pendingVirtualConferenceError; // ivar: _pendingVirtualConferenceError
@property (retain, nonatomic) EKUIConferenceRoom *selectedConferenceRoom; // ivar: _selectedConferenceRoom
@property (retain, nonatomic) EKStructuredLocation *selectedLocation; // ivar: _selectedLocation
@property (retain, nonatomic) EKVirtualConference *selectedVirtualConference; // ivar: _selectedVirtualConference
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger supportedSearchTypes; // ivar: _supportedSearchTypes
@property (copy, nonatomic) id *viewDidAppearBlock; // ivar: _viewDidAppearBlock


+(id)_boldTitleFont;
+(id)_sectionNameForSection:(NSUInteger)arg0 ;
-(BOOL)_singleSearchBar;
-(BOOL)canManagePresentationStyle;
-(BOOL)presentModally;
-(BOOL)searchIsFirstResponder;
-(BOOL)shouldIncludeConferenceRoom:(id)arg0 ;
-(BOOL)showAvailableConferenceTypesAsRows;
-(BOOL)showingCurrentLocationRow;
-(BOOL)showingTextRow;
-(BOOL)tableView:(id)arg0 wantsHeaderForSection:(NSInteger)arg1 ;
-(BOOL)wantsManagement;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_cellForConferenceRoom:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_focusedTextField;
-(id)calendarItemForSearchModel:(id)arg0 ;
-(id)conferenceRoomForRecent:(id)arg0 ;
-(id)contactsImage;
-(id)initWithFrame:(struct CGRect )arg0 styleProvider:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 styleProvider:(id)arg1 calendarItem:(id)arg2 eventStore:(id)arg3 ;
-(id)itemAtIndexPath:(id)arg0 ;
-(id)locationArrowImage;
-(id)pinImage;
-(id)searchText;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)title;
-(struct CGSize )preferredContentSize;
-(void)_setupViewsAndConstraints;
-(void)conferenceRoomSearchUpdated:(id)arg0 ;
-(void)contactsSearchUpdated:(id)arg0 ;
-(void)currentLocationUpdated:(id)arg0 ;
-(void)eventsSearchUpdated:(id)arg0 ;
-(void)frequentsSearchUpdated:(id)arg0 ;
-(void)locationSearchModel:(id)arg0 selectedLocation:(id)arg1 withError:(id)arg2 ;
-(void)mapSearchUpdated:(id)arg0 ;
-(void)pendingVideoConferenceUpdated:(id)arg0 ;
-(void)recentsSearchUpdated:(id)arg0 ;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg0 ;
-(void)searchBecomeFirstResponder;
-(void)searchDoneTapped;
-(void)searchResignFirstResponder;
-(void)searchTextChanged:(id)arg0 ;
-(void)selectedRoomType:(id)arg0 ;
-(void)selectedTextFieldChanged:(id)arg0 ;
-(void)setPreferredContentSize:(struct CGSize )arg0 ;
-(void)setSearchText:(id)arg0 ;
-(void)setViewAppearedBlock:(id)arg0 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)textField:(id)arg0 didChange:(id)arg1 ;
-(void)textFieldDoneTapped:(id)arg0 ;
-(void)useAsString:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)virtualConferenceSearchUpdated:(id)arg0 ;


@end


#endif