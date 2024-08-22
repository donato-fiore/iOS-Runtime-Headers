// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOREQUESTCOUNTPOWERLOGGER_H
#define GEOREQUESTCOUNTPOWERLOGGER_H

@class geo_isolater, NSDate, NSMutableDictionary;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "GEOXPCActivity.h"

@interface GEORequestCountPowerLogger : NSObject {
    geo_isolater *_isolater;
    atomic_flag _didRead;
    NSDate *_startDate;
    NSMutableDictionary *_clientInfo;
    BOOL _isDirty;
    NSObject<OS_dispatch_source> *_writeTimer;
    GEOXPCActivity *_activity;
}




+(id)sharedInstance;
+(void)registerXPCActivity;
-(id)init;
-(void)_terminationRequested:(id)arg0 ;
-(void)dealloc;
-(void)incrementCountForClient:(id)arg0 requestType:(int)arg1 ;


@end


#endif