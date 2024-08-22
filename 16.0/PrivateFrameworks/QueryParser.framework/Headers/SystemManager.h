// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SYSTEMMANAGER_H
#define SYSTEMMANAGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SystemManager : NSObject {
    int _newNotifyToken;
    int _updatedNotifyToken;
    BOOL _locked_hasUpdatedResources;
    BOOL _locked_hasUpdatedLocale;
    *__CFLocale _locked_currentLocale;
    *__CFArray _locked_currentPreferredLanguages;
    NSMutableDictionary *_locked_requiredAssets;
    NSMutableDictionary *_locked_optionalAssets;
    NSObject<OS_dispatch_queue> *_assetsQueue;
    NSObject<OS_dispatch_queue> *_resourcesQueue;
    NSObject<OS_dispatch_queue> *_localeQueue;
}




+(id)defaultManager;
-(BOOL)hasResourcesForLocale:(id)arg0 contentType:(id)arg1 contentName:(id)arg2 resourceType:(unsigned int)arg3 ;
-(BOOL)hasUpdatedLocale;
-(BOOL)hasUpdatedResources;
-(id)init;
-(struct __CFArray *)copyCurrentPreferredLanguages;
-(struct __CFLocale *)copyCurrentLocale;
-(void)_updateLocale;
-(void)dealloc;
-(void)enumerateResourcesForLocale:(id)arg0 contentType:(id)arg1 contentName:(id)arg2 isUpdate:(BOOL)arg3 usingBlock:(id)arg4 ;
-(void)lockedUpdateAssets;
-(void)updateAssetsForLocale:(id)arg0 contentType:(id)arg1 contentName:(id)arg2 resourceType:(unsigned int)arg3 ;


@end


#endif