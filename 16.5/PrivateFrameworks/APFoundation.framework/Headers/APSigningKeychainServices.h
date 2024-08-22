// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APSIGNINGKEYCHAINSERVICES_H
#define APSIGNINGKEYCHAINSERVICES_H

@class NSString;

#import <Foundation/Foundation.h>


@interface APSigningKeychainServices : NSObject

@property (retain, nonatomic) NSString *inMemoryContextsKey; // ivar: _inMemoryContextsKey
@property (retain, nonatomic) NSString *inProgressContextsKey; // ivar: _inProgressContextsKey
@property (retain, nonatomic) NSString *stashedContextsKey; // ivar: _stashedContextsKey
@property (retain, nonatomic) NSString *usedContextsKey; // ivar: _usedContextsKey


-(id)_allContextForKey:(id)arg0 ;
-(id)_getKeyForType:(NSInteger)arg0 ;
-(id)_keychainQuery:(id)arg0 ;
-(id)_objectForKey:(id)arg0 error:(*id)arg1 ;
-(id)_readDataFromKeychain:(id)arg0 error:(*id)arg1 ;
-(id)contextsForType:(NSInteger)arg0 ;
-(id)init;
-(void)_generateKeys;
-(void)_removeObjectForKey:(id)arg0 ;
-(void)_setObject:(id)arg0 forKey:(id)arg1 ;
-(void)_writeDataToKeychain:(id)arg0 andData:(id)arg1 ;
-(void)removeAllContexts;
-(void)updateContext:(id)arg0 forType:(NSInteger)arg1 ;


@end


#endif