// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUICAPPLICATIONSTATEHELPER_H
#define SUICAPPLICATIONSTATEHELPER_H

@class BKSApplicationStateMonitor, FBSDisplayLayoutMonitor, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SUICApplicationStateHelper : NSObject {
    BKSApplicationStateMonitor *_appStateMonitor;
    FBSDisplayLayoutMonitor *_displayLayoutMonitor;
    FBSDisplayLayoutMonitor *_carplayDisplayLayoutMonitor;
    NSMutableDictionary *_foregroundAppInfos;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)_foregroundAppInfosFor:(NSInteger)arg0 ;
-(id)foregroundAppInfos;
-(id)foregroundAppInfosForCarPlay;
-(id)init;
-(void)_appInfoDictionariesForDisplayLayout:(id)arg0 completion:(id)arg1 ;
-(void)_handleApplicationStateUpdate:(id)arg0 ;
-(void)_updateForAppInfoDictionaries:(id)arg0 ;
-(void)_updateForAppInfoDictionaries:(id)arg0 displayType:(id)arg1 ;
-(void)dealloc;


@end


#endif