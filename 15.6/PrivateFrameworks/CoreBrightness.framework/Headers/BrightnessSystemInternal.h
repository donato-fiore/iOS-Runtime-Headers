// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRIGHTNESSSYSTEMINTERNAL_H
#define BRIGHTNESSSYSTEMINTERNAL_H

@class NSMutableArray, NSXPCListener, NSMutableDictionary, NSString;
@protocol NSXPCListenerDelegate, OS_os_log;

#import <Foundation/Foundation.h>

#import "BLControl.h"

@interface BrightnessSystemInternal : NSObject <NSXPCListenerDelegate>

 {
    BLControl *bl;
    id *_callback;
    NSMutableArray *_callbackProps;
    float _cachedSlider;
    NSXPCListener *_listener;
    NSMutableDictionary *_clients;
    NSMutableDictionary *_clientsProps;
    NSMutableDictionary *_ownedProps;
    NSMutableDictionary *_combinableProps;
    NSObject<OS_os_log> *_logHandle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isACombinableProperty:(id)arg0 ;
-(BOOL)isAlsSupported;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)setCombinableProperty:(id)arg0 forKey:(id)arg1 client:(id)arg2 ;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 client:(id)arg2 ;
-(id)adjustDictionaryToBeValidPropertyList:(id)arg0 ;
-(id)copyPropertyForKey:(id)arg0 client:(id)arg1 ;
-(id)init;
-(id)newAggregatedPropertyForCombinablePropertiesForKey:(id)arg0 ;
-(void)clientConnectedWithExpObj:(id)arg0 ;
-(void)clientDisconnectedWithExpObj:(id)arg0 ;
-(void)dealloc;
-(void)destroyServer;
-(void)notifyClientsForProperty:(id)arg0 key:(id)arg1 ;
-(void)registerNotificationBlock:(id)arg0 ;
// -(void)registerNotificationBlock:(id)arg0 forProperties:(unk)arg1  ;
-(void)setNotificationProperties:(id)arg0 forClient:(id)arg1 ;
-(void)setOwnedProperty:(id)arg0 forKey:(id)arg1 client:(id)arg2 ;
-(void)undoCombinablePropertiesForClient:(id)arg0 ;
-(void)undoOwnedPropertiesForClient:(id)arg0 ;


@end


#endif