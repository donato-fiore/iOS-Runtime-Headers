// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DAKEYPAIRINGSESSION_H
#define DAKEYPAIRINGSESSION_H

@class NSString;
@protocol KmlOwnerPairingCallbacks, NSSecureCoding, DAKeyTrackingUpdate, DAKeyImmobilizerTokenUpdate;


#import "DASession.h"

@interface DAKeyPairingSession : DASession <KmlOwnerPairingCallbacks, NSSecureCoding, DAKeyTrackingUpdate, DAKeyImmobilizerTokenUpdate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)preWarmForManufacturer:(id)arg0 ;
-(id)setTrackingReceipt:(id)arg0 forKeyWithIdentifier:(id)arg1 ;
-(id)setTrackingReceipt:(id)arg0 slotIdentifier:(id)arg1 confidentialMailboxData:(id)arg2 ephemeralPublicKey:(id)arg3 forKeyWithIdentifier:(id)arg4 ;
-(id)startKeyPairingWithPassword:(id)arg0 displayName:(id)arg1 ;
-(id)startKeyPairingWithPassword:(id)arg0 displayName:(id)arg1 transport:(NSInteger)arg2 ;
-(id)startProbing;
-(void)didEnd:(id)arg0 ;
-(void)didStart:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endPointPrivacyDecryption:(id)arg0 encryptedData:(id)arg1 publicKey:(id)arg2 callback:(id)arg3 ;
-(void)handleFirstTransactionCompletionResult:(id)arg0 ;
-(void)handleKeyPairingCompletionResult:(id)arg0 keyInformation:(id)arg1 trackingRequest:(id)arg2 ;
-(void)handlePairingDidStart;
-(void)handlePreWarmCompletionResult:(id)arg0 ;
-(void)handleProbingCompletionWithBrandCode:(NSUInteger)arg0 error:(id)arg1 ;
-(void)requestImmobilizerTokenRefillForKeyWithIdentifier:(id)arg0 callback:(id)arg1 ;
-(void)setImmobilizerTokens:(id)arg0 publicKey:(id)arg1 forKeyWithIdentifier:(id)arg2 callback:(id)arg3 ;


@end


#endif