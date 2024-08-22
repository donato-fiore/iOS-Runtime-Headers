// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WPDSEARCHPARTYAGENT_H
#define WPDSEARCHPARTYAGENT_H

@class NSData, NSArray, NSDate, SPBeaconManager;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WPDPendingCompletions.h"

@interface WPDSearchPartyAgent : NSObject

@property (copy) id *beaconChange; // ivar: _beaconChange
@property (retain) NSData *beaconKey; // ivar: _beaconKey
@property (readonly) NSArray *beaconKeys;
@property (copy) id *beaconKeysChangedBlock; // ivar: _beaconKeysChangedBlock
@property (readonly) NSDate *beaconKeysUpdated;
@property (retain) SPBeaconManager *beaconManager; // ivar: _beaconManager
@property (readonly) NSData *beaconReserved;
@property (readonly) BOOL beaconState;
@property (copy) id *beaconStateChangedBlock; // ivar: _beaconStateChangedBlock
@property (readonly) unsigned char beaconStatus;
@property (copy) id *beaconStatusChangedBlock; // ivar: _beaconStatusChangedBlock
@property BOOL continueAdvOnFail; // ivar: _continueAdvOnFail
@property BOOL disableScans; // ivar: _disableScans
@property BOOL isTestMode; // ivar: _isTestMode
@property (readonly) NSArray *nearbyTokens;
@property (copy) id *nearbyTokensChangedBlock; // ivar: _nearbyTokensChangedBlock
@property (readonly) NSDate *nearbyTokensUpdated;
@property (retain) WPDPendingCompletions *pendingKeyCompletions; // ivar: _pendingKeyCompletions
@property (retain) WPDPendingCompletions *pendingTokenCompletions; // ivar: _pendingTokenCompletions
@property (readonly, weak) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain) NSArray *spBeaconKeys; // ivar: _spBeaconKeys
@property (retain) NSDate *spBeaconKeysUpdated; // ivar: _spBeaconKeysUpdated
@property (readonly) NSData *spBeaconReserved; // ivar: _spBeaconReserved
@property BOOL spBeaconState; // ivar: _spBeaconState
@property unsigned char spBeaconStatus; // ivar: _spBeaconStatus
@property (retain) NSArray *spNearbyTokens; // ivar: _spNearbyTokens
@property (retain) NSDate *spNearbyTokensUpdated; // ivar: _spNearbyTokensUpdated
@property (retain) NSArray *testBeaconKeys; // ivar: _testBeaconKeys
@property (retain) NSDate *testBeaconKeysUpdated; // ivar: _testBeaconKeysUpdated
@property (retain) NSData *testBeaconReserved; // ivar: _testBeaconReserved
@property BOOL testBeaconState; // ivar: _testBeaconState
@property unsigned char testBeaconStatus; // ivar: _testBeaconStatus
@property (retain) NSArray *testNearbyTokens; // ivar: _testNearbyTokens
@property (retain) NSDate *testNearbyTokensUpdated; // ivar: _testNearbyTokensUpdated
@property (copy) id *tokensChange; // ivar: _tokensChange


+(id)spBeaconKeyFromTestKey:(id)arg0 ;
// -(id)initWithQueue:(id)arg0 beaconChange:(id)arg1 tokensChange:(unk)arg2  ;
-(void)completedKeyRequestID:(NSUInteger)arg0 success:(BOOL)arg1 ;
-(void)completedTokenRequestID:(NSUInteger)arg0 success:(BOOL)arg1 ;
-(void)dealloc;
-(void)generateStateDump;
-(void)initSPObjects;
-(void)rollKeysWithRequestID:(NSUInteger)arg0 ;
-(void)rollKeys_async;
-(void)rollKeys_async_completion:(id)arg0 ;
-(void)rollTokensWithRequestID:(NSUInteger)arg0 ;
-(void)rollTokens_async;
-(void)rollTokens_async_completion:(id)arg0 ;
-(void)startTest;
-(void)stopTest;
-(void)updateTestBeaconExtended:(id)arg0 ;
-(void)updateTestBeaconKeys:(id)arg0 ;
-(void)updateTestBeaconState:(id)arg0 ;
-(void)updateTestBeaconStatus:(id)arg0 ;
-(void)updateTestNearOwnerTokens:(id)arg0 ;


@end


#endif