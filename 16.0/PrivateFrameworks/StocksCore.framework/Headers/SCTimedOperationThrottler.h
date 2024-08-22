// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCTIMEDOPERATIONTHROTTLER_H
#define SCTIMEDOPERATIONTHROTTLER_H

@class NSString;
@protocol SCWOperationThrottlerDelegate, SCWOperationThrottler;

#import <Foundation/Foundation.h>

#import "SCWOperationThrottler.h"

@interface SCTimedOperationThrottler : NSObject <SCWOperationThrottlerDelegate, SCWOperationThrottler>



@property CGFloat cooldownTime; // ivar: _cooldownTime
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SCWOperationThrottlerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SCWOperationThrottler *operationThrottler; // ivar: _operationThrottler
@property (readonly) Class superclass;
@property BOOL suspended;


-(id)initWithDelegate:(id)arg0 ;
-(void)operationThrottler:(id)arg0 performAsyncOperationWithCompletion:(id)arg1 ;
-(void)tickle;
-(void)tickleWithCompletion:(id)arg0 ;


@end


#endif