// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDMAILBOXACTIONPERSISTENCE_H
#define EDMAILBOXACTIONPERSISTENCE_H


#import <Foundation/Foundation.h>

#import "EDPersistenceDatabase.h"

@interface EDMailboxActionPersistence : NSObject

@property (readonly, nonatomic) EDPersistenceDatabase *database; // ivar: _database


+(id)tablesAndForeignKeysToResolve:(*id)arg0 associationsToResolve:(*id)arg1 ;
-(id)allMailboxActionForAccountID:(id)arg0 ;
-(id)initWithDatabase:(id)arg0 ;
-(id)nextMailboxActionForAccountID:(id)arg0 ;
-(void)deleteMailboxAction:(NSInteger)arg0 ;
-(void)deleteMailboxActions:(id)arg0 ;
-(void)saveMailboxActionForAccountID:(id)arg0 action:(id)arg1 ;


@end


#endif