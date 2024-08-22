// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSMETRICSIDENTIFIERSTORE_H
#define AMSMETRICSIDENTIFIERSTORE_H

@class ACAccount, NSString;

#import <Foundation/Foundation.h>

#import "AMSProcessInfo.h"

@interface AMSMetricsIdentifierStore : NSObject

@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo
@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (nonatomic) BOOL includeAccountMatchStatus; // ivar: _includeAccountMatchStatus
@property (nonatomic) CGFloat resetInterval; // ivar: _resetInterval


+(id)_accountIdentifierForAccount:(id)arg0 ;
+(id)_database;
+(id)_sharedQueue;
+(id)_sync;
+(id)identifierStoreWithAccount:(id)arg0 bagNamespace:(id)arg1 bag:(id)arg2 ;
+(void)cleanupIdentifiers;
+(void)removeIdentifiersForAccount:(id)arg0 ;
-(id)_generateEventFieldsForKeys:(id)arg0 date:(id)arg1 ;
-(id)_generateIdentifierKey:(id)arg0 storeInfo:(id)arg1 period:(NSInteger)arg2 ;
-(id)_generateStoreKey;
-(id)_identifierInfoForKey:(id)arg0 storeInfo:(id)arg1 period:(NSInteger)arg2 inDatabase:(id)arg3 date:(id)arg4 setValue:(id)arg5 lastSyncDate:(id)arg6 needsToSync:(*BOOL)arg7 error:(*id)arg8 ;
-(id)_identifierStoreInfoForKeys:(id)arg0 inDatabase:(id)arg1 date:(id)arg2 needsToSync:(*BOOL)arg3 error:(*id)arg4 ;
-(id)_identifiersForKeys:(id)arg0 currentDate:(id)arg1 ;
-(id)generateEventFieldsForKeys:(id)arg0 ;
-(id)generateEventFieldsForKeys:(id)arg0 date:(id)arg1 ;
-(id)identifierForKey:(id)arg0 ;
-(id)identifierIfExistsForKey:(id)arg0 ;
-(void)_generateFutureIdentifiersIfNeededForKeys:(id)arg0 storeInfo:(id)arg1 afterPeriod:(NSInteger)arg2 inDatabase:(id)arg3 date:(id)arg4 ;
-(void)_setIdentifier:(id)arg0 withStartedDate:(id)arg1 forKey:(id)arg2 ;
-(void)_setIdentifier:(id)arg0 withStartedDate:(id)arg1 lastSyncDate:(id)arg2 forKey:(id)arg3 ;
-(void)reset;
-(void)setIdentifier:(id)arg0 forKey:(id)arg1 ;


@end


#endif