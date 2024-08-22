// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASAUTHORIZATIONPASSWORDPROVIDER_H
#define ASAUTHORIZATIONPASSWORDPROVIDER_H

@class NSString;
@protocol ASAuthorizationProvider;

#import <Foundation/Foundation.h>


@interface ASAuthorizationPasswordProvider : NSObject <ASAuthorizationProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createRequest;


@end


#endif