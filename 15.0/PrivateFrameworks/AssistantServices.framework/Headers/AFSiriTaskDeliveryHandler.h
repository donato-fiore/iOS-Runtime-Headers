// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFSIRITASKDELIVERYHANDLER_H
#define AFSIRITASKDELIVERYHANDLER_H

@class NSString;
@protocol AFSiriTaskDelivering, AFSiriTaskServiceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AFSiriTaskService.h"

@interface AFSiriTaskDeliveryHandler : NSObject <AFSiriTaskDelivering>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AFSiriTaskServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (weak, nonatomic) AFSiriTaskService *service; // ivar: _service
@property (readonly) Class superclass;


-(void)deliverSiriTask:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif