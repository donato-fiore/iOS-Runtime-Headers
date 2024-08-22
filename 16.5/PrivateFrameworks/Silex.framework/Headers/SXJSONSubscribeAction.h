// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXJSONSUBSCRIBEACTION_H
#define SXJSONSUBSCRIBEACTION_H

@class NSString;
@protocol SXSubscribeAction, SXAction;


#import "SXJSONAction.h"
#import "SXJSONDictionary.h"

@interface SXJSONSubscribeAction : SXJSONAction <SXSubscribeAction>



@property (readonly, nonatomic) SXJSONDictionary *analytics;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXAction> *postPurchaseAction;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *type;


+(Class)classForProtocolProperty:(id)arg0 withValue:(id)arg1 ;


@end


#endif