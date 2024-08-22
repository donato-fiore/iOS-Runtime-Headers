// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSAUTHENTICATIONCONFIGURATION_H
#define MSAUTHENTICATIONCONFIGURATION_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CMSAuthenticationConfiguration.h"

@interface MSAuthenticationConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (readonly) CMSAuthenticationConfiguration *configuration; // ivar: _configuration


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif