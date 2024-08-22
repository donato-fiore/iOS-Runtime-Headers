// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSPURCHASEBAGCONSUMER_H
#define AMSPURCHASEBAGCONSUMER_H

@class NSString;
@protocol AMSBagConsumer;

#import <Foundation/Foundation.h>


@interface AMSPurchaseBagConsumer : NSObject <AMSBagConsumer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)bagKeySet;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;


@end


#endif