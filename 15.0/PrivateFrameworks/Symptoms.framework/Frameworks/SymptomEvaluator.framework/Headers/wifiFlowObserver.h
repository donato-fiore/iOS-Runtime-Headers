// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WIFIFLOWOBSERVER_H
#define WIFIFLOWOBSERVER_H

@class NSDate, NSString;
@protocol flowDispositionObserver;

#import <Foundation/Foundation.h>

#import "ManagedEventHandler.h"

@interface wifiFlowObserver : NSObject <flowDispositionObserver>

 {
    wifiPropertyCounts _foregroundCounts;
    wifiPropertyCounts _backgroundCounts;
    unsigned int _dampeningMsecs;
    NSDate *_lastReportTimestamp;
    BOOL _dampening;
    unsigned int _seqno;
    ManagedEventHandler *_managedEventHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (nonatomic) BOOL foreground; // ivar: _foreground
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)addClassification:(id)arg0 context:(struct wifiPropertyCounts *)arg1 ;
-(BOOL)removeClassification:(id)arg0 context:(struct wifiPropertyCounts *)arg1 ;
-(id)infoDir;
-(id)init;
-(unsigned int)noteFlow:(id)arg0 snapshot:(id)arg1 present:(BOOL)arg2 trackedBy:(id)arg3 ;
-(void)_noteNewUsage;
-(void)configurePolicies:(id)arg0 ;
-(void)noteForegroundState:(BOOL)arg0 forApp:(id)arg1 hasForegroundApps:(BOOL)arg2 ;


@end


#endif