// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFNETWORKLISTRANDOMMACMANAGER_H
#define WFNETWORKLISTRANDOMMACMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "WFClient.h"

@interface WFNetworkListRandomMACManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *cache; // ivar: _cache
@property (retain, nonatomic) WFClient *client; // ivar: _client
@property (nonatomic) BOOL shouldResetCache; // ivar: _shouldResetCache


-(BOOL)isSSIDinCache:(id)arg0 ;
-(BOOL)shouldAlwaysDisplayRandomAddressForSSID:(id)arg0 ;
-(BOOL)shouldEnableRandomMACForSSID:(id)arg0 ;
-(id)cachedRandomMACForSSID:(id)arg0 ;
-(id)initWithClient:(id)arg0 ;
-(id)newScanRecordWithRandomMACFromScanRecord:(id)arg0 ;
-(void)setRandomMAC:(id)arg0 forNetwork:(id)arg1 enabled:(BOOL)arg2 shouldAlwaysDisplayRandomAddress:(BOOL)arg3 ;


@end


#endif