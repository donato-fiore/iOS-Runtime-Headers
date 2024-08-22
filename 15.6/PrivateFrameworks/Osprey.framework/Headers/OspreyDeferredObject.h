// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OSPREYDEFERREDOBJECT_H
#define OSPREYDEFERREDOBJECT_H

@protocol OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface OspreyDeferredObject : NSObject {
    id *_promised;
    NSObject<OS_dispatch_queue> *_deferralQueue;
    NSObject<OS_dispatch_queue> *_fulfillmentQueue;
    NSObject<OS_dispatch_group> *_fulfillmentGroup;
}




-(id)initWithFulfillmentQueue:(id)arg0 ;
-(void)fulfill:(id)arg0 ;
-(void)fulfilledWithCompletion:(id)arg0 ;


@end


#endif