// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCMETRICS_H
#define ASCMETRICS_H

@protocol ASCServices;

#import <Foundation/Foundation.h>

#import "ASCPendingPromises.h"

@interface ASCMetrics : NSObject

@property (readonly, nonatomic) NSObject<ASCServices> *connection; // ivar: _connection
@property (readonly, nonatomic) ASCPendingPromises *pendingProcesses; // ivar: _pendingProcesses


+(id)sharedMetrics;
-(id)initWithConnection:(id)arg0 ;
-(id)processMetricsData:(id)arg0 pageFields:(id)arg1 activity:(id)arg2 ;
-(id)processMetricsData:(id)arg0 withActivity:(id)arg1 ;
-(id)processViewMetrics:(id)arg0 atInvocationPoint:(id)arg1 withActivity:(id)arg2 ;
-(id)processViewRenderWithPredicate:(id)arg0 ;
-(id)recordCampaignToken:(id)arg0 providerToken:(id)arg1 withLockup:(id)arg2 ;
-(id)recordQToken:(id)arg0 campaignToken:(id)arg1 advertisementID:(id)arg2 withLockup:(id)arg3 ;
-(void)daemonConnectionWasLost:(id)arg0 ;
-(void)dealloc;
-(void)logErrorMessage:(id)arg0 ;


@end


#endif