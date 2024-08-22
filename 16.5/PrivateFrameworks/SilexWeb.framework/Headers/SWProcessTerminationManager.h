// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWPROCESSTERMINATIONMANAGER_H
#define SWPROCESSTERMINATIONMANAGER_H

@class NSString, NSMutableArray;
@protocol SWProcessTerminationManager, SWErrorReporting, SWProcessTerminationPolicyDecider;

#import <Foundation/Foundation.h>


@interface SWProcessTerminationManager : NSObject <SWProcessTerminationManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SWErrorReporting> *errorReporter; // ivar: _errorReporter
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableArray *onRetryBlocks; // ivar: _onRetryBlocks
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<SWProcessTerminationPolicyDecider> *throttler; // ivar: _throttler


-(id)initWithTerminationThrottler:(id)arg0 errorReporter:(id)arg1 ;
-(void)onRetry:(id)arg0 ;
-(void)webContentProcessTerminated;


@end


#endif