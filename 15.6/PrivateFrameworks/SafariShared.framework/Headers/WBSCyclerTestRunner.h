// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSCYCLERTESTRUNNER_H
#define WBSCYCLERTESTRUNNER_H

@class NSMutableArray;
@protocol WBSCyclerTestTarget, WBSCyclerTestSuite;

#import <Foundation/Foundation.h>


@interface WBSCyclerTestRunner : NSObject {
    BOOL _stopRequested;
    NSMutableArray *_pendingRequestQueue;
    NSMutableArray *_pendingRequestCompletionHandlerQueue;
}


@property (readonly, nonatomic, getter=isRunning) BOOL running; // ivar: _running
@property (readonly, nonatomic) NSObject<WBSCyclerTestTarget> *target; // ivar: _target
@property (readonly, nonatomic) NSObject<WBSCyclerTestSuite> *testSuite; // ivar: _testSuite


-(id)_descriptionForErrorCode:(NSInteger)arg0 ;
-(id)_errorWithCode:(NSInteger)arg0 ;
-(id)init;
-(id)initWithTestSuite:(id)arg0 target:(id)arg1 ;
-(void)_handleNextPendingRequestWithCompletionHandler:(id)arg0 ;
-(void)_performNextIterationWithCompletionHandler:(id)arg0 ;
-(void)_stop;
-(void)dealloc;
-(void)handleRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestStop;
-(void)runWithCompletionHandler:(id)arg0 ;


@end


#endif