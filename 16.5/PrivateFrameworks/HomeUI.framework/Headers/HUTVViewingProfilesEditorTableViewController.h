// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUTVVIEWINGPROFILESEDITORTABLEVIEWCONTROLLER_H
#define HUTVVIEWINGPROFILESEDITORTABLEVIEWCONTROLLER_H

@class NSString;
@protocol HUItemModuleControllerHosting;


#import "HUItemTableViewController.h"
#import "HUTVViewingProfilesDevicesModuleController.h"

@interface HUTVViewingProfilesEditorTableViewController : HUItemTableViewController <HUItemModuleControllerHosting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideHeadersAndFooters; // ivar: _hideHeadersAndFooters
@property (readonly) Class superclass;
@property (readonly, nonatomic) HUTVViewingProfilesDevicesModuleController *tvpDevicesModuleController; // ivar: _tvpDevicesModuleController


-(BOOL)automaticallyUpdatesViewControllerTitle;
-(BOOL)shouldHideFooterBelowSection:(NSInteger)arg0 ;
-(BOOL)shouldHideHeaderAboveSection:(NSInteger)arg0 ;
-(id)initWithUserItem:(id)arg0 ;
-(id)itemModuleControllers;
-(id)moduleController:(id)arg0 dismissViewControllerForRequest:(id)arg1 ;
-(id)moduleController:(id)arg0 presentViewControllerForRequest:(id)arg1 ;
-(id)moduleController:(id)arg0 textFieldForVisibleItem:(id)arg1 ;


@end


#endif