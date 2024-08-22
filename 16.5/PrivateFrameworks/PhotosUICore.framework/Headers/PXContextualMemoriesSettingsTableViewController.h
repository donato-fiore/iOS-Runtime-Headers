// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCONTEXTUALMEMORIESSETTINGSTABLEVIEWCONTROLLER_H
#define PXCONTEXTUALMEMORIESSETTINGSTABLEVIEWCONTROLLER_H

@class UITableViewController, NSString, UIView;
@protocol MKMapViewDelegate, CNContactPickerDelegate;


#import "PXContextualMemoriesSettings.h"

@interface PXContextualMemoriesSettingsTableViewController : UITableViewController <MKMapViewDelegate, CNContactPickerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *progressIndicatorView; // ivar: _progressIndicatorView
@property (retain, nonatomic) PXContextualMemoriesSettings *settings; // ivar: _settings
@property (nonatomic) BOOL showsDatePicker; // ivar: _showsDatePicker
@property (nonatomic) BOOL showsLocationPicker; // ivar: _showsLocationPicker
@property (readonly) Class superclass;


+(id)title;
-(BOOL)_isDatePickerCellAtIndexPath:(id)arg0 ;
-(BOOL)_isLocationPickerCellAtIndexPath:(id)arg0 ;
-(BOOL)_isPeopleValueCellAtIndexPath:(id)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)_sectionForDate;
-(NSInteger)_sectionForLocation;
-(NSInteger)_sectionForPeople;
-(NSInteger)_sectionForSettingOfClass:(Class)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_indexPathForDatePicker;
-(id)_indexPathForDateValue;
-(id)_indexPathForLocationPicker;
-(id)_indexPathForLocationValue;
-(id)_indexPathForPeopleValue;
-(id)init;
-(id)mapView:(id)arg0 viewForAnnotation:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(struct ? )_regionForLocationCoordinate:(struct CLLocationCoordinate2D )arg0 ;
-(void)_didChangeDatePicker:(id)arg0 ;
-(void)_didPressResetAll:(id)arg0 ;
-(void)_handleLongPress:(id)arg0 ;
-(void)_installProgressIndicatorView;
-(void)_reloadRowAndRestoreSelectionIfNeededAtIndexPath:(id)arg0 ;
-(void)_showContactsPicker;
-(void)_tableView:(id)arg0 selectionDidUpdateForRowAtIndexPath:(id)arg1 ;
-(void)_updateDatePickerHidden;
-(void)_updateLocationPickerHidden;
-(void)contactPicker:(id)arg0 didSelectContacts:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif