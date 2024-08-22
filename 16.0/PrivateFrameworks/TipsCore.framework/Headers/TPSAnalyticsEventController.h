// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSANALYTICSEVENTCONTROLLER_H
#define TPSANALYTICSEVENTCONTROLLER_H

@class NSString;
@protocol _TPSXPCExportable, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TPSDuetDataProvider.h"
#import "TPSAnalyticsDataProvider.h"
#import "_TPSXPCConnection.h"

@interface TPSAnalyticsEventController : NSObject <_TPSXPCExportable>

 {
    TPSDuetDataProvider *_duetDataProvider;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *analyticsQueue;
@property (weak, nonatomic) TPSAnalyticsDataProvider *dataProvider; // ivar: _dataProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) _TPSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)sharedInstance;
-(id)duetDataProvider;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)_destroyXPCConnection;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)logAnalyticsEvent:(id)arg0 ;
-(void)logAnalyticsEventFromTipsd:(id)arg0 ;
-(void)logAnalyticsEvents:(id)arg0 ;
-(void)logAnalyticsEventsFromTipsd:(id)arg0 ;
-(void)sendToCoreAnalytics:(id)arg0 eventName:(id)arg1 ;


@end


#endif