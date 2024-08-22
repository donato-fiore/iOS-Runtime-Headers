// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SOKERBEROSEXTENSIONPROCESS_H
#define SOKERBEROSEXTENSIONPROCESS_H

@class NSMutableDictionary, NSMapTable;

#import <Foundation/Foundation.h>

#import "SOKerberosHelper.h"
#import "SOKeychainHelper.h"

@interface SOKerberosExtensionProcess : NSObject

@property (retain, nonatomic) NSMutableDictionary *kerberosByRealm; // ivar: _kerberosByRealm
@property (retain) SOKerberosHelper *kerberosHelper; // ivar: _kerberosHelper
@property (retain, nonatomic) SOKeychainHelper *keychainHelper; // ivar: _keychainHelper
@property (retain, nonatomic) NSMapTable *requestContextMapping; // ivar: _requestContextMapping


-(BOOL)checkSourceAppACLWithContext:(id)arg0 ;
-(id)createContextForRequest:(id)arg0 ;
-(id)init;
-(id)kerberosForRealm:(id)arg0 ;
-(id)mapKnownPasswordErrorToString:(id)arg0 ;
-(id)settingsForContext:(id)arg0 includeSiteCodeCache:(BOOL)arg1 ;
-(void)attemptKerberosWithContext:(id)arg0 andDelegate:(id)arg1 ;
-(void)beginAuthorizationWithRequest:(id)arg0 ;
-(void)cancelAuthorizationWithRequest:(id)arg0 ;
-(void)completeRequestWithHTTPResponseFromContext:(id)arg0 ;
-(void)completeRequestWithToken:(id)arg0 andContext:(id)arg1 ;
-(void)destroyCredentialsWithContext:(id)arg0 ;
-(void)handleAddKeychainCreds:(id)arg0 ;
-(void)handleGetRealmInfo:(id)arg0 ;
-(void)handleGetSiteCode:(id)arg0 ;
-(void)handleKerberosOperations:(id)arg0 andDelegate:(id)arg1 ;
-(void)handleLogout:(id)arg0 removeRealm:(BOOL)arg1 ;
-(void)handleLogoutWithContext:(id)arg0 removeRealm:(BOOL)arg1 ;
-(void)handleMigration;
-(void)handleRemoveRealm:(id)arg0 ;
-(void)handleResetKeychainChoice:(id)arg0 ;
-(void)removeSettingFile:(int)arg0 ;
-(void)saveValuesAfterSuccessfulAuthentication:(id)arg0 ;
-(void)saveValuesAfterSuccessfulPasswordSync:(id)arg0 ;


@end


#endif