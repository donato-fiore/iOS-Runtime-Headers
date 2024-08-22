// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXRDEVICEACTIONSVIEWCONTROLLER_H
#define AXRDEVICEACTIONSVIEWCONTROLLER_H

@class UITableViewController, AXRemoteDevice;
@protocol AXRDeviceActionsViewControllerDelegate;



@interface AXRDeviceActionsViewController : UITableViewController

@property (retain, nonatomic) AXRemoteDevice *activeDevice; // ivar: _activeDevice
@property (weak, nonatomic) NSObject<AXRDeviceActionsViewControllerDelegate> *delegate; // ivar: _delegate


-(BOOL)_deviceSupportsHandGestures;
-(BOOL)_indexPathSectionIsForHandGestures:(NSInteger)arg0 ;
-(BOOL)accessibilityPerformEscape;
-(NSInteger)_handGestureEventUsageForIndexPath:(id)arg0 ;
-(NSInteger)_numberOfRowsInSection:(NSInteger)arg0 ;
-(NSInteger)_numberOfSections;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_actionForIndexPath:(id)arg0 ;
-(id)_footerForSection:(NSInteger)arg0 ;
-(id)_imageForListItemAtIndexPath:(id)arg0 ;
-(id)_leadingImageViewForListItemAtIndexPath:(id)arg0 ;
-(id)_subtitleForListItemAtIndexPath:(id)arg0 ;
-(id)_supportedHandGestures;
-(id)_titleForListItemAtIndexPath:(id)arg0 ;
-(id)_titleForSection:(NSInteger)arg0 ;
-(id)initWithRemoteDevice:(id)arg0 delegate:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_handleIndexPathSelection:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif