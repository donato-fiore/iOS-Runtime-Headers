// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFKNOWNNETWORKSTORE_H
#define WFKNOWNNETWORKSTORE_H

@class NSSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WFClient.h"

@interface WFKnownNetworkStore : NSObject

@property (nonatomic) BOOL hasHS20Networks; // ivar: _hasHS20Networks
@property (retain, nonatomic) NSSet *knownNetworks; // ivar: _knownNetworks
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *knownNetworksQueue; // ivar: _knownNetworksQueue
@property (retain, nonatomic) NSSet *managedNetworkNames; // ivar: _managedNetworkNames
@property (weak, nonatomic) WFClient *wifiClient; // ivar: _wifiClient


+(id)sharedInstance;
-(BOOL)networkMatchesManagedProfile:(id)arg0 ;
-(BOOL)removeNetworkProfile:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveNetworkProfile:(id)arg0 forReason:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)setAutoJoinEnabled:(BOOL)arg0 forProfile:(id)arg1 error:(*id)arg2 ;
-(id)_networkProfileFromNetworkAttributes:(id)arg0 ;
-(id)getGeoTagsForNetworkProfile:(id)arg0 ;
-(id)getScoreForNetworkProfile:(id)arg0 ;
-(id)init;
-(id)initWithClient:(id)arg0 ;
-(id)networkProfileForNetwork:(id)arg0 ;
-(id)networkProfileWithSSID:(id)arg0 ;
-(id)networkProfileWithSSID:(id)arg0 securityMode:(NSInteger)arg1 securityModeExt:(NSInteger)arg2 ;
-(void)_clientServerRestarted:(id)arg0 ;
-(void)_forceUpdateKnownNetworks;
-(void)_forceUpdateKnownNetworksAndWait:(BOOL)arg0 ;
-(void)_preferredNetworksDidChange:(id)arg0 ;
-(void)updateKnownNetworks;


@end


#endif