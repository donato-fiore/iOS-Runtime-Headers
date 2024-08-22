// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACDCLIENTAUTHORIZATIONMANAGER_H
#define ACDCLIENTAUTHORIZATIONMANAGER_H


#import <Foundation/Foundation.h>

#import "ACDDatabaseConnection.h"

@interface ACDClientAuthorizationManager : NSObject {
    ACDDatabaseConnection *_databaseConnection;
}




-(id)_csvStringFromSet:(id)arg0 ;
-(id)_setFromCSVString:(id)arg0 ;
-(id)allAuthorizationsForAccountType:(id)arg0 ;
-(id)allAuthorizationsForAccountTypeWithIdentifier:(id)arg0 ;
-(id)authorizationForClient:(id)arg0 accountType:(id)arg1 ;
-(id)authorizationForClient:(id)arg0 accountTypeWithIdentifier:(id)arg1 ;
-(id)initWithDatabaseConnection:(id)arg0 ;
-(id)removeAllClientAuthorizationsForAccountType:(id)arg0 ;
-(id)removeAllClientAuthorizationsForAccountTypeWithIdentifier:(id)arg0 ;
-(id)removeAuthorizationForClient:(id)arg0 accountType:(id)arg1 ;
-(id)removeAuthorizationForClient:(id)arg0 accountTypeWithIdentifier:(id)arg1 ;
-(id)setAuthorization:(id)arg0 forClient:(id)arg1 onAccountType:(id)arg2 ;


@end


#endif