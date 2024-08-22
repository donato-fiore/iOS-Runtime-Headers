// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CDPEOPLESUGGESTER_H
#define _CDPEOPLESUGGESTER_H

@protocol _CDInteractionAdvising, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_CDCachedPeopleSuggestion.h"
#import "_CDInteractionStoreNotificationReceiver.h"
#import "_CDPeopleSuggesterContext.h"
#import "_CDPeopleSuggesterSettings.h"

@interface _CDPeopleSuggester : NSObject {
    id<_CDInteractionAdvising> *_advisor;
    NSObject<OS_dispatch_queue> *_queue;
    _CDCachedPeopleSuggestion *_cache;
    _CDInteractionStoreNotificationReceiver *_receiver;
    int _settingsNotifyToken;
}


@property CGFloat cacheTimeoutSeconds; // ivar: _cacheTimeoutSeconds
@property (retain) _CDPeopleSuggesterContext *context; // ivar: _context
@property BOOL enableCaching; // ivar: _enableCaching
@property (retain) _CDPeopleSuggesterSettings *settings; // ivar: _settings


+(id)createAdvisorSettingsFromContext:(id)arg0 settings:(id)arg1 ;
+(id)loggingTagForAutocompleteFeedback;
+(id)peopleSuggester;
+(id)peopleSuggesterUsingDaemon;
+(id)peopleSuggesterWithDirectDBAccess;
+(id)restrictedPrefixForPrefix:(id)arg0 ;
-(id)init;
-(id)initWithAdvisor:(id)arg0 ;
-(id)suggestPeopleWithError:(*id)arg0 ;
-(void)dealloc;
-(void)invalidateCache;
-(void)suggestPeopleWithCompletionHandler:(id)arg0 ;
-(void)updateSettings;


@end


#endif