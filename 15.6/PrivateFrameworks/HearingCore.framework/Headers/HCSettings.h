// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HCSETTINGS_H
#define HCSETTINGS_H

@class NPSDomainAccessor, NSMutableSet, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HCSettings : NSObject {
    os_unfair_lock_s _syncLock;
}


@property (retain, nonatomic) NPSDomainAccessor *domainAccessor; // ivar: _domainAccessor
@property (retain, nonatomic) NPSDomainAccessor *globalDomainAccessor; // ivar: _globalDomainAccessor
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *nanoDomainAccessorQueue; // ivar: _nanoDomainAccessorQueue
@property (retain, nonatomic) NSMutableSet *registeredNotifications; // ivar: _registeredNotifications
@property (retain, nonatomic) NSMutableSet *synchronizePreferences; // ivar: _synchronizePreferences
@property (retain, nonatomic) NSMutableDictionary *updateBlocks; // ivar: _updateBlocks


-(BOOL)boolValueForPreferenceKey:(id)arg0 withDefaultValue:(BOOL)arg1 ;
-(BOOL)shouldStoreLocally;
-(CGFloat)cgfloatValueForPreferenceKey:(id)arg0 withDefaultValue:(CGFloat)arg1 ;
-(NSInteger)integerValueForKey:(id)arg0 withDefaultValue:(NSInteger)arg1 ;
-(id)_valueForPreferenceKey:(id)arg0 ;
-(id)init;
-(id)keysToSync;
-(id)nanoDomainAccessor;
-(id)notificationForPreferenceKey:(id)arg0 ;
-(id)objectValueForKey:(id)arg0 withClass:(Class)arg1 andDefaultValue:(id)arg2 ;
-(id)preferenceDomain;
-(id)preferenceKeyForSelector:(SEL)arg0 ;
-(void)_handlePreferenceChanged:(id)arg0 ;
-(void)_registerForNotification:(id)arg0 ;
-(void)_synchronizeIfNecessary:(id)arg0 ;
-(void)dealloc;
-(void)logMessage:(id)arg0 ;
-(void)pairedWatchDidChange:(id)arg0 ;
// -(void)registerUpdateBlock:(id)arg0 forRetrieveSelector:(unk)arg1 withListener:(SEL)arg2  ;
-(void)resetValueForSelector:(SEL)arg0 ;
-(void)setValue:(id)arg0 forPreferenceKey:(id)arg1 ;


@end


#endif