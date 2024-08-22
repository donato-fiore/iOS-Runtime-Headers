// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBSSTATUSBARSTYLEOVERRIDESASSERTIONACQUISITIONHANDLERENTRY_H
#define SBSSTATUSBARSTYLEOVERRIDESASSERTIONACQUISITIONHANDLERENTRY_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SBSStatusBarStyleOverridesAssertionAcquisitionHandlerEntry : NSObject

@property (readonly, copy, nonatomic) id *handler; // ivar: _handler
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)init;
// -(id)initWithHandler:(id)arg0 queue:(unk)arg1  ;


@end


#endif