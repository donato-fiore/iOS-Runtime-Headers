// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKBARCODEPASSDETAILSNOTIFICATIONSETTINGSSECTIONCONTROLLER_H
#define PKBARCODEPASSDETAILSNOTIFICATIONSETTINGSSECTIONCONTROLLER_H

@class PKPass, PKPaymentApplication, PKPeerPaymentAccount, PKAccount, PKTransactionSourceCollection, NSArray, NSString;
@protocol PKTableViewSectionController, PKPaymentDataProvider, PKBarcodePassDetailsNotificationSettingsSectionControllerDelegate;

#import <Foundation/Foundation.h>


@interface PKBarcodePassDetailsNotificationSettingsSectionController : NSObject <PKTableViewSectionController>

 {
    PKPass *_pass;
    PKPaymentApplication *_paymentApplication;
    NSInteger _detailViewStyle;
    PKPeerPaymentAccount *_peerPaymentAccount;
    PKAccount *_account;
    id<PKPaymentDataProvider> *_paymentDataProvider;
    PKTransactionSourceCollection *_transactionSourceCollection;
}


@property (readonly, nonatomic) NSArray *allSectionIdentifiers; // ivar: _allSectionIdentifiers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<PKBarcodePassDetailsNotificationSettingsSectionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *sectionIdentifiers; // ivar: _sectionIdentifiers
@property (readonly) Class superclass;


+(BOOL)canShowSectionforPass:(id)arg0 ;
+(BOOL)validForPass:(id)arg0 ;
+(NSInteger)_countOfRowsForPass:(id)arg0 ;
-(BOOL)_shouldMapSection;
-(BOOL)shouldDrawBottomSeparatorForSectionIdentifier:(id)arg0 ;
-(BOOL)shouldDrawTopSeparatorForSectionIdentifier:(id)arg0 ;
-(NSInteger)_countOfRows;
-(NSInteger)editingStyleForRowAtIndexPath:(id)arg0 sectionIdentifier:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSectionIdentifier:(id)arg1 ;
-(NSUInteger)_settingForRow:(NSUInteger)arg0 ;
-(id)_cellForType:(NSInteger)arg0 ;
-(id)_indexPathForRowType:(NSInteger)arg0 ;
-(id)_settingsCellForRow:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithPass:(id)arg0 detailViewStyle:(NSInteger)arg1 delegate:(id)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2 ;
-(id)tableView:(id)arg0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2 ;
-(void)_passSettingsChanged:(id)arg0 ;
-(void)dealloc;
-(void)pushSettingsFromViewToModel;


@end


#endif