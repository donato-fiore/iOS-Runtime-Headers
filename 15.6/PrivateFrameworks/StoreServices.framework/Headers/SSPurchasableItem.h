// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSPURCHASABLEITEM_H
#define SSPURCHASABLEITEM_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "SSSQLiteDatabase.h"

@interface SSPurchasableItem : NSObject {
    NSDictionary *_propertyValues;
    NSString *_tableName;
    SSSQLiteDatabase *_database;
}




+(id)allPropertyKeys;
+(id)databaseTable;
+(id)sortByDatePurchasedKey;
-(BOOL)isHidden;
-(NSInteger)accountUniqueIdentifier;
-(NSInteger)pid;
-(NSInteger)storeID;
-(id)datePurchased;
-(id)description;
-(id)initWithPropertyValues:(id)arg0 ;
-(id)propertyValues;
-(void)dealloc;


@end


#endif