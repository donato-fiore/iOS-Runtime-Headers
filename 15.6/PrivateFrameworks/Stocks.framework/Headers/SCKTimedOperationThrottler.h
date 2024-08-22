// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCKTIMEDOPERATIONTHROTTLER_H
#define SCKTIMEDOPERATIONTHROTTLER_H

@class NSString;
@protocol SCKOperationThrottlerDelegate, SCKOperationThrottler;

#import <Foundation/Foundation.h>

#import "SCKOperationThrottler.h"

@interface SCKTimedOperationThrottler : NSObject <SCKOperationThrottlerDelegate, SCKOperationThrottler>



@property CGFloat cooldownTime; // ivar: _cooldownTime
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SCKOperationThrottlerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SCKOperationThrottler *operationThrottler; // ivar: _operationThrottler
@property (readonly) Class superclass;
@property BOOL suspended;


-(id)initWithDelegate:(id)arg0 ;
-(void)operationThrottler:(id)arg0 performAsyncOperationWithCompletion:(id)arg1 ;
-(void)tickle;
-(void)tickleWithCompletion:(id)arg0 ;


@end


#endif