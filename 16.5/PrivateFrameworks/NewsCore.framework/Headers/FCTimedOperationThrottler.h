// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCTIMEDOPERATIONTHROTTLER_H
#define FCTIMEDOPERATIONTHROTTLER_H

@class NSString;
@protocol FCOperationThrottlerDelegate, FCOperationThrottler;

#import <Foundation/Foundation.h>

#import "FCOperationThrottler.h"

@interface FCTimedOperationThrottler : NSObject <FCOperationThrottlerDelegate, FCOperationThrottler>



@property CGFloat cooldownTime; // ivar: _cooldownTime
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FCOperationThrottlerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) FCOperationThrottler *operationThrottler; // ivar: _operationThrottler
@property (readonly) Class superclass;
@property BOOL suspended;


-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)operationThrottler:(id)arg0 performAsyncOperationWithCompletion:(id)arg1 ;
-(void)tickle;
-(void)tickleWithCompletion:(id)arg0 ;


@end


#endif