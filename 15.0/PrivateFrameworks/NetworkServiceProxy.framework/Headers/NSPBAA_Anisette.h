// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPBAA_ANISETTE_H
#define NSPBAA_ANISETTE_H

@class NSString;
@protocol NSPAuthentication;

#import <Foundation/Foundation.h>


@interface NSPBAA_Anisette : NSObject <NSPAuthentication>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)addAuthenticationInformationToRequest:(id)arg0 tokenActivationQuery:(id)arg1 completionHandler:(id)arg2 ;
+(void)authenticationFailure;


@end


#endif