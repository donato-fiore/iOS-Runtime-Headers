// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NRDEVICE_H
#define NRDEVICE_H

@class NSUUID, NSMutableDictionary, NSPointerArray, NSMutableArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NRDevice.h"
#import "NRRegistry.h"

@interface NRDevice : NSObject <NSSecureCoding>

 {
    NRDevice *_me;
    os_unfair_lock_s _lock;
    NSUUID *_pairingID;
    NRRegistry *_registry;
    NSMutableDictionary *_oldPropertiesForChangeNotifications;
    NSMutableDictionary *_properties;
    NSMutableDictionary *_observers;
    NSPointerArray *_promiscuousObservers;
    NSMutableDictionary *_changeBlocks;
    NSMutableArray *_promiscuousChangeBlocks;
}


@property (readonly, nonatomic) NSUUID *pairingID;


+(BOOL)supportsSecureCoding;
-(BOOL)archived;
-(BOOL)canMigrate;
-(BOOL)migrationConfirmed;
-(BOOL)setValue:(id)arg0 forProperty:(id)arg1 ;
-(BOOL)supportsCapability:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(id)initWithRegistry:(id)arg0 diff:(id)arg1 pairingID:(id)arg2 notify:(BOOL)arg3 ;
-(id)migrationError;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)propertyNames;
-(id)valueForProperty:(id)arg0 ;
-(void)_setValue:(id)arg0 forProperty:(id)arg1 ;
-(void)addPropertyObserver:(id)arg0 forPropertyChanges:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)registerForPropertyChanges:(id)arg0 withBlock:(id)arg1 ;
-(void)removePropertyObserver:(id)arg0 forPropertyChanges:(id)arg1 ;
-(void)unregisterForPropertyChanges:(id)arg0 withBlock:(id)arg1 ;


@end


#endif