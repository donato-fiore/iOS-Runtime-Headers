// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTSETUPCREDENTIALSSECTIONCONTROLLER_H
#define PKPAYMENTSETUPCREDENTIALSSECTIONCONTROLLER_H

@class PKPaymentProvisioningController, NSString, NSMutableArray, PKPaymentSetupProduct, NSHashTable, NSArray;
@protocol PKPaymentProvisioningControllerDelegate, OS_dispatch_queue, PKPaymentSetupCredentialsSectionControllerDelegate;


#import "PKPaymentSetupListSectionController.h"

@interface PKPaymentSetupCredentialsSectionController : PKPaymentSetupListSectionController <PKPaymentProvisioningControllerDelegate>

 {
    PKPaymentProvisioningController *_provisioningController;
    NSInteger _setupContext;
    NSString *_lastBackedUpDefaultPaymentPassSerialNumber;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSMutableArray *_availableCredentials;
    NSMutableArray *_unavailableCredentials;
    NSMutableArray *_refundCredentials;
    PKPaymentSetupProduct *_product;
    NSHashTable *_selectedCredentialsBeforeEditing;
    BOOL _isEditing;
    NSArray *_targetDeviceSEIDs;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaymentSetupCredentialsSectionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger maximumNumberOfSelectableCredentials; // ivar: _maximumNumberOfSelectableCredentials
@property (readonly) Class superclass;


-(BOOL)_canSelectedCredential:(id)arg0 ;
-(BOOL)_hasSelectedCredentials;
-(BOOL)_setCredential:(id)arg0 selected:(BOOL)arg1 silently:(BOOL)arg2 ;
-(BOOL)doesContainCredentialThatRequiresAuth:(id)arg0 ;
-(BOOL)hasCredentialThatRequiresAuth;
-(BOOL)shouldShowEditButton;
-(NSUInteger)_numberOfSelectedCredentials;
-(NSUInteger)_numberOfSelectedPeerPaymentCredentials;
-(id)_cardArtForCredentialItem:(id)arg0 ;
-(id)_credentialItemForCredential:(id)arg0 ;
-(id)_credentialItemFromIndexPath:(id)arg0 ;
-(id)_detailTextForCredential:(id)arg0 ;
-(id)_titleTextForCredential:(id)arg0 ;
-(id)availableCredentialRequiringAction;
-(id)decoratePaymentSetListCell:(id)arg0 forItem:(id)arg1 ;
-(id)identifiers;
-(id)initWithCredentials:(id)arg0 provisioningController:(id)arg1 context:(NSInteger)arg2 product:(id)arg3 ;
-(id)layoutWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)selectedCredentials;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(id)unselectedCredentialRequiringAction;
-(struct CGSize )_defaultCardSize;
-(void)_createPassSnapshotFromPaymentPass:(id)arg0 completion:(id)arg1 ;
-(void)_deleteItem:(id)arg0 ;
-(void)_loadCredentials:(id)arg0 create:(BOOL)arg1 ;
-(void)_primeItemSelectionAndReloadData:(BOOL)arg0 ;
-(void)_removeCredentialItem:(id)arg0 ;
-(void)_replaceAndReloadItem:(id)arg0 withNewItem:(id)arg1 ;
-(void)_sortCredentialItems:(id)arg0 ;
-(void)_updateMaximumSelectableCredentials;
-(void)_updateRemoteCredentialCache;
-(void)configureSupplementaryRegistration:(id)arg0 elementKind:(id)arg1 sectionIdentifier:(id)arg2 ;
-(void)dealloc;
-(void)didSelectItem:(id)arg0 ;
-(void)paymentPassUpdatedOnCredential:(id)arg0 ;
-(void)reloadCredentialStores;
-(void)setCredential:(id)arg0 selected:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg0 ;


@end


#endif