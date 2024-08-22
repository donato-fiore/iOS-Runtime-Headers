// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ECAUTHENTICATIONSCHEME_H
#define ECAUTHENTICATIONSCHEME_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ECAuthenticationScheme : NSObject

@property (readonly, nonatomic) BOOL hasEncryption;
@property (readonly, nonatomic) NSString *humanReadableName;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL requiresPassword;


+(id)authenticationSchemesForAccount:(id)arg0 connection:(id)arg1 ;
+(id)knownSchemes;
+(id)schemeWithName:(id)arg0 ;
+(void)initialize;
+(void)registerSchemeClass:(Class)arg0 ;
-(BOOL)canAuthenticateAccountClass:(Class)arg0 connection:(id)arg1 ;
-(Class)authenticatorClass;
-(Class)connectionClassForAccountClass:(Class)arg0 ;
-(id)authenticatorForAccount:(id)arg0 connection:(id)arg1 ;


@end


#endif