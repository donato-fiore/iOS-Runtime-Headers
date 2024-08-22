// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTDEVICESCOREENCRYPTEDPAYLOADMANAGER_H
#define PKPEERPAYMENTDEVICESCOREENCRYPTEDPAYLOADMANAGER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "PKDeviceScorer.h"
#import "PKODIServiceProviderAssessment.h"
#import "PKSecureElement.h"

@interface PKPeerPaymentDeviceScoreEncryptedPayloadManager : NSObject {
    BOOL _isScoringInProgress;
    NSUInteger _pendingDeviceScoreEncryptedPayloadVersion;
    PKDeviceScorer *_deviceScorer;
    PKODIServiceProviderAssessment *_odiServiceProviderAssessment;
    PKSecureElement *_secureElement;
    NSString *_endpointIdentifier;
    NSString *_recipientAddress;
    NSUInteger _quoteDestinationType;
}


@property (nonatomic) NSUInteger deviceScoreEncryptedPayloadVersion; // ivar: _deviceScoreEncryptedPayloadVersion


+(id)keyForDeviceScoreEncryptedPayloadVersion:(NSUInteger)arg0 endpointIdentifier:(id)arg1 recipientAddress:(id)arg2 ;
-(NSUInteger)_transactionTypeForEndpointIdentifier;
-(id)_createContextForDeviceScorer;
-(id)_errorForUnavailableDeviceScoreWithUnderlyingError:(id)arg0 ;
-(id)_serviceProviderIdentifierForEndpointIdentifer;
-(id)initWithEndpointIdentifier:(id)arg0 recipientAddress:(id)arg1 deviceScoreEncryptedPayloadVersion:(NSUInteger)arg2 quoteDestinationType:(NSUInteger)arg3 ;
-(void)_cristalV1DeviceScoreWithKey:(id)arg0 completion:(id)arg1 ;
-(void)_setupDeviceScoreService;
-(void)deviceScoreWithCompletion:(id)arg0 ;
-(void)provideSessionFeedbackWithIngested:(BOOL)arg0 ;
-(void)updateAttributesWithEndpointIdentifier:(id)arg0 recipientAddress:(id)arg1 quoteDestinationType:(NSUInteger)arg2 ;


@end


#endif