// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKWALLETVISIBILITY_H
#define PKWALLETVISIBILITY_H


#import <Foundation/Foundation.h>


@interface PKWalletVisibility : NSObject



+(BOOL)isWalletRestricted;
+(BOOL)isWalletVisible;
+(id)setOfActiveRestrictionUUIDs;
+(void)updateWalletVisibility;


@end


#endif