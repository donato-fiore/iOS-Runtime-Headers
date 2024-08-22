// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICURLRESPONSEAUTHENTICATIONPROVIDER_H
#define ICURLRESPONSEAUTHENTICATIONPROVIDER_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICURLResponseAuthenticationProvider : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger interactionLevel; // ivar: _interactionLevel


+(BOOL)supportsSecureCoding;
+(id)defaultProvider;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUserInteractionLevel:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)performAuthenticationToHandleResponse:(id)arg0 toRequest:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)performAuthenticationUsingRequestContext:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif