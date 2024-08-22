// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBANALYTICSSTATEMACHINEEVENTHANDLER_H
#define SBANALYTICSSTATEMACHINEEVENTHANDLER_H

@class NSMutableArray, NSString;
@protocol SBFAnalyticsBackendEventHandling;

#import <Foundation/Foundation.h>


@interface SBAnalyticsStateMachineEventHandler : NSObject <SBFAnalyticsBackendEventHandling>

 {
    NSMutableArray *_edges;
}


@property (readonly, nonatomic) NSUInteger currentState; // ivar: _currentState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)handleEvent:(NSUInteger)arg0 withContext:(id)arg1 ;
-(id)init;
-(void)addEdge:(id)arg0 ;


@end


#endif