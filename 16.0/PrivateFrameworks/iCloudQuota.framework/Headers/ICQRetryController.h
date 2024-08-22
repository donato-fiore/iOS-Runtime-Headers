// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQRETRYCONTROLLER_H
#define ICQRETRYCONTROLLER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICQRetryController : NSObject {
    NSUInteger _numberOfAttempts;
    NSUInteger _maxNumberOfRetries;
    NSObject<OS_dispatch_queue> *_queue;
    id *_executionBlock;
}


@property (readonly, nonatomic) NSUInteger numberOfAttempts;


-(BOOL)executeBlock;
-(BOOL)retryAfterSeconds:(NSUInteger)arg0 ;
-(id)initWithMaxNumberOfRetries:(NSUInteger)arg0 block:(id)arg1 ;


@end


#endif