// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CNFLATMAPSUBSCRIPTIONCONTEXT_H
#define _CNFLATMAPSUBSCRIPTIONCONTEXT_H

@class NSMutableArray;
@protocol CNScheduler;

#import <Foundation/Foundation.h>

#import "CNQueue.h"

@interface _CNFlatMapSubscriptionContext : NSObject

@property (readonly, nonatomic) CNQueue *decorators; // ivar: _decorators
@property (readonly, nonatomic) NSObject<CNScheduler> *downstream; // ivar: _downstream
@property (nonatomic, getter=isObserverReceiving) BOOL observerReceiving; // ivar: _observerReceiving
@property (nonatomic, getter=isOperatorReceiving) BOOL operatorReceiving; // ivar: _operatorReceiving
@property (readonly, nonatomic) NSObject<CNScheduler> *resourceLock; // ivar: _resourceLock
@property (readonly, nonatomic) NSMutableArray *tokens; // ivar: _tokens


-(id)initWithSchedulerProvider:(id)arg0 ;


@end


#endif