// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSPUBLICRESOURCESHARINGCONTROLLER_H
#define DSPUBLICRESOURCESHARINGCONTROLLER_H

@class NSString, DSSharingPermissions, NSMutableSet;
@protocol DSController, DSNavigationDelegate, OS_dispatch_queue;


#import "DSTableWelcomeController.h"

@interface DSPublicResourceSharingController : DSTableWelcomeController <DSController>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DSNavigationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) DSSharingPermissions *permissions; // ivar: _permissions
@property (retain, nonatomic) NSMutableSet *selectedTypes; // ivar: _selectedTypes
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(void)initialize;
-(BOOL)shouldShow;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)init;
-(id)publicSharingTypeForIndexPath:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_addLinkButton;
-(void)_pushNextPane;
-(void)_updateButton;
-(void)_updateTitle;
-(void)reloadTableViewData;
-(void)stopAllSharing;
-(void)stopSelectedSharing;
-(void)stopSharingFailedWithError:(id)arg0 ;
-(void)stopSharingTypes:(id)arg0 alertLabel:(id)arg1 alertDetail:(id)arg2 ;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif