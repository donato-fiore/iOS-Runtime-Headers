// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRMEDIASUGGESTIONPREFERENCES_H
#define MRMEDIASUGGESTIONPREFERENCES_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MRMediaSuggestionPreferences : NSObject {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_globalDisplayPreferencesForContexts;
    NSMutableDictionary *_disabledBundlesForContexts;
}


@property (copy, nonatomic) id *userDisplayPreferencesDidChangeCallback; // ivar: _userDisplayPreferencesDidChangeCallback


+(id)allContexts;
-(BOOL)suggestionsDisabledInContext:(id)arg0 ;
-(id)description;
-(id)disabledBundleIdentifiersInContext:(id)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif