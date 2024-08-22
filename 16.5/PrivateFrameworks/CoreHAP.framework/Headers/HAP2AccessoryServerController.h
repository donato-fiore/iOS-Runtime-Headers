// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAP2ACCESSORYSERVERCONTROLLER_H
#define HAP2ACCESSORYSERVERCONTROLLER_H

@class NSString;
@protocol HAP2AccessoryServerSecureTransportDelegate, HAP2AccessoryServerControllerPrivate, HAP2AccessoryServerController, HAP2AccessoryServerAccessoryFactory, HAP2AccessoryServerPrivate, HAP2AccessoryServerEncoding, HAP2AccessoryServerSecureTransport;


#import "HAP2LoggingObject.h"
#import "HAP2AccessoryServerAccessoryCache.h"
#import "HAP2PropertyLock.h"
#import "HAP2SerializedOperationQueue.h"

@interface HAP2AccessoryServerController : HAP2LoggingObject <HAP2AccessoryServerSecureTransportDelegate, HAP2AccessoryServerControllerPrivate, HAP2AccessoryServerController>

 {
    BOOL _readingAttributeDatabase;
    BOOL _flagNotificationEnableConsistencyWarning;
    BOOL _attemptedReReadAttributeDatabase;
    NSUInteger _sessionStartTime;
    NSUInteger _sessionNumber;
    NSUInteger _currentAccessoryIPTryCount;
    HAP2AccessoryServerAccessoryCache *_accessoryCache;
    HAP2PropertyLock *_propertyLock;
    HAP2SerializedOperationQueue *_operationQueue;
    id<HAP2AccessoryServerAccessoryFactory> *_accessoryFactory;
}


@property (weak, nonatomic) NSObject<HAP2AccessoryServerPrivate> *accessoryServer; // ivar: _accessoryServer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<HAP2AccessoryServerEncoding> *encoding; // ivar: _encoding
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HAP2AccessoryServerSecureTransport> *transport; // ivar: _transport


+(id)controllerIdentifier;
+(id)new;
-(BOOL)mergeWithNewController:(id)arg0 ;
-(id)addPairing:(id)arg0 completion:(id)arg1 ;
-(id)disableNotificationsForCharacteristics:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(id)enableNotificationsForCharacteristics:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(id)init;
-(id)initWithEncoding:(id)arg0 secureTransport:(id)arg1 operationQueue:(id)arg2 ;
-(id)initWithEncoding:(id)arg0 secureTransport:(id)arg1 operationQueue:(id)arg2 accessoryFactory:(id)arg3 ;
-(id)listPairingsWithCompletion:(id)arg0 ;
-(id)readAttributeDatabaseWithCompletion:(id)arg0 ;
-(id)readValuesForCharacteristics:(id)arg0 timeout:(CGFloat)arg1 options:(NSUInteger)arg2 completion:(id)arg3 ;
-(id)removePairing:(id)arg0 cleanupLocalData:(BOOL)arg1 completion:(id)arg2 ;
-(id)unpairedIdentifyWithCompletion:(id)arg0 ;
-(id)writeValuesForCharacteristics:(id)arg0 timeout:(CGFloat)arg1 options:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)closeSession;
-(void)dealloc;
-(void)handleUpdatedMetadataWithOldMetadata:(id)arg0 ;
-(void)secureTransport:(id)arg0 didChangeState:(NSUInteger)arg1 error:(id)arg2 ;
-(void)secureTransport:(id)arg0 didReceiveEvent:(id)arg1 ;
-(void)secureTransport:(id)arg0 needsLocalPairingIdentityWithCompletion:(id)arg1 ;
-(void)secureTransport:(id)arg0 needsRemotePairingIdentityForDeviceID:(id)arg1 completion:(id)arg2 ;
-(void)updateMaxRequestTimeout:(CGFloat)arg0 ;


@end


#endif