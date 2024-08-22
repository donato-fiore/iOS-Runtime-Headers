// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOXPCACTIVITY_H
#define GEOXPCACTIVITY_H

@class NSString, geo_isolater;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface GEOXPCActivity : NSObject {
    NSString *_name;
    BOOL _isScheduled;
    BOOL _isRepeating;
    BOOL _shouldLaunchDaemon;
    id *_handler;
    NSObject<OS_xpc_object> *_activity;
    NSObject<OS_xpc_object> *_criteria;
    geo_isolater *_isolation;
}


@property (retain, nonatomic) NSObject<OS_xpc_object> *criteria;


+(id)registerActivity:(id)arg0 criteria:(id)arg1 shouldLaunchDaemon:(BOOL)arg2 handler:(id)arg3 ;
+(void)addActivity:(id)arg0 shouldLaunchDaemon:(BOOL)arg1 repeating:(BOOL)arg2 ;
+(void)cancelActivity:(id)arg0 ;
+(void)checkInActivity:(id)arg0 handler:(id)arg1 ;
+(void)clearActivity:(id)arg0 ;
+(void)resetActivities;
+(void)updateActivities:(id)arg0 ;
-(BOOL)shouldDeferActivity;
-(id)initWithName:(id)arg0 criteria:(id)arg1 shouldLaunchDaemon:(BOOL)arg2 handler:(id)arg3 ;
-(void)_handleRunActivity:(id)arg0 ;
-(void)cancelActivity;
-(void)dealloc;
-(void)deferActivity;
-(void)finishActivity;


@end


#endif