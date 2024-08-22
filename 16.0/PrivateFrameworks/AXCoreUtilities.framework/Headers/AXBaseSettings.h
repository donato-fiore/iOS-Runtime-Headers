// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXBASESETTINGS_H
#define AXBASESETTINGS_H

@class NSMutableDictionary, NSMutableSet;

#import <Foundation/Foundation.h>


@interface AXBaseSettings : NSObject {
    os_unfair_lock_s _domainNamesToSynchronizeLock;
}


@property (retain, nonatomic) NSMutableDictionary *preferenceKeysByDomainNameToSynchronize; // ivar: _preferenceKeysByDomainNameToSynchronize
@property (retain, nonatomic) NSMutableSet *registeredPreferenceKeys; // ivar: _registeredPreferenceKeys
@property (retain, nonatomic) NSMutableDictionary *updateBlocks; // ivar: _updateBlocks


-(BOOL)_switchFromRootUserIfNecessary:(id)arg0 ;
-(BOOL)boolValueForPreferenceKey:(id)arg0 defaultValue:(BOOL)arg1 ;
-(BOOL)hasExistingValueForPreferenceWithSelector:(SEL)arg0 ;
-(CGFloat)doubleValueForPreferenceKey:(id)arg0 defaultValue:(CGFloat)arg1 ;
-(NSInteger)integerValueForPreferenceKey:(id)arg0 defaultValue:(NSInteger)arg1 ;
-(id)_userDefaultsStoreForDomainName:(id)arg0 ;
-(id)allDomainNamesForPreferenceKey:(id)arg0 ;
-(id)domainNameForPreferenceKey:(id)arg0 ;
-(id)init;
-(id)notificationNameForPreferenceKey:(id)arg0 ;
-(id)objectValueForPreferenceKey:(id)arg0 ofClass:(Class)arg1 defaultValue:(id)arg2 ;
-(id)preferenceKeyForSelector:(SEL)arg0 ;
-(id)valueForPreferenceKey:(id)arg0 ;
-(void)_handlePreferenceChangedWithNotificationName:(id)arg0 ;
-(void)_registerForNotification:(id)arg0 ;
-(void)_synchronizeIfNecessaryForPreferenceKey:(id)arg0 domainName:(id)arg1 ;
-(void)clearExistingValueForPreferenceWithSelector:(SEL)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)postNotificationForPreferenceKey:(id)arg0 ;
// -(void)registerUpdateBlock:(id)arg0 forRetrieveSelector:(unk)arg1 withListener:(SEL)arg2  ;
-(void)setValue:(id)arg0 forPreferenceKey:(id)arg1 ;
-(void)willPerformUpdateBlocksForPreferenceKey:(id)arg0 ;
-(void)willPostNotificationForPreferenceKey:(id)arg0 value:(id)arg1 ;


@end


#endif