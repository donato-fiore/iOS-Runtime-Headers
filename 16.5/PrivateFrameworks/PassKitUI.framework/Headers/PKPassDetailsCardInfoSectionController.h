// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSDETAILSCARDINFOSECTIONCONTROLLER_H
#define PKPASSDETAILSCARDINFOSECTIONCONTROLLER_H

@class PKPaymentPass, PKPaymentApplication, PKPeerPaymentAccount, PKPassLibraryDefaultDataProvider, PKExpressPassController, PKPaymentDefaultDataProvider;
@protocol PKPassDetailsCardInfoSectionControllerDelegate;


#import "PKPaymentPassDetailSectionController.h"

@interface PKPassDetailsCardInfoSectionController : PKPaymentPassDetailSectionController {
    NSUInteger _sectionMode;
    PKPaymentPass *_pass;
    PKPaymentApplication *_paymentApplication;
    PKPeerPaymentAccount *_peerPaymentAccount;
    NSInteger _detailViewStyle;
    BOOL _expressModeEnabled;
    BOOL _expressModeSupported;
    PKPassLibraryDefaultDataProvider *_passLibraryDataProvider;
    PKExpressPassController *_expressPassController;
    PKPaymentDefaultDataProvider *_paymentServiceDataProvider;
}


@property (readonly, weak, nonatomic) NSObject<PKPassDetailsCardInfoSectionControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL hideSectionTitles; // ivar: _hideSectionTitles


+(BOOL)_paymentApplicationShouldShowFullDPANForPass:(id)arg0 paymentApplication:(id)arg1 ;
+(BOOL)_showExpressDetailsForPass:(id)arg0 expressMode:(BOOL)arg1 sectionMode:(NSUInteger)arg2 ;
+(BOOL)canShowSectionForPaymentPass:(id)arg0 expressPassController:(id)arg1 ;
+(BOOL)validForPaymentPass:(id)arg0 ;
+(NSUInteger)_cardInfoSectionGenerateCellWithOutputForRowIndex:(NSInteger)arg0 pass:(id)arg1 detailViewStyle:(NSInteger)arg2 sectionMode:(NSUInteger)arg3 expressMode:(BOOL)arg4 ;
+(NSUInteger)_countOfRowsForPass:(id)arg0 detailViewStyle:(NSInteger)arg1 sectionMode:(NSUInteger)arg2 expressMode:(BOOL)arg3 ;
-(BOOL)_paymentApplicationShouldShowFullDPAN;
-(BOOL)_showExpressDetails;
-(BOOL)shouldDrawBottomSeparatorForSectionIdentifier:(id)arg0 ;
-(BOOL)shouldDrawTopSeparatorForSectionIdentifier:(id)arg0 ;
-(BOOL)shouldHighlightRowAtIndexPath:(id)arg0 sectionIdentifier:(id)arg1 ;
-(NSInteger)editingStyleForRowAtIndexPath:(id)arg0 sectionIdentifier:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSectionIdentifier:(id)arg1 ;
-(NSUInteger)_cardInfoSectionGenerateCellWithOutput:(*id)arg0 forRowIndex:(NSInteger)arg1 tableView:(id)arg2 ;
-(NSUInteger)_countOfRows;
-(id)_contextMenuConfigurationForCopyingText:(id)arg0 ;
-(id)init;
-(id)initWithPass:(id)arg0 peerPaymentAccount:(id)arg1 mode:(NSUInteger)arg2 detailViewStyle:(NSInteger)arg3 delegate:(id)arg4 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2 ;
-(id)tableView:(id)arg0 contextMenuConfigurationForRowAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 sectionIdentifier:(id)arg3 ;
-(id)tableView:(id)arg0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2 ;
-(id)titleForHeaderInSectionIdentifier:(id)arg0 ;
-(void)_expressPassDidChange;
-(void)_updateExpressPassInformation;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2 ;


@end


#endif