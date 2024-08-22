// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUSTOREFRONTPROVIDER_H
#define NUSTOREFRONTPROVIDER_H

@class NSString;
@protocol SXStoreFrontProvider, FCAppleAccount;

#import <Foundation/Foundation.h>


@interface NUStoreFrontProvider : NSObject <SXStoreFrontProvider>



@property (readonly, nonatomic) NSObject<FCAppleAccount> *appleAccount; // ivar: _appleAccount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *storeFrontIdentifier;
@property (readonly) Class superclass;


-(id)initWithAppleAccount:(id)arg0 ;


@end


#endif