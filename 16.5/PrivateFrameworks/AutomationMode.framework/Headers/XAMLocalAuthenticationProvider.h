// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef XAMLOCALAUTHENTICATIONPROVIDER_H
#define XAMLOCALAUTHENTICATIONPROVIDER_H

@class NSString;
@protocol XAMAuthorizationProvider;

#import <Foundation/Foundation.h>


@interface XAMLocalAuthenticationProvider : NSObject <XAMAuthorizationProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_makeAuthorizationContext;
-(id)authorizationWithError:(*id)arg0 ;
-(id)localizedAuthorizationReason;
-(void)requestAuthorizationWithReply:(id)arg0 ;


@end


#endif