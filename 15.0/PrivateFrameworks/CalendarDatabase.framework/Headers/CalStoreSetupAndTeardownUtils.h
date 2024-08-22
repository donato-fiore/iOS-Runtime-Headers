// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALSTORESETUPANDTEARDOWNUTILS_H
#define CALSTORESETUPANDTEARDOWNUTILS_H


#import <Foundation/Foundation.h>


@interface CalStoreSetupAndTeardownUtils : NSObject



+(?)_clearAllEventsFromStoreinDatabase;
+(?)_copyStoreForAccountWithIdentifierinDatabase;
+(?)_copyStoreWithExternalIdentifierinDatabase;
+(?)_enableLocalStoreIfNecessaryIgnoringAccount:(?)arg0 inDatabaseaccountStore;
+(?)_mergeEntityType:(?)arg0 fromStore:(?)arg1 toStoreinDatabase;
+(?)clearAllEventsFromStoreForParentAccount:(?)arg0 withChildreninDatabase;
+(?)copyStoreForAccount:(?)arg0 withChildreninDatabase;
+(?)drainLocalStoreInDatabase;
+(?)isLocalStoreEmptyInDatabase;
+(?)isLocalStoreEnabledInDatabase;
+(?)isStoreEmptyForAccountinDatabase;
+(?)mergeEventsFromLocalStoreIntoStoreinDatabase;
+(?)mergeEventsIntoLocalStoreFromStoreinDatabase;
+(?)removeStoreForAccount:(?)arg0 withChildren:(?)arg1 inDatabaseaccountStore;
+(?)removeStoreForDeletedAccountWithIdentifier:(?)arg0 inDatabaseaccountStore;
+(?)setLocalStoreEnabledinDatabase;
+(?)setUpCalStoreForParentAccount:(?)arg0 withChildreninDatabase;
+(BOOL)isReadOnlyAccount:(id)arg0 ;
+(id)_calDAVInfoStringForTitle:(id)arg0 ;
+(id)_syncingAccountForParentAccount:(id)arg0 withChildren:(id)arg1 ;
+(void)_cleanKeepAwayFromServerCalsInStore:(*void)arg0 ;


@end


#endif