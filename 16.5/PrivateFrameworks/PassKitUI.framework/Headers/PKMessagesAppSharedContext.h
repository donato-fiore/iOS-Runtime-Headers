// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKMESSAGESAPPSHAREDCONTEXT_H
#define PKMESSAGESAPPSHAREDCONTEXT_H

@class NSPointerArray, NSMutableArray, PKPaymentDefaultDataProvider, PKTransactionSource, NSMutableDictionary, NSArray, NSString;
@protocol PKPaymentDataProviderDelegate, PKMessagesAppControllerInterface;

#import <Foundation/Foundation.h>


@interface PKMessagesAppSharedContext : NSObject <PKPaymentDataProviderDelegate>

 {
    NSPointerArray *_weakBubbleAppControllers;
    NSMutableArray *_pendingPrimaryHandlers;
    PKPaymentDefaultDataProvider *_paymentServiceDataProvider;
    PKTransactionSource *_transactionSource;
    NSMutableDictionary *_externalizedControllerStateStore;
}


@property (readonly, copy, nonatomic) NSArray *bubbleAppControllers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<PKMessagesAppControllerInterface> *primaryAppController; // ivar: _primaryAppController
@property (readonly) Class superclass;


+(id)sharedContext;
-(id)_directoryPath;
-(id)_sharedDirectoryPath;
-(id)_urlForMessageIdentifier:(id)arg0 ;
-(id)externalizedControllerStateForMessageIdentifier:(id)arg0 ;
-(id)init;
-(void)_purgeOldCacheEntries;
-(void)_registerAppViewController:(id)arg0 ;
-(void)_revealPrimaryAppController:(id)arg0 ;
-(void)_withPrimaryAppController:(id)arg0 ;
-(void)handlePaymentRequestMessage:(id)arg0 sender:(id)arg1 completion:(id)arg2 ;
-(void)persistExternalizedControllerState:(id)arg0 forMessageIdentifier:(id)arg1 ;
-(void)removeExternalizedControllerStateDataForMessageIdentifier:(id)arg0 ;
-(void)transactionSourceIdentifier:(id)arg0 didReceiveTransaction:(id)arg1 ;


@end


#endif