// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MOLOCALSETTINGSSTORE_H
#define MOLOCALSETTINGSSTORE_H

@class NSMutableDictionary;
@protocol MOSettingsReader, MOSettingsWriter, OS_dispatch_queue, OS_os_transaction;


#import "MOSettingsStore.h"

@interface MOLocalSettingsStore : MOSettingsStore <MOSettingsReader, MOSettingsWriter>



@property (retain, nonatomic) NSMutableDictionary *cachedPersistedValues; // ivar: _cachedPersistedValues
@property (nonatomic) BOOL hasPendingRequest; // ivar: _hasPendingRequest
@property (nonatomic) BOOL isDebouncing; // ivar: _isDebouncing
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // ivar: _syncQueue
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction; // ivar: _transaction


-(BOOL)saveSettings;
-(id)init;
-(id)reader;
-(id)valueForSetting:(id)arg0 inGroup:(id)arg1 ;
-(id)writer;
-(void)removeValueForSetting:(id)arg0 inGroup:(id)arg1 ;
-(void)setValue:(id)arg0 forSetting:(id)arg1 inGroup:(id)arg2 ;
-(void)updateEffectiveSettings;
-(void)updateEffectiveSettingsIfNecessary;


@end


#endif