// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLGOOGLELEGACYTOKENMIGRATIONREQUEST_H
#define SLGOOGLELEGACYTOKENMIGRATIONREQUEST_H


#import <Foundation/Foundation.h>


@interface SLGoogleLegacyTokenMigrationRequest : NSObject



+(id)urlRequestForAuthCodeFromAuthToken:(id)arg0 clientID:(id)arg1 scope:(id)arg2 ;
+(id)urlRequestForAuthTokenFromLegacyClientToken:(id)arg0 username:(id)arg1 password:(id)arg2 ;


@end


#endif