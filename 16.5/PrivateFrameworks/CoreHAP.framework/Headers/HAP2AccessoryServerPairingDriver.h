// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAP2ACCESSORYSERVERPAIRINGDRIVER_H
#define HAP2ACCESSORYSERVERPAIRINGDRIVER_H

@class NSError, NSString, HMFActivity, NSArray;
@protocol HAP2Cancelable, HAP2AccessoryServerPairingDriverWorkItemInfo, HAP2AccessoryServerPairingDriver, HAP2UnpairedAccessoryServer, HAP2AccessoryServerPairingDriverDelegate, HAP2AccessoryServerEncoding, HAP2AccessoryServerSecureTransportFactory, HAP2AccessoryServerTransport;


#import "HAP2LoggingObject.h"
#import "HAP2SerializedOperationQueue.h"
#import "HAPPairSetupSession.h"
#import "HAP2PropertyLock.h"

@interface HAP2AccessoryServerPairingDriver : HAP2LoggingObject <HAP2Cancelable, HAP2AccessoryServerPairingDriverWorkItemInfo, HAP2AccessoryServerPairingDriver>



@property (weak, nonatomic) NSObject<HAP2UnpairedAccessoryServer> *accessoryServer; // ivar: _accessoryServer
@property (readonly, nonatomic) NSUInteger authMethod; // ivar: _authMethod
@property (retain, nonatomic) NSError *cancelError; // ivar: _cancelError
@property (nonatomic) NSUInteger currentWorkItemIndex; // ivar: _currentWorkItemIndex
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HAP2AccessoryServerPairingDriverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<HAP2AccessoryServerEncoding> *encoding; // ivar: _encoding
@property (readonly, nonatomic) NSUInteger featureFlags; // ivar: _featureFlags
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HAP2SerializedOperationQueue *operationQueue; // ivar: _operationQueue
@property (weak, nonatomic) HMFActivity *pairingActivity; // ivar: _pairingActivity
@property (retain, nonatomic) HAPPairSetupSession *pairingSession; // ivar: _pairingSession
@property (readonly, nonatomic) HAP2PropertyLock *propertyLock; // ivar: _propertyLock
@property (readonly, nonatomic) NSObject<HAP2AccessoryServerSecureTransportFactory> *secureTransportFactory; // ivar: _secureTransportFactory
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HAP2AccessoryServerTransport> *transport; // ivar: _transport
@property (readonly, nonatomic) NSArray *workItems; // ivar: _workItems


+(id)_generateWorkItemsForAuthMethod:(NSUInteger)arg0 ;
-(id)currentWorkItem;
-(id)initWithTransport:(id)arg0 secureTransportFactory:(id)arg1 encoding:(id)arg2 featureFlags:(NSUInteger)arg3 ;
-(id)initWithTransport:(id)arg0 secureTransportFactory:(id)arg1 encoding:(id)arg2 featureFlags:(NSUInteger)arg3 workItems:(id)arg4 ;
-(id)moveToNextWorkItem;
-(id)pairAccessory:(id)arg0 delegate:(id)arg1 ;
-(void)_cancelWithError:(id)arg0 ;
-(void)_pairingFinishedWithError:(id)arg0 ;
-(void)cancelWithError:(id)arg0 ;
-(void)workItem:(id)arg0 finishedWithError:(id)arg1 ;


@end


#endif