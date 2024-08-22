// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSGMATTERCONTROLLER_H
#define PSGMATTERCONTROLLER_H

@class PSEditableListController, NSArray, MTSSystemCommissionerPairingManager;



@interface PSGMatterController : PSEditableListController

@property (retain, nonatomic) NSArray *accessorySpecifiers; // ivar: _accessorySpecifiers
@property (retain, nonatomic) MTSSystemCommissionerPairingManager *pairingManager; // ivar: _pairingManager


+(BOOL)shouldShowTestSpecifiers;
+(id)accessorySpecifierWithID:(id)arg0 name:(id)arg1 pairing:(id)arg2 target:(id)arg3 ;
+(id)testSpecifiers;
+(void)shouldShowMatterControllerWithCompletion:(id)arg0 ;
-(BOOL)shouldDeferPushForSpecifierID:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(id)detailText:(id)arg0 ;
-(id)specifiers;
-(id)tableView:(id)arg0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg1 ;
-(void)aboutLinkWasTapped;
-(void)deleteAccessory:(id)arg0 ;
-(void)didBecomeActive:(id)arg0 ;
-(void)reloadAccessoriesWithCompletion:(id)arg0 ;
-(void)showDeleteAllConfirmation:(id)arg0 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif