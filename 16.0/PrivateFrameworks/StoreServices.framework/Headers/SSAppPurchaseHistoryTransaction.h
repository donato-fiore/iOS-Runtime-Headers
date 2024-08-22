// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSAPPPURCHASEHISTORYTRANSACTION_H
#define SSAPPPURCHASEHISTORYTRANSACTION_H


#import <Foundation/Foundation.h>

#import "SSSQLiteDatabase.h"

@interface SSAppPurchaseHistoryTransaction : NSObject

@property (readonly, nonatomic) SSSQLiteDatabase *database; // ivar: _database


-(id)initWithDatabase:(id)arg0 ;
-(void)dealloc;


@end


#endif