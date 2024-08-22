// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXSUBSCRIBEACTION_H
#define SXSUBSCRIBEACTION_H

@class NSString;
@protocol SXSubscribeAction, SXAction;

#import <Foundation/Foundation.h>


@interface SXSubscribeAction : NSObject <SXSubscribeAction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXAction> *postPurchaseAction; // ivar: postPurchaseAction
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *type;




@end


#endif