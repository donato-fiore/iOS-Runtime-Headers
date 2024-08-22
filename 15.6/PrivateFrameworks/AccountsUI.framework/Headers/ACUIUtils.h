// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACUIUTILS_H
#define ACUIUTILS_H


#import <Foundation/Foundation.h>


@interface ACUIUtils : NSObject



+(id)_accountGroupIdentifier:(id)arg0 ignoringGroups:(id)arg1 ;
+(id)sortedAccountsFromAccounts:(id)arg0 ;
+(id)sortedDataclassesFrom:(id)arg0 ;
+(void)filterAccounts:(id)arg0 toTopLevel:(id)arg1 grouped:(id)arg2 ignoringGroups:(id)arg3 ;


@end


#endif