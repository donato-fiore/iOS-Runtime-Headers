// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDREADLATERCLOUDSTORAGE_H
#define EDREADLATERCLOUDSTORAGE_H

@class NSString;
@protocol EMUbiquitouslyPersistedDictionaryDelegate, EDMessageChangeHookResponder, EDReadLaterCloudStorageDateProvider, EMMutableDictionaryProtocol;

#import <Foundation/Foundation.h>

#import "EDPersistenceHookRegistry.h"
#import "EDMessagePersistence.h"

@interface EDReadLaterCloudStorage : NSObject <EMUbiquitouslyPersistedDictionaryDelegate, EDMessageChangeHookResponder, EDReadLaterCloudStorageDateProvider>

 {
    id<EMMutableDictionaryProtocol> *_persistentDictionary;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry; // ivar: _hookRegistry
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence; // ivar: _messagePersistence
@property (readonly) Class superclass;


-(id)_keyFormessage:(id)arg0 ;
-(id)_messageHashForKey:(id)arg0 ;
-(id)cloudStorageReadLaterDateForMessage:(id)arg0 ;
-(id)initWithHookRegistry:(id)arg0 ;
-(id)initWithMutableDictionary:(id)arg0 hookRegistry:(id)arg1 ;
-(void)addEntryForMessage:(id)arg0 date:(id)arg1 ;
-(void)persistedDictionaryDidChangeRemotelyWithChangedItems:(id)arg0 deletedItems:(id)arg1 ;
-(void)persistenceDidChangeReadLaterDate:(id)arg0 messages:(id)arg1 changeIsRemote:(BOOL)arg2 generationWindow:(id)arg3 ;
-(void)persistenceDidUpdateDisplayDateForMessages:(id)arg0 changeIsRemote:(BOOL)arg1 generation:(NSInteger)arg2 ;
-(void)removeEntryForMessage:(id)arg0 ;
-(void)updateDisplayDateForMessage:(id)arg0 displayDate:(id)arg1 ;


@end


#endif