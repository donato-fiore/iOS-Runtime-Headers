// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSAPPPURCHASEHISTORYENTRY_H
#define SSAPPPURCHASEHISTORYENTRY_H



#import "SSSQLiteEntity.h"

@interface SSAppPurchaseHistoryEntry : SSSQLiteEntity



+(id)databaseTable;
+(id)disambiguatedSQLForProperty:(id)arg0 ;
+(id)predicateForAccountIdentifier:(id)arg0 ;
+(id)predicateForHasMessagesExtension;
+(id)predicateForIs32BitOnly:(BOOL)arg0 ;
+(id)predicateForNotFirstParty;
+(id)predicateForNotHidden;
+(id)supportsPlatformPredicate:(BOOL)arg0 ;


@end


#endif