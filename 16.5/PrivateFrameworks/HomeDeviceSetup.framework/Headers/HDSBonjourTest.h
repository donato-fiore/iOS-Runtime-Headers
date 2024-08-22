// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSBONJOURTEST_H
#define HDSBONJOURTEST_H

@class CUBonjourBrowser, NSString, SFSession;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HDSBonjourTest : NSObject {
    CUBonjourBrowser *_browser;
    NSString *_testID;
    NSUInteger _startTicks;
    NSObject<OS_dispatch_source> *_timer;
    BOOL _invalidateCalled;
}


@property (readonly, nonatomic) int bonjourTestState; // ivar: _bonjourTestState
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly, nonatomic) CGFloat metricTotalSeconds; // ivar: _metricTotalSeconds
@property (retain, nonatomic) SFSession *sfSession; // ivar: _sfSession
@property (nonatomic) CGFloat timeout; // ivar: _timeout


-(id)init;
-(void)_complete;
-(void)_handleFoundDevice:(id)arg0 ;
-(void)_handleTimeout;
-(void)activate;
-(void)invalidate;


@end


#endif