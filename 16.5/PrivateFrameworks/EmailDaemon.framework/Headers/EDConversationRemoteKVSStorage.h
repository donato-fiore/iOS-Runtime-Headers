// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDCONVERSATIONREMOTEKVSSTORAGE_H
#define EDCONVERSATIONREMOTEKVSSTORAGE_H

@class NSString, NSUbiquitousKeyValueStore;
@protocol EDConversationRemoteStorage, EFLoggable, EDConversationRemoteStorageDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface EDConversationRemoteKVSStorage : NSObject <EDConversationRemoteStorage, EFLoggable>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<EDConversationRemoteStorageDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInitialized) BOOL initialized; // ivar: _initialized
@property (retain, nonatomic) NSUbiquitousKeyValueStore *kvStore; // ivar: _kvStore
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateQueue; // ivar: _privateQueue
@property (readonly) Class superclass;


+(id)log;
-(BOOL)initialized;
-(BOOL)synchronize;
-(id)dictionaryForKey:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDelegate:(id)arg0 ;
-(id)storageName;
-(id)subsetOfMessageIDsToSyncFromMessageIDString:(id)arg0 ;
-(void)_storeChangedExternally:(id)arg0 ;
-(void)refresh;
-(void)removeDictionaryForKey:(id)arg0 ;
-(void)setDictionary:(id)arg0 forKey:(id)arg1 ;


@end


#endif