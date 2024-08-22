// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALACCOUNTUTILS_H
#define CALACCOUNTUTILS_H


#import <Foundation/Foundation.h>


@interface CalAccountUtils : NSObject



+(BOOL)isAccountDataSeparated:(id)arg0 ;
+(BOOL)isiCloudAccount:(id)arg0 ;
+(id)_accountStore;
+(id)personaIdentifierForAccountIdentifier:(id)arg0 ;


@end


#endif