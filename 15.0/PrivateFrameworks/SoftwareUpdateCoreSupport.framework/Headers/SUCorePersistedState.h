// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUCOREPERSISTEDSTATE_H
#define SUCOREPERSISTEDSTATE_H

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SUCorePersistedState : NSObject

@property (retain, nonatomic) NSMutableDictionary *persistedState; // ivar: _persistedState
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *persistedStateQueue; // ivar: _persistedStateQueue
@property (retain, nonatomic) NSString *persistencePath; // ivar: _persistencePath
@property (retain, nonatomic) NSString *versionPolicyLayer; // ivar: _versionPolicyLayer
@property (retain, nonatomic) NSString *versionSUCore; // ivar: _versionSUCore


-(BOOL)booleanForKey:(id)arg0 ;
-(BOOL)booleanForKey:(id)arg0 forType:(int)arg1 ;
-(BOOL)isPersistedStateLoaded;
-(BOOL)loadPersistedState;
-(NSUInteger)ullForKey:(id)arg0 ;
-(NSUInteger)ullForKey:(id)arg0 forType:(int)arg1 ;
-(id)_createEmptyPersistedState;
-(id)_keyNameForPersistedStateType:(int)arg0 ;
-(id)dataForKey:(id)arg0 ;
-(id)dataForKey:(id)arg0 forType:(int)arg1 ;
-(id)dateForKey:(id)arg0 ;
-(id)dateForKey:(id)arg0 forType:(int)arg1 ;
-(id)description;
-(id)dictionaryForKey:(id)arg0 ;
-(id)dictionaryForKey:(id)arg0 forType:(int)arg1 ;
-(id)initWithDispatchQueue:(id)arg0 withPersistencePath:(id)arg1 forPolicyVersion:(id)arg2 ;
-(id)objectForKey:(id)arg0 ofClass:(Class)arg1 ;
-(id)objectForKey:(id)arg0 ofClass:(Class)arg1 forType:(int)arg2 ;
-(id)persistedContentsType;
-(id)persistedCoreVersion;
-(id)persistedPolicyVersion;
-(id)secureCodedObjectForKey:(id)arg0 ofClass:(Class)arg1 ;
-(id)secureCodedObjectForKey:(id)arg0 ofClass:(Class)arg1 encodeClasses:(id)arg2 ;
-(id)secureCodedObjectForKey:(id)arg0 ofClass:(Class)arg1 encodeClasses:(id)arg2 forType:(int)arg3 ;
-(id)secureCodedObjectForKey:(id)arg0 ofClass:(Class)arg1 forType:(int)arg2 ;
-(id)stringForKey:(id)arg0 ;
-(id)stringForKey:(id)arg0 forType:(int)arg1 ;
-(id)summary;
-(void)_writePersistedState;
-(void)persistBoolean:(BOOL)arg0 forKey:(id)arg1 ;
-(void)persistBoolean:(BOOL)arg0 forKey:(id)arg1 forType:(int)arg2 shouldPersist:(BOOL)arg3 ;
-(void)persistBoolean:(BOOL)arg0 forKey:(id)arg1 shouldPersist:(BOOL)arg2 ;
-(void)persistData:(id)arg0 forKey:(id)arg1 ;
-(void)persistData:(id)arg0 forKey:(id)arg1 forType:(int)arg2 shouldPersist:(BOOL)arg3 ;
-(void)persistData:(id)arg0 forKey:(id)arg1 shouldPersist:(BOOL)arg2 ;
-(void)persistDate:(id)arg0 forKey:(id)arg1 ;
-(void)persistDate:(id)arg0 forKey:(id)arg1 forType:(int)arg2 shouldPersist:(BOOL)arg3 ;
-(void)persistDate:(id)arg0 forKey:(id)arg1 shouldPersist:(BOOL)arg2 ;
-(void)persistDictionary:(id)arg0 forKey:(id)arg1 ;
-(void)persistDictionary:(id)arg0 forKey:(id)arg1 forType:(int)arg2 shouldPersist:(BOOL)arg3 ;
-(void)persistDictionary:(id)arg0 forKey:(id)arg1 shouldPersist:(BOOL)arg2 ;
-(void)persistObject:(id)arg0 forKey:(id)arg1 ;
-(void)persistObject:(id)arg0 forKey:(id)arg1 forType:(int)arg2 shouldPersist:(BOOL)arg3 ;
-(void)persistObject:(id)arg0 forKey:(id)arg1 shouldPersist:(BOOL)arg2 ;
-(void)persistSecureCodedObject:(id)arg0 forKey:(id)arg1 ;
-(void)persistSecureCodedObject:(id)arg0 forKey:(id)arg1 forType:(int)arg2 shouldPersist:(BOOL)arg3 ;
-(void)persistSecureCodedObject:(id)arg0 forKey:(id)arg1 shouldPersist:(BOOL)arg2 ;
-(void)persistState;
-(void)persistString:(id)arg0 forKey:(id)arg1 ;
-(void)persistString:(id)arg0 forKey:(id)arg1 forType:(int)arg2 shouldPersist:(BOOL)arg3 ;
-(void)persistString:(id)arg0 forKey:(id)arg1 shouldPersist:(BOOL)arg2 ;
-(void)persistULL:(NSUInteger)arg0 forKey:(id)arg1 ;
-(void)persistULL:(NSUInteger)arg0 forKey:(id)arg1 forType:(int)arg2 shouldPersist:(BOOL)arg3 ;
-(void)persistULL:(NSUInteger)arg0 forKey:(id)arg1 shouldPersist:(BOOL)arg2 ;
-(void)removePersistedState;


@end


#endif