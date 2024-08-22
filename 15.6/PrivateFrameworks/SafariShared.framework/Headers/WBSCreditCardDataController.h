// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSCREDITCARDDATACONTROLLER_H
#define WBSCREDITCARDDATACONTROLLER_H

@class NSMapTable, PKVirtualCardManager, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSCreditCardDataController : NSObject {
    NSMapTable *_creditCardDataKeychainReferences;
    NSObject<OS_dispatch_queue> *_internalQueue;
    PKVirtualCardManager *_virtualCardManager;
}


@property (readonly, nonatomic) NSArray *creditCardData;


+(BOOL)hasCreditCardData;
-(BOOL)_shouldOfferVirtualCards;
-(BOOL)authenticationRequiredForVirtualCard:(id)arg0 ;
-(BOOL)hasUsedNonVirtualCard;
-(BOOL)isCreditCardDataSaved:(id)arg0 ;
-(BOOL)shouldAddCardWithNumber:(id)arg0 ;
-(BOOL)shouldNeverSaveCardWithNumber:(id)arg0 ;
-(NSUInteger)virtualCardFieldsToRequest;
-(id)_deduplicatedVirtualCardDataArray:(id)arg0 andCreditCardDataArray:(id)arg1 ;
-(id)_neverSavedCreditCardSuffixFromCard:(id)arg0 ;
-(id)_neverSavedCreditCardSuffixFromCardNumber:(id)arg0 ;
-(id)_uniqueCardNameForCardName:(id)arg0 ;
-(id)_virtualCardDataFromPKVirtualCards:(id)arg0 ;
-(id)defaultNameForCardOfType:(NSUInteger)arg0 cardholderName:(id)arg1 ;
-(id)existingCardWithNumber:(id)arg0 ;
-(id)init;
-(id)savableCreditCardDataInForm:(id)arg0 ;
-(id)urlForVirtualCard:(id)arg0 ;
-(void)_removeNeverSaveCreditCardData:(id)arg0 ;
-(void)_sortCreditCardDataArray:(id)arg0 ;
-(void)clearCreditCardData;
-(void)getCreditCardDataToFill:(id)arg0 host:(id)arg1 externalizedContext:(id)arg2 completionHandler:(id)arg3 ;
-(void)getCreditCardDataWithCompletionHandler:(id)arg0 ;
-(void)getVirtualCardCredentialsWithCompletionHandler:(id)arg0 ;
-(void)getVirtualCardCredentialsWithExternalizedContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)getVirtualCardsWithCompletionHandler:(id)arg0 ;
-(void)invalidateCreditCardData;
-(void)isVirtualCard:(id)arg0 completion:(id)arg1 ;
-(void)markCreditCardDataAsMostRecentlyUsed:(id)arg0 ;
-(void)neverSaveCreditCardData:(id)arg0 ;
-(void)removeCreditCardData:(id)arg0 ;
-(void)replaceCreditCardData:(id)arg0 withCard:(id)arg1 ;
-(void)saveCreditCardData:(id)arg0 ;
-(void)saveCreditCardDataIfAllowed:(id)arg0 ;
-(void)savePendingChangesBeforeTermination;
-(void)setHasUsedNonVirtualCard;


@end


#endif