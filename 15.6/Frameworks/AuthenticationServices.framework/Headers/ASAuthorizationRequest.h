// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASAUTHORIZATIONREQUEST_H
#define ASAUTHORIZATIONREQUEST_H

@protocol NSCopying, NSSecureCoding, ASAuthorizationProvider;

#import <Foundation/Foundation.h>


@interface ASAuthorizationRequest : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSObject<ASAuthorizationProvider> *provider; // ivar: _provider


+(BOOL)supportsSecureCoding;
+(id)new;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProvider:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif