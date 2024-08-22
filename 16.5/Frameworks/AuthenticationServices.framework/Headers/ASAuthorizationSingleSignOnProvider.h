// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASAUTHORIZATIONSINGLESIGNONPROVIDER_H
#define ASAUTHORIZATIONSINGLESIGNONPROVIDER_H

@class NSString, NSURL;
@protocol ASAuthorizationProvider;

#import <Foundation/Foundation.h>


@interface ASAuthorizationSingleSignOnProvider : NSObject <ASAuthorizationProvider>



@property (readonly, nonatomic) BOOL canPerformAuthorization;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(id)authorizationProviderWithIdentityProviderURL:(id)arg0 ;
+(id)new;
-(id)createRequest;
-(id)init;
-(id)initWithURL:(id)arg0 ;


@end


#endif