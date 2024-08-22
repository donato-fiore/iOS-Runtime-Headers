// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCQOSMONITORMANAGER_H
#define VCQOSMONITORMANAGER_H

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;


#import "VCObject.h"

@interface VCQoSMonitorManager : VCObject {
    NSMutableArray *_monitors;
    NSMutableDictionary *_sources;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    NSInteger _reportingInterval;
}


@property (readonly, nonatomic) NSMutableArray *moitors; // ivar: _moitors


+(id)sharedInstance;
-(BOOL)doesQoSSourceExistForStreamToken:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)deregisterBlocksForService;
-(void)registerBlocksForService;
-(void)registerQoSReportingSourceForToken:(NSInteger)arg0 ;
-(void)unregisterQoSReportingSourceForToken:(NSInteger)arg0 ;
-(void)updateQoSReport:(id)arg0 toClientsWithToken:(NSInteger)arg1 ;


@end


#endif