// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSAPPPURCHASEHISTORYDATABASE_H
#define SSAPPPURCHASEHISTORYDATABASE_H


#import <Foundation/Foundation.h>

#import "SSSQLiteDatabase.h"

@interface SSAppPurchaseHistoryDatabase : NSObject {
    SSSQLiteDatabase *_database;
}




+(BOOL)_setupDatabase:(id)arg0 ;
+(id)accountUniqueIdentifierKey;
+(id)newDefaultInstance;
+(void)_createDatabaseDirectory;
-(BOOL)removeValueForDatabaseProperty:(id)arg0 ;
-(BOOL)resetCacheForNewAccountID:(id)arg0 ;
-(BOOL)setCurrentAccountUniqueIdentifier:(id)arg0 ;
-(BOOL)setLocalRevision:(NSInteger)arg0 forAccountUniqueIdentifier:(id)arg1 ;
-(BOOL)setValue:(id)arg0 forDatabaseProperty:(id)arg1 ;
-(NSInteger)localRevisionForAccountUniqueIdentifier:(id)arg0 ;
-(id)allProperties:(id)arg0 accountID:(id)arg1 includingHidden:(BOOL)arg2 ;
-(id)currentAccountUniqueIdentifier;
-(id)database;
-(id)init;
-(id)initWithDatabaseURL:(id)arg0 readOnly:(BOOL)arg1 ;
-(id)valueForDatabaseProperty:(id)arg0 ;
-(void)dealloc;
-(void)modifyUsingAppPurchaseHistoryTransactionBlock:(id)arg0 ;
-(void)readAsyncUsingTransactionBlock:(id)arg0 ;
-(void)readUsingTransactionBlock:(id)arg0 ;


@end


#endif