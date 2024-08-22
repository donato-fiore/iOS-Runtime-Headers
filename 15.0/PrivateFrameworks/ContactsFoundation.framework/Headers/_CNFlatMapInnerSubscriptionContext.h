// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CNFLATMAPINNERSUBSCRIPTIONCONTEXT_H
#define _CNFLATMAPINNERSUBSCRIPTIONCONTEXT_H

@protocol CNCancelable;

#import <Foundation/Foundation.h>

#import "CNSuspendableSchedulerDecorator.h"

@interface _CNFlatMapInnerSubscriptionContext : NSObject

@property (readonly, nonatomic) CNSuspendableSchedulerDecorator *decorator; // ivar: _decorator
@property (readonly, nonatomic) NSObject<CNCancelable> *token; // ivar: _token


-(id)initWithDecorator:(id)arg0 token:(id)arg1 ;


@end


#endif