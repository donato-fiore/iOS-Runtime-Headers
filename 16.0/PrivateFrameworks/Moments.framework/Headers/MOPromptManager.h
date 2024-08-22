// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MOPROMPTMANAGER_H
#define MOPROMPTMANAGER_H

@class NSXPCConnection;
@protocol MOPromptManagerXPCProtocol;

#import <Foundation/Foundation.h>


@interface MOPromptManager : NSObject {
    NSXPCConnection *connection;
    id<MOPromptManagerXPCProtocol> *proxy;
}




+(id)defaultManager;
-(BOOL)analyzeTrendsInEvents:(id)arg0 handler:(id)arg1 ;
-(BOOL)bundleEvents;
-(BOOL)bundleEventsWithHandler:(id)arg0 ;
-(BOOL)clearEvents;
-(BOOL)clearEventsWithHandler:(id)arg0 ;
-(BOOL)collectEvents;
-(BOOL)collectEventsWithHandler:(id)arg0 ;
-(BOOL)fetchEventBundlesWithOptions:(id)arg0 handler:(id)arg1 ;
-(BOOL)fetchEventsWithOptions:(id)arg0 handler:(id)arg1 ;
-(BOOL)purgeEvents;
-(BOOL)purgeEventsWithHandler:(id)arg0 ;
-(BOOL)runAnalytics;
-(BOOL)runAnalyticsWithHandler:(id)arg0 ;
-(BOOL)storeEvents:(id)arg0 handler:(id)arg1 ;
-(id)context;
-(id)init;


@end


#endif