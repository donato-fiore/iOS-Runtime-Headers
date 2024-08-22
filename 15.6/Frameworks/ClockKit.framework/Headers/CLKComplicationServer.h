// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLKCOMPLICATIONSERVER_H
#define CLKCOMPLICATIONSERVER_H

@class NSString, NSXPCConnection, NSSet, NSArray, NSDate;
@protocol CLKComplicationClient, CLKComplicationDataSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CLKComplicationServer : NSObject <CLKComplicationClient>

 {
    NSString *_clientIdentifier;
    Class _dataSourceClass;
    NSXPCConnection *_serverConnection;
    id<CLKComplicationDataSource> *_dataSource;
    NSSet *_activeComplications;
    os_unfair_lock_s _connectionLock;
    int _restartNotificationToken;
    ? _dataSourceFlags;
    NSObject<OS_dispatch_queue> *_templateFinalizationQueue;
}


@property (readonly, nonatomic) NSArray *activeComplications;
@property (readonly, nonatomic) NSDate *earliestTimeTravelDate;
@property (readonly, nonatomic) NSDate *latestTimeTravelDate;


+(id)sharedInstance;
-(BOOL)_shouldAllowComplication:(id)arg0 ;
-(id)_init;
-(id)init;
-(id)initWithClientIdentifier:(id)arg0 ;
-(id)serverProxy;
-(void)_checkinWithServer;
-(void)_complicationServiceDidStart;
-(void)_createConnection;
-(void)_createDataSourceIfNecessary;
-(void)dealloc;
-(void)extendTimelineForComplication:(id)arg0 ;
-(void)getAlwaysOnTemplateForComplication:(id)arg0 withHandler:(id)arg1 ;
-(void)getComplicationDescriptorsWithHandler:(id)arg0 ;
-(void)getCurrentTimelineEntryForComplication:(id)arg0 withHandler:(id)arg1 ;
-(void)getLocalizableSampleTemplateForComplication:(id)arg0 withHandler:(id)arg1 ;
-(void)getNextRequestedUpdateDateWithHandler:(id)arg0 ;
-(void)getPlaceholderTemplateForComplication:(id)arg0 withHandler:(id)arg1 ;
-(void)getPrivacyBehaviorForComplication:(id)arg0 withHandler:(id)arg1 ;
-(void)getSupportedTimeTravelDirectionsForComplication:(id)arg0 withHandler:(id)arg1 ;
-(void)getTimelineAnimationBehaviorForComplication:(id)arg0 withHandler:(id)arg1 ;
-(void)getTimelineEndDateForComplication:(id)arg0 withHandler:(id)arg1 ;
-(void)getTimelineEntriesForComplication:(id)arg0 afterDate:(id)arg1 limit:(NSUInteger)arg2 withHandler:(id)arg3 ;
-(void)handleSharedComplicationDescriptors:(id)arg0 ;
-(void)notifyDebugTimeoutWithCharging:(BOOL)arg0 ;
-(void)reloadComplicationDescriptors;
-(void)reloadTimelineForComplication:(id)arg0 ;
-(void)requestedUpdateBudgetExhausted;
-(void)requestedUpdateDidBegin;


@end


#endif