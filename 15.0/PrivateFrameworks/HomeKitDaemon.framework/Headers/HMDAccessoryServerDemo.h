// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDACCESSORYSERVERDEMO_H
#define HMDACCESSORYSERVERDEMO_H

@class HAPAccessoryServer, NSNumber, NSDictionary;


#import "HMDAccessoryServerBrowserDemo.h"

@interface HMDAccessoryServerDemo : HAPAccessoryServer {
    NSNumber *_category;
}


@property (nonatomic) BOOL _hasPairings; // ivar: __hasPairings
@property (nonatomic) BOOL _paired; // ivar: __paired
@property (retain, nonatomic) NSDictionary *accessoryInfo; // ivar: _accessoryInfo
@property (weak, nonatomic) HMDAccessoryServerBrowserDemo *browser; // ivar: _browser
@property (readonly) BOOL testMode; // ivar: _testMode


-(BOOL)_delegateRespondsToSelector:(SEL)arg0 ;
-(BOOL)hasPairings;
-(BOOL)isPaired;
-(BOOL)removePairingForCurrentControllerOnQueue:(id)arg0 completion:(id)arg1 ;
-(BOOL)stopPairingWithError:(*id)arg0 ;
-(BOOL)tryPairingPassword:(id)arg0 error:(*id)arg1 ;
-(NSInteger)linkType;
-(id)category;
-(id)initCommon:(id)arg0 browser:(id)arg1 ;
-(id)initWithName:(id)arg0 identifier:(id)arg1 deviceInfo:(id)arg2 paired:(BOOL)arg3 keyStore:(id)arg4 testMode:(BOOL)arg5 browser:(id)arg6 ;
-(void)_parseAttributeDatabase:(id)arg0 ;
-(void)addPairing:(id)arg0 completionQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)continuePairingAfterAuthPrompt;
-(void)discoverAccessories;
// -(void)enableEvents:(BOOL)arg0 forCharacteristics:(id)arg1 withCompletionHandler:(id)arg2 queue:(unk)arg3  ;
-(void)handleUpdatesForCharacteristics:(id)arg0 stateNumber:(id)arg1 ;
-(void)identifyWithCompletion:(id)arg0 ;
-(void)listPairingsWithCompletionQueue:(id)arg0 completionHandler:(id)arg1 ;
-(void)processCharacteristicWrite:(id)arg0 value:(id)arg1 ;
-(void)readCharacteristicValues:(id)arg0 timeout:(CGFloat)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)removePairing:(id)arg0 completionQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)sendDelayedResponse:(NSUInteger)arg0 responses:(id)arg1 readOperation:(BOOL)arg2 completionQueue:(id)arg3 completionHandler:(id)arg4 ;
-(void)setCategory:(id)arg0 ;
-(void)startPairingWithConsentRequired:(BOOL)arg0 config:(id)arg1 ownershipToken:(id)arg2 ;
-(void)writeCharacteristicValues:(id)arg0 timeout:(CGFloat)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif