// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSCYCLERSERVICE_H
#define WBSCYCLERSERVICE_H

@class NSXPCListener, NSDate, NSError, NSString;
@protocol NSXPCListenerDelegate, WBSCyclerServiceProtocol, WBSCyclerTestSuite;

#import <Foundation/Foundation.h>

#import "WBSCyclerTestTargetProxyController.h"
#import "WBSCyclerTestRunner.h"

@interface WBSCyclerService : NSObject <NSXPCListenerDelegate, WBSCyclerServiceProtocol>

 {
    NSXPCListener *_xpcListener;
    WBSCyclerTestTargetProxyController *_testTargetProxyController;
    Class _testSuiteClass;
    id<WBSCyclerTestSuite> *_testSuite;
    WBSCyclerTestRunner *_testRunner;
    NSDate *_lastTestStart;
    NSDate *_lastTestEnd;
    NSError *_lastError;
    NSUInteger _maximumIterationCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_descriptionForErrorCode:(NSInteger)arg0 ;
-(id)_errorWithCode:(NSInteger)arg0 ;
-(id)_startCyclingFromBeginning:(BOOL)arg0 ;
-(id)init;
-(void)_finishedWithResult:(NSInteger)arg0 error:(id)arg1 ;
-(void)_postFinishNotificationWithError:(id)arg0 ;
-(void)_setMaximumIterationCount:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)_setSeed:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)_setTestSuiteName:(id)arg0 reply:(id)arg1 ;
-(void)fetchLastErrorWithReply:(id)arg0 ;
-(void)fetchLogsWithReply:(id)arg0 ;
-(void)fetchStatusWithReply:(id)arg0 ;
-(void)sendRequestToTestSuite:(id)arg0 reply:(id)arg1 ;
-(void)setTestTargetEndpoint:(id)arg0 reply:(id)arg1 ;
-(void)setValue:(id)arg0 forConfigurationKey:(id)arg1 reply:(id)arg2 ;
-(void)startCyclingFromBeginning:(BOOL)arg0 reply:(id)arg1 ;
-(void)stopCyclingWithReply:(id)arg0 ;


@end


#endif