// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CFPREFSSEARCHLISTSOURCE_H
#define CFPREFSSEARCHLISTSOURCE_H



#import "CFPrefsSource.h"
#import "CFPrefsPlistSource.h"
#import "CFPrefsCloudSource.h"

@interface CFPrefsSearchListSource : CFPrefsSource {
    *__CFDictionary _keysToSources;
    *__CFString _identifier;
    *__CFArray _sourceList;
    *__CFSet _cloudKeys;
    *__CFArray _cloudPrefixKeys;
    CFPrefsPlistSource *_standardSetTarget;
    CFPrefsCloudSource *_cloudSetTarget;
    BOOL initialized;
}




-(*void)alreadylocked_copyValueForKey:(struct __CFString *)arg0 ;
-(?)alreadylocked_setPrecopiedValues:(?)arg0 forKeys:(?)arg1 countfrom;
-(BOOL)isDirectModeEnabled;
-(BOOL)synchronize;
-(NSInteger)generationCount;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createRequestNewContentMessageForDaemon:(int)arg0 ;
-(id)description;
-(id)initWithIdentifier:(struct __CFString *)arg0 containingPreferences:(id)arg1 ;
-(struct __CFArray *)alreadylocked_copyKeyList;
-(struct __CFDictionary *)alreadylocked_copyDictionary;
-(struct __CFString *)copyOSLogDescription;
-(struct __CFString *)domainIdentifier;
-(void)dealloc;
-(void)deferredNotifyCausedByLoadingOfChangesFromDictionary:(struct __CFDictionary *)arg0 toDictionary:(struct __CFDictionary *)arg1 ;
-(void)deferredNotifyCausedByLocalWriteOfChangesToKey:(struct __CFString *)arg0 fromValue:(*void)arg1 toValue:(*void)arg2 ;
-(void)fullCloudSynchronizeWithCompletionHandler:(id)arg0 ;
-(void)handleChangeNotificationForDomainIdentifier:(struct __CFString *)arg0 isRemote:(BOOL)arg1 ;
-(void)handleReply:(id)arg0 toRequestNewDataMessage:(id)arg1 onConnection:(id)arg2 retryCount:(int)arg3 error:(*BOOL)arg4 ;
-(void)lock;
-(void)transitionIntoDirectModeIfNeededWithRetryBlock:(id)arg0 ;
-(void)unlock;


@end


#endif