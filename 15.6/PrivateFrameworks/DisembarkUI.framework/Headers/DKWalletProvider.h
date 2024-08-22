// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DKWALLETPROVIDER_H
#define DKWALLETPROVIDER_H

@class NSString;
@protocol DKWalletProvider;

#import <Foundation/Foundation.h>


@interface DKWalletProvider : NSObject <DKWalletProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasCards;
-(id)localPaymentCards;


@end


#endif