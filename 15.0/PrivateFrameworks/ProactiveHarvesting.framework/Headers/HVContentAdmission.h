// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HVCONTENTADMISSION_H
#define HVCONTENTADMISSION_H

@class _PASLock, NSUserDefaults;

#import <Foundation/Foundation.h>

#import "HVContentAdmissionKVOObserver.h"

@interface HVContentAdmission : NSObject {
    _PASLock *_lock;
    NSUserDefaults *_defaults;
    HVContentAdmissionKVOObserver *_kvoObserver;
    HVContentAdmissionKVOObserver *_pastEventsObserver;
}




+(BOOL)isSupportedSearchableItemBundleIdentifier:(id)arg0 ;
+(BOOL)shouldAdmitContentFromBundleIdentifier:(id)arg0 ;
+(BOOL)suggestionsShouldShowPastEvents;
+(void)addContentAdmissionObserver:(id)arg0 ;
+(void)clearTestSettings;
+(void)disableBundleIdentifier:(id)arg0 ;
+(void)initialize;
+(void)migrateForTests;
+(void)registerConfigurationAsset:(id)arg0 ;
+(void)updateConfigurableBundleIdentifierDenyList:(id)arg0 ;
-(id)init;


@end


#endif