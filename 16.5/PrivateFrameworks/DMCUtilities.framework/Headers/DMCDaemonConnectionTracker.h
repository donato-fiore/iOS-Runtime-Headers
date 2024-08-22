// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMCDAEMONCONNECTIONTRACKER_H
#define DMCDAEMONCONNECTIONTRACKER_H

@class NSString, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DMCDaemonConnectionTracker : NSObject

@property (copy, nonatomic) NSString *clientName; // ivar: _clientName
@property (retain, nonatomic) NSMutableDictionary *connectionCache; // ivar: _connectionCache
@property (nonatomic) CGFloat connectionThreshold; // ivar: _connectionThreshold
@property (copy, nonatomic) id *excessiveConncetionHandler; // ivar: _excessiveConncetionHandler
@property (copy, nonatomic) id *excessiveRequestHandler; // ivar: _excessiveRequestHandler
@property (retain, nonatomic) NSMutableDictionary *pidNameCache; // ivar: _pidNameCache
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSMutableDictionary *requestCache; // ivar: _requestCache
@property (nonatomic) CGFloat requestThreshold; // ivar: _requestThreshold


-(id)_nameForProcessWithPID:(int)arg0 cache:(id)arg1 ;
-(id)initWithProcessName:(id)arg0 connectionThreshold:(NSUInteger)arg1 requestThreshold:(NSUInteger)arg2 ;
-(void)trackConnectionFromPID:(int)arg0 ;
-(void)trackRequestFromPID:(int)arg0 ;


@end


#endif