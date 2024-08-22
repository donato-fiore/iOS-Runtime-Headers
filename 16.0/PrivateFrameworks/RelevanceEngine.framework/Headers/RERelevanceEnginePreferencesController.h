// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RERELEVANCEENGINEPREFERENCESCONTROLLER_H
#define RERELEVANCEENGINEPREFERENCESCONTROLLER_H

@class NSMapTable, NSString;
@protocol RERelevanceEnginePreferencesDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "RERelevanceEnginePreferences.h"

@interface RERelevanceEnginePreferencesController : NSObject <RERelevanceEnginePreferencesDelegate>

 {
    NSMapTable *_preferences;
    RERelevanceEnginePreferences *_effectivePreferences;
    NSObject<OS_dispatch_queue> *_queue;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) RERelevanceEnginePreferences *effectivePreferences;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithQueue:(id)arg0 ;
-(void)relevanceEnginePreferencesDidUpdate:(id)arg0 ;
-(void)removePreferencesForObject:(id)arg0 ;
-(void)setPreferences:(id)arg0 forObject:(id)arg1 ;


@end


#endif