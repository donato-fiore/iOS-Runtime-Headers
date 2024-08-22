// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRILONGPRESSBUTTONCONFIGURATIONUPDATEMANAGER_H
#define SIRILONGPRESSBUTTONCONFIGURATIONUPDATEMANAGER_H

@class NSUserDefaults, NSMapTable;

#import <Foundation/Foundation.h>


@interface SiriLongPressButtonConfigurationUpdateManager : NSObject {
    NSUserDefaults *_internalUserDefaults;
}


@property (nonatomic) NSInteger currentLongPressBehavior; // ivar: _currentLongPressBehavior
@property (retain, nonatomic) NSMapTable *delegatesBySource; // ivar: _delegatesBySource
@property (nonatomic) BOOL monitoringForUpdates; // ivar: _monitoringForUpdates


-(id)init;
-(id)userDefaults;
-(void)_addDelegate:(id)arg0 forSource:(id)arg1 ;
-(void)_setupKVOMonitoring;
-(void)_stopKVOMonitoring;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)startManagingConfigurationFromSource:(id)arg0 withDelegate:(id)arg1 ;
-(void)stopManagingAllConfigurations;
-(void)stopManagingConfigurationFromSource:(id)arg0 ;


@end


#endif