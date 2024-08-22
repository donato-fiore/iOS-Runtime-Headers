// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASAUTHORIZATIONREQUEST_H
#define ASAUTHORIZATIONREQUEST_H

@protocol NSCopying, NSSecureCoding, ASAuthorizationProvider;

#import <Foundation/Foundation.h>


@interface ASAuthorizationRequest : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSObject<ASAuthorizationProvider> *provider; // ivar: _provider


+(BOOL)supportsSecureCoding;
+(id)new;
-(BOOL)supportsStyle:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProvider:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif