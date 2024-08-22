// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCPURCHASEPROVIDER_H
#define FCPURCHASEPROVIDER_H

@class NSString, NSSet;
@protocol FCPurchaseProviderType;

#import <Foundation/Foundation.h>

#import "FCPurchaseController.h"
#import "FCPrivateChannelMembershipController.h"

@interface FCPurchaseProvider : NSObject <FCPurchaseProviderType>

 {
    FCPurchaseController *_purchaseController;
    FCPrivateChannelMembershipController *_privateChannelMembershipController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSSet *purchasedTagIDs;
@property (readonly) Class superclass;


-(id)init;


@end


#endif