// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRINOTIFICATIONCALLBACK_H
#define TRINOTIFICATIONCALLBACK_H

@class NSString;
@protocol TRINotificationToken, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TRINotificationCallback : NSObject <TRINotificationToken>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger id; // ivar: _id
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(id)init;


@end


#endif