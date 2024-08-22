// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMTABLEUPSERTSUBSCRIBER_H
#define BMTABLEUPSERTSUBSCRIBER_H

@class NSString, BPSSubscription, NSError;
@protocol BMTableSubscriber, BMFlexibleSimpleKeyValueStorage;

#import <Foundation/Foundation.h>

#import "BMTableStore.h"

@interface BMTableUpsertSubscriber : NSObject <BMTableSubscriber>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSObject<BMFlexibleSimpleKeyValueStorage> *keyValueStore; // ivar: _keyValueStore
@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (readonly, nonatomic) BMTableStore *store; // ivar: _store
@property (nonatomic) BPSSubscription *subscription; // ivar: _subscription
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *tableName; // ivar: _tableName
@property (nonatomic) BOOL tableSetupComplete; // ivar: _tableSetupComplete
@property (retain, nonatomic) NSError *tableSetupError; // ivar: _tableSetupError


-(NSInteger)receiveInput:(id)arg0 ;
-(id)initWithTableName:(id)arg0 identifier:(id)arg1 ;
-(id)initWithTableName:(id)arg0 identifier:(id)arg1 keyValueStore:(id)arg2 ;
-(id)newBookmark;
-(void)cancel;
-(void)receiveCompletion:(id)arg0 ;
-(void)receiveSubscription:(id)arg0 ;


@end


#endif