// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXPROXYAUTHENTICATIONKEYPROVIDER_H
#define SXPROXYAUTHENTICATIONKEYPROVIDER_H

@class NSString;
@protocol SXProxyAuthenticationKeyProvider;

#import <Foundation/Foundation.h>


@interface SXProxyAuthenticationKeyProvider : NSObject <SXProxyAuthenticationKeyProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *secret; // ivar: _secret
@property (readonly) Class superclass;


-(id)initWithIdentifier:(id)arg0 secret:(id)arg1 ;
-(void)requestAuthenticationKeyWithCompletion:(id)arg0 ;


@end


#endif