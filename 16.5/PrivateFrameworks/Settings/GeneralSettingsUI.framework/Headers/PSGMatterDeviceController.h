// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSGMATTERDEVICECONTROLLER_H
#define PSGMATTERDEVICECONTROLLER_H

@class PSEditableListController, MTSSystemCommissionerPairing, MTSDevicePairingManager, NSArray;



@interface PSGMatterDeviceController : PSEditableListController

@property (retain, nonatomic) MTSSystemCommissionerPairing *pairing; // ivar: _pairing
@property (retain, nonatomic) MTSDevicePairingManager *pairingManager; // ivar: _pairingManager
@property (retain, nonatomic) NSArray *serviceSpecifiers; // ivar: _serviceSpecifiers


+(BOOL)shouldShowTestSpecifiers;
+(id)serviceSpecifierWithPairing:(id)arg0 target:(id)arg1 ;
+(id)testSpecifiers;
-(BOOL)isServiceAtIndexPath:(id)arg0 ;
-(BOOL)tableView:(id)arg0 shouldIndentWhileEditingRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(id)detailText:(id)arg0 ;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg1 ;
-(void)didBecomeActive:(id)arg0 ;
-(void)reloadServicesWithCompletion:(id)arg0 ;
-(void)showDeleteFromMatterLocker;
-(void)showDeleteService:(id)arg0 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;


@end


#endif