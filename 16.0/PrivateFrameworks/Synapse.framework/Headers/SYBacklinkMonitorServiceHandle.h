// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SYBACKLINKMONITORSERVICEHANDLE_H
#define SYBACKLINKMONITORSERVICEHANDLE_H

@class NSXPCConnection, NSString;
@protocol SYBacklinkMonitorServiceProtocol, SYBacklinkMonitorServiceHandleDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SYBacklinkMonitorServiceHandle : NSObject <SYBacklinkMonitorServiceProtocol>



@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SYBacklinkMonitorServiceHandleDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handleQueue; // ivar: _handleQueue
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int processIdentifier;
@property (readonly) Class superclass;


+(id)handleWithConnection:(id)arg0 queue:(id)arg1 ;
-(NSInteger)_indicatorCoverage;
-(id)initWithConnection:(id)arg0 queue:(id)arg1 ;
-(void)_killConnectionWithCallback;
-(void)activeUserActivityDidChange:(id)arg0 context:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)indicatorCoverageWithCompletion:(id)arg0 ;
-(void)setFilterCache:(id)arg0 ;
-(void)setIndicatorCoverage:(id)arg0 ;


@end


#endif