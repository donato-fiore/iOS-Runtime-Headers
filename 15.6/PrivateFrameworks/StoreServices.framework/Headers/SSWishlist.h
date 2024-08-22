// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSWISHLIST_H
#define SSWISHLIST_H

@class NSNumber;

#import <Foundation/Foundation.h>

#import "SSSQLiteDatabase.h"

@interface SSWishlist : NSObject {
    SSSQLiteDatabase *_database;
}


@property (readonly, nonatomic) NSInteger accountIdentifier; // ivar: _accountIdentifier
@property (copy, nonatomic) NSNumber *lastSyncTime;


+(BOOL)existsForAccountIdentifier:(NSInteger)arg0 ;
-(BOOL)deleteBackingStore;
-(id)initWithAccountIdentifier:(NSInteger)arg0 ;
-(void)dealloc;
-(void)performTransactionWithBlock:(id)arg0 ;


@end


#endif