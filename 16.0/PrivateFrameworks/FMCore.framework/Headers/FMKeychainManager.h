// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FMKEYCHAINMANAGER_H
#define FMKEYCHAINMANAGER_H


#import <Foundation/Foundation.h>


@interface FMKeychainManager : NSObject



+(id)sharedInstance;
-(BOOL)deleteDataForAccount:(id)arg0 service:(id)arg1 ;
-(BOOL)setData:(id)arg0 forAccount:(id)arg1 service:(id)arg2 ;
-(BOOL)setData:(id)arg0 forAccount:(id)arg1 service:(id)arg2 synchronizable:(NSInteger)arg3 dataProtectionClass:(NSInteger)arg4 migratable:(NSInteger)arg5 ;
-(BOOL)setPassword:(id)arg0 forAccount:(id)arg1 service:(id)arg2 ;
-(BOOL)setPassword:(id)arg0 forAccount:(id)arg1 service:(id)arg2 synchronizable:(NSInteger)arg3 dataProtectionClass:(NSInteger)arg4 migratable:(NSInteger)arg5 ;
-(id)_accessibilityForDataProtectionClass:(NSInteger)arg0 migratable:(BOOL)arg1 ;
-(id)_query:(id)arg0 error:(*id)arg1 ;
-(id)allAccountsForService:(id)arg0 ;
-(id)allRecords;
-(id)allServices;
-(id)dataForAccount:(id)arg0 service:(id)arg1 ;
-(id)itemForAccount:(id)arg0 service:(id)arg1 error:(*id)arg2 ;
-(id)passwordForAccount:(id)arg0 service:(id)arg1 ;
-(int)_add:(id)arg0 ;
-(int)_delete:(id)arg0 ;
-(int)_updateWithQuery:(id)arg0 attributes:(id)arg1 ;


@end


#endif