// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CBHIDPERFORMANCEMONITOR_H
#define CBHIDPERFORMANCEMONITOR_H

@class NSArray;
@protocol CBActivatable, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CBHIDPerformanceMonitor : NSObject <CBActivatable>

 {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
}


@property (copy, nonatomic) NSArray *devices; // ivar: _devices
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *excessiveIntervalHandler; // ivar: _excessiveIntervalHandler
@property (nonatomic) CGFloat intervalMs; // ivar: _intervalMs
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) id *summaryHandler; // ivar: _summaryHandler
@property (nonatomic) CGFloat testSeconds; // ivar: _testSeconds


-(id)init;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_invalidate;
-(void)_invalidated;
-(void)activateWithCompletion:(id)arg0 ;
-(void)invalidate;


@end


#endif