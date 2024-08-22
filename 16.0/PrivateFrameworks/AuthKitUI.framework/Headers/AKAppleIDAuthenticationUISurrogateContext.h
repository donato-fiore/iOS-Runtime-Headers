// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKAPPLEIDAUTHENTICATIONUISURROGATECONTEXT_H
#define AKAPPLEIDAUTHENTICATIONUISURROGATECONTEXT_H

@class NSString;
@protocol AKAppleIDAuthenticationSurrogateUIProvider;


#import "AKAppleIDAuthenticationInAppContext.h"

@interface AKAppleIDAuthenticationUISurrogateContext : AKAppleIDAuthenticationInAppContext <AKAppleIDAuthenticationSurrogateUIProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithSurrogateID:(id)arg0 ;


@end


#endif