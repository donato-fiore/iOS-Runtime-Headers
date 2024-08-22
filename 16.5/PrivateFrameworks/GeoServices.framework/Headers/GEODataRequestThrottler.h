// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEODATAREQUESTTHROTTLER_H
#define GEODATAREQUESTTHROTTLER_H

@class geo_isolater, NSDictionary, NSMutableDictionary, NSString;
@protocol GEOConfigChangeListenerDelegate, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface GEODataRequestThrottler : NSObject <GEOConfigChangeListenerDelegate>

 {
    geo_isolater *_isolation;
    NSDictionary *_defaultThrottlePolicy;
    NSDictionary *_globalThrottlePolicy;
    BOOL _throttlePoliciesCached;
    NSMutableDictionary *_throttlers;
    NSObject<OS_dispatch_source> *_updateStateTimer;
    int _defaultChangedNotification;
    id *_networkChangedNotification;
    unsigned char _throttleEventLogLevel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedThrottler;
-(BOOL)allowRequest:(struct ? )arg0 forClient:(id)arg1 throttlerToken:(*id)arg2 error:(*id)arg3 ;
-(id)_init;
-(id)init;
-(id)throttlerForKeyPath:(id)arg0 ;
-(void)_pruneThrottlers;
-(void)_reset;
-(void)_updateSavedState:(id)arg0 ;
-(void)_withThrottlersForKey:(struct GEOThrottleKey )arg0 auditToken:(id)arg1 do:(id)arg2 ;
-(void)dealloc;
-(void)getInfoForRequest:(struct ? )arg0 client:(id)arg1 timeUntilNextReset:(*CGFloat)arg2 availableRequestCount:(*unsigned int)arg3 ;
-(void)pruneThrottlers;
-(void)reset;
-(void)valueChangedForGEOConfigKey:(struct ? )arg0 ;


@end


#endif