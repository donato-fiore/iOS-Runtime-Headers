// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STDYNAMICACTIVITYATTRIBUTIONMANAGER_H
#define STDYNAMICACTIVITYATTRIBUTIONMANAGER_H

@class NSMutableDictionary, NSString, NSMutableSet;
@protocol STDynamicActivityAttributionServerHandle, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "STDynamicActivityAttributionListener.h"

@interface STDynamicActivityAttributionManager : NSObject <STDynamicActivityAttributionServerHandle>



@property (retain, nonatomic) NSMutableDictionary *clientAttributionMap; // ivar: _clientAttributionMap
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) STDynamicActivityAttributionListener *dynamicAttributionListener; // ivar: _dynamicAttributionListener
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (retain, nonatomic) NSMutableSet *monitorClients; // ivar: _monitorClients
@property (readonly) Class superclass;


-(id)currentAttributedAppForClient:(id)arg0 ;
-(id)currentAttributionForAttribution:(id)arg0 ;
-(id)currentAttributionForClient:(struct ? )arg0 ;
-(id)currentAttributionKeyForClient:(id)arg0 ;
-(id)init;
-(void)_internalQueue_setAttributionKey:(id)arg0 andApplication:(id)arg1 forClient:(id)arg2 ;
-(void)_internalQueue_setAttributionStringWithFormat:(id)arg0 maskingClientAuditToken:(struct ? )arg1 forClient:(id)arg2 ;
-(void)_updateAttributionMapWithAttribution:(id)arg0 clientID:(id)arg1 ;
-(void)setAttributionStringWithFormat:(id)arg0 maskingClientAuditToken:(struct ? )arg1 forClient:(id)arg2 ;
-(void)setLocalizableAttributionKey:(id)arg0 andApplication:(id)arg1 forClient:(id)arg2 ;
-(void)subscribeToUpdates:(id)arg0 ;
-(void)unsubscribeFromUpdates:(id)arg0 ;


@end


#endif