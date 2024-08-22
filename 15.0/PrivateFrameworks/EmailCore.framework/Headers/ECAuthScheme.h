// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ECAUTHSCHEME_H
#define ECAUTHSCHEME_H

@class NSString, NSSet;

#import <Foundation/Foundation.h>


@interface ECAuthScheme : NSObject

@property (readonly, nonatomic) unsigned int applescriptScheme;
@property (readonly, copy, nonatomic) NSString *humanReadableName;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL requiresPassword;
@property (readonly, nonatomic) BOOL requiresUsername;
@property (readonly, copy, nonatomic) NSSet *supportedSASLMechanisms;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)knownSchemes;
+(id)schemeWithApplescriptScheme:(unsigned int)arg0 ;
+(id)schemeWithName:(id)arg0 ;


@end


#endif