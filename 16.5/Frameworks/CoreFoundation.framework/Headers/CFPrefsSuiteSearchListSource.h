// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CFPREFSSUITESEARCHLISTSOURCE_H
#define CFPREFSSUITESEARCHLISTSOURCE_H



#import "CFPrefsSearchListSource.h"

@interface CFPrefsSuiteSearchListSource : CFPrefsSearchListSource



-(void)_notifyObserversOfChangeFromValuesForKeys:(id)arg0 toValuesForKeys:(id)arg1 ;
-(void)deferredNotifyCausedByLoadingOfChangesFromDictionary:(struct __CFDictionary *)arg0 toDictionary:(struct __CFDictionary *)arg1 ;
-(void)deferredNotifyCausedByLocalWriteOfChangesToKey:(struct __CFString *)arg0 fromValue:(*void)arg1 toValue:(*void)arg2 ;
-(void)handleChangeNotificationForDomainIdentifier:(struct __CFString *)arg0 isRemote:(BOOL)arg1 ;


@end


#endif