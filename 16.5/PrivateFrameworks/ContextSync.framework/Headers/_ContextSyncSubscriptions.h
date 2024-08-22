// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CONTEXTSYNCSUBSCRIPTIONS_H
#define _CONTEXTSYNCSUBSCRIPTIONS_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _ContextSyncSubscriptions : NSObject

@property (retain, nonatomic) NSMutableDictionary *deviceToDevicesSubscriptions; // ivar: _deviceToDevicesSubscriptions
@property (retain, nonatomic) NSMutableDictionary *dictionaryRepresentation; // ivar: _dictionaryRepresentation


+(id)deviceSubscribing:(id)arg0 withSubscriptons:(id)arg1 ;
+(id)loadFromDefaults:(id)arg0 ;
-(BOOL)addWake:(BOOL)arg0 forIdentifier:(id)arg1 subscribedDevice:(id)arg2 subscribingDevice:(id)arg3 ;
-(BOOL)existsWakingIdentifiersOnSubscribedDevice:(id)arg0 forSubscribing:(id)arg1 ;
-(BOOL)isIdentifierWaking:(id)arg0 subscribedDevice:(id)arg1 subscribingDevice:(id)arg2 ;
-(BOOL)removeAllIdentifiersOnSubscribedDevice:(id)arg0 subscribingDevice:(id)arg1 ;
-(BOOL)removeAllIdentifiersOnSubscribingDevice:(id)arg0 ;
-(BOOL)removeIdentifier:(id)arg0 subscribedDevice:(id)arg1 subscribingDevice:(id)arg2 ;
-(id)convertToDictionary;
-(id)devicesSubscribedToDevice:(id)arg0 ;
-(id)devicesSubscribing;
-(id)identifiersForSubscribingDevice:(id)arg0 onSubscribedDevice:(id)arg1 ;
-(id)lastChangeDateForIdentifier:(id)arg0 onSubscribingDevice:(id)arg1 onSubscribedDevice:(id)arg2 ;
-(id)messageSubscriptionsForDevice:(id)arg0 withLocalIdentifiers:(id)arg1 ;
-(id)messageSubscriptionsForDevice:(id)arg0 withNewDSL:(id)arg1 withLocalIdentifiers:(id)arg2 ;
-(id)sortedDevicesByWakeForIdentifier:(id)arg0 subscribedToDevice:(id)arg1 ;
-(id)subscriptionsOnDevice:(id)arg0 ;
-(id)wakeStateForIdentifier:(id)arg0 onSubscribingDevice:(id)arg1 onSubscribedDevice:(id)arg2 ;
-(void)saveToDefaults:(id)arg0 ;


@end


#endif