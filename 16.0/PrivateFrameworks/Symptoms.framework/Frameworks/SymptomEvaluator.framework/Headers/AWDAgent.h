// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWDAGENT_H
#define AWDAGENT_H

@class NSSet, AWDServerConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AWDAgent : NSObject {
    BOOL _isHelper;
    id *dropboxObserver;
}


@property (retain, nonatomic) NSSet *awdCFNetworkConfiguredMetricIds; // ivar: _awdCFNetworkConfiguredMetricIds
@property (retain, nonatomic) NSSet *awdLibnetcoreConfiguredMetricIds; // ivar: _awdLibnetcoreConfiguredMetricIds
@property (retain, nonatomic) NSSet *awdSymptomsConfiguredMetricIds; // ivar: _awdSymptomsConfiguredMetricIds
@property (retain) AWDServerConnection *cfnetworkAWDConnection; // ivar: _cfnetworkAWDConnection
@property (retain) AWDServerConnection *libnetcoreAWDConnection; // ivar: _libnetcoreAWDConnection
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain) AWDServerConnection *symptomsAWDConnection; // ivar: _symptomsAWDConnection


+(id)defaultInstance;
-(BOOL)overridePostMetricConfig;
-(BOOL)shouldSendMetric:(unsigned int)arg0 ;
-(id)init;
-(void)_handleQuery:(unsigned int)arg0 ;
-(void)_postMetricForSignificantEvent:(int)arg0 orEventName:(id)arg1 errorContext:(int)arg2 error:(id)arg3 status:(int)arg4 ;
-(void)bulkPostMetrics:(id)arg0 withIdentifier:(unsigned int)arg1 libnetcore:(BOOL)arg2 ;
-(void)dealloc;
-(void)postMetric:(id)arg0 withIdentifier:(unsigned int)arg1 ;
-(void)postMetric:(id)arg0 withIdentifier:(unsigned int)arg1 libnetcore:(BOOL)arg2 ;
-(void)postMetricForSignificantEvent:(int)arg0 errorContext:(int)arg1 error:(id)arg2 status:(int)arg3 ;
-(void)postMetricForSignificantEventWithName:(id)arg0 errorContext:(int)arg1 error:(id)arg2 status:(int)arg3 ;


@end


#endif