// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKCONTACTLESSCARDINGESTER_H
#define PKCONTACTLESSCARDINGESTER_H

@class NSString, NSNumberFormatter;
@protocol NFRemoteAdminEventListener, PKContactlessCardIngesterDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PKPaymentProvisioningMethodMetadata.h"

@interface PKContactlessCardIngester : NSObject <NFRemoteAdminEventListener>

 {
    BOOL _listening;
    NSString *_pushTopic;
    PKPaymentProvisioningMethodMetadata *_readerModeProvisioningMetadata;
    NSNumberFormatter *_currencyNumberFormatter;
    id<PKContactlessCardIngesterDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_contactlessCardIngesterQueue;
    id *_cardSessionTokenCompletionHandler;
    id *_disableCardCompletionHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isSupported;
+(id)debugDescriptionForStatus:(NSUInteger)arg0 ;
-(id)_displayableErrorForSPStatusCode:(NSUInteger)arg0 seldError:(id)arg1 ;
-(id)initWithPaymentSetupProduct:(id)arg0 delegate:(id)arg1 ;
-(void)_cancelCardIngestion;
-(void)_ingestCardWithCardSessionToken:(id)arg0 completion:(id)arg1 ;
-(void)_ingestCardWithCompletion:(id)arg0 ;
-(void)_startListeningToRemoteAdminEventsIfRequired;
-(void)_stopListeningToRemoteAdminEvents;
-(void)ingestCardWithCardSessionToken:(id)arg0 successHandler:(id)arg1 ;
-(void)ingestCardWithSuccessHandler:(id)arg0 ;
-(void)invalidate;
-(void)readerModeCardIngestionStatus:(NSUInteger)arg0 ;
-(void)readerModeCardSessionToken:(id)arg0 ;


@end


#endif