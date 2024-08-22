// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSGPROACTIVETRIGGERHANDLER_H
#define PSGPROACTIVETRIGGERHANDLER_H

@class PPQuickTypeBroker;

#import <Foundation/Foundation.h>

#import "PSGStructuredInfoSuggestionCache.h"
#import "PSGProactiveTrigger.h"

@interface PSGProactiveTriggerHandler : NSObject {
    PPQuickTypeBroker *_broker;
    PSGStructuredInfoSuggestionCache *_cache;
    PSGProactiveTrigger *_lastTrigger;
}




+(id)sharedInstance;
-(BOOL)_handleOperationalTrigger:(id)arg0 localeIdentifier:(id)arg1 bundleIdentifier:(id)arg2 recipientNames:(id)arg3 availableApps:(id)arg4 limit:(NSUInteger)arg5 explanationSet:(id)arg6 results:(id)arg7 ;
-(id)_handlePortraitTrigger:(id)arg0 localeIdentifier:(id)arg1 bundleIdentifier:(id)arg2 recipients:(id)arg3 limit:(NSUInteger)arg4 timeoutSeconds:(CGFloat)arg5 explanationSet:(id)arg6 results:(id)arg7 ;
-(id)handleTrigger:(id)arg0 localeIdentifier:(id)arg1 bundleIdentifier:(id)arg2 recipients:(id)arg3 recipientNames:(id)arg4 availableApps:(id)arg5 timeoutSeconds:(CGFloat)arg6 fetchLimit:(NSUInteger)arg7 maxSuggestions:(NSUInteger)arg8 explanationSet:(id)arg9 error:(*id)arg10 ;
-(id)initWithBroker:(id)arg0 cache:(id)arg1 ;


@end


#endif