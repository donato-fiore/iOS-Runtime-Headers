// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CDSHAREDMEMORYCONTEXTPERSISTING_H
#define _CDSHAREDMEMORYCONTEXTPERSISTING_H

@class NSCountedSet, NSString, _CDSharedMemoryKeyValueStore;
@protocol _CDContextPersisting, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _CDSharedMemoryContextPersisting : NSObject <_CDContextPersisting>



@property (retain, nonatomic) NSCountedSet *keyPathRegistrationCount; // ivar: _keyPathRegistrationCount
@property (retain, nonatomic) NSCountedSet *legacyKeyPathRegistrationCount; // ivar: _legacyKeyPathRegistrationCount
@property (retain, nonatomic) NSString *localDeviceID; // ivar: _localDeviceID
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) _CDSharedMemoryKeyValueStore *store; // ivar: _store


+(id)persistenceWithSharedMemoryKeyValueStore:(id)arg0 ;
+(id)sharedMemoryKeyFromKeyPath:(id)arg0 ;
+(id)sharedMemoryKeyFromRegistration:(id)arg0 ;
-(id)allKeysForContextStore;
-(id)initWithSharedMemoryKeyValueStore:(id)arg0 ;
-(id)loadRegistrations;
-(id)loadValues;
-(void)deleteAllData;
-(void)deleteDataCreatedBefore:(id)arg0 ;
-(void)deleteKeyPaths:(id)arg0 ;
-(void)deleteRegistration:(id)arg0 ;
-(void)saveRegistration:(id)arg0 ;
-(void)saveValue:(id)arg0 forKeyPath:(id)arg1 ;


@end


#endif