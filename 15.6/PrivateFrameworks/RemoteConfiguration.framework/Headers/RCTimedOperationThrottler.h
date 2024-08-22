// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RCTIMEDOPERATIONTHROTTLER_H
#define RCTIMEDOPERATIONTHROTTLER_H

@class NSString;
@protocol RCOperationThrottlerDelegate, RCOperationThrottler;

#import <Foundation/Foundation.h>

#import "RCOperationThrottler.h"

@interface RCTimedOperationThrottler : NSObject <RCOperationThrottlerDelegate, RCOperationThrottler>



@property CGFloat cooldownTime; // ivar: _cooldownTime
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RCOperationThrottlerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) RCOperationThrottler *operationThrottler; // ivar: _operationThrottler
@property (readonly) Class superclass;
@property BOOL suspended;


-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)operationThrottler:(id)arg0 performAsyncOperationWithCompletion:(id)arg1 ;
-(void)tickle;
-(void)tickleWithCompletion:(id)arg0 ;


@end


#endif