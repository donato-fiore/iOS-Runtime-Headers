// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASTIDENTITY_H
#define ASTIDENTITY_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASTIdentity : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSArray *aliases; // ivar: _aliases
@property (retain, nonatomic) NSString *hostAppBuild; // ivar: _hostAppBuild
@property (retain, nonatomic) NSString *hostAppVersion; // ivar: _hostAppVersion
@property (retain, nonatomic) NSArray *json; // ivar: _json


+(BOOL)supportsSecureCoding;
+(id)identityWithIdentityAliases:(id)arg0 ;
+(id)identityWithSerialNumber:(id)arg0 ;
-(id)_dictionariesFromIdentityAliases:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentityAliases:(id)arg0 ;
-(id)userAgent;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif