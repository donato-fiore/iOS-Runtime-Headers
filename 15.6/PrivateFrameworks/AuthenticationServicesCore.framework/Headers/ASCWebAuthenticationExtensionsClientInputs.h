// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCWEBAUTHENTICATIONEXTENSIONSCLIENTINPUTS_H
#define ASCWEBAUTHENTICATIONEXTENSIONSCLIENTINPUTS_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASCWebAuthenticationExtensionsClientInputs : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *appID; // ivar: _appID
@property (nonatomic) BOOL isGoogleLegacyAppIDSupport; // ivar: _isGoogleLegacyAppIDSupport


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAppID:(id)arg0 isGoogleLegacyAppIDSupport:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif