// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPDKEYCHAINSYNC_H
#define CDPDKEYCHAINSYNC_H

@protocol CDPDCircleProxy;

#import <Foundation/Foundation.h>


@interface CDPDKeychainSync : NSObject {
    id<CDPDCircleProxy> *_circleProxy;
}




+(id)_defaultUserVisibleViewSet;
+(id)keyChainSync;
+(id)keyChainSyncWithProxy:(id)arg0 ;
-(BOOL)_isThisDeviceInCircle;
-(BOOL)_setKeychainSyncState:(BOOL)arg0 ;
-(BOOL)isUserVisibleKeychainSyncEnabled;
-(BOOL)matchKeychainViewState:(BOOL)arg0 ;
-(BOOL)synchronizeKeychainViewSetWithOtherPeers:(*id)arg0 ;
-(void)_preflightCircleStatusWithCompletion:(id)arg0 ;
-(void)_processAuthFailure:(id)arg0 completion:(id)arg1 ;
-(void)removeNonViewAwarePeersFromCircleWithCompletion:(id)arg0 ;
-(void)setUserVisibleKeychainSyncEnabled:(BOOL)arg0 withCompletion:(id)arg1 ;


@end


#endif