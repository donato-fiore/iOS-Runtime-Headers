// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CFPREFSCLOUDSOURCE_H
#define CFPREFSCLOUDSOURCE_H



#import "CFPrefsPlistSource.h"

@interface CFPrefsCloudSource : CFPrefsPlistSource {
    char * _configPath;
    char * _storeName;
    BOOL _enabled;
}




-(BOOL)enabled;
-(id)createSynchronizeMessage;
-(id)initWithDomain:(struct __CFString *)arg0 user:(struct __CFString *)arg1 byHost:(BOOL)arg2 containerPath:(struct __CFString *)arg3 containingPreferences:(id)arg4 ;
-(int)alreadylocked_updateObservingRemoteChanges;
-(void)dealloc;
-(void)fullCloudSynchronizeWithCompletionHandler:(id)arg0 ;
-(void)mergeIntoDictionary:(struct __CFDictionary *)arg0 sourceDictionary:(struct __CFDictionary *)arg1 cloudKeyEvaluator:(id)arg2 ;
-(void)setConfigurationPath:(struct __CFString *)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setStoreName:(struct __CFString *)arg0 ;


@end


#endif