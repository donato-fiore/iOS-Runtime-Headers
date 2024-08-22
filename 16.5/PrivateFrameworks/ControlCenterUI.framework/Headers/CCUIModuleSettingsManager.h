// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCUIMODULESETTINGSMANAGER_H
#define CCUIMODULESETTINGSMANAGER_H

@class CCSModuleSettingsProvider, NSDictionary, NSHashTable, NSString;
@protocol CCSModuleSettingsProviderObserver;

#import <Foundation/Foundation.h>


@interface CCUIModuleSettingsManager : NSObject <CCSModuleSettingsProviderObserver>

 {
    CCSModuleSettingsProvider *_settingsProvider;
    NSDictionary *_settingsByIdentifier;
    NSHashTable *_observers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)moduleSettingsForModuleIdentifier:(id)arg0 prototypeSize:(struct CCUILayoutSize )arg1 ;
-(id)orderedEnabledModuleIdentifiers;
-(id)sortModuleIdentifiers:(id)arg0 forInterfaceOrientation:(NSInteger)arg1 ;
-(void)_loadSettings;
-(void)_runBlockOnListeners:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)orderedEnabledModuleIdentifiersChangedForSettingsProvider:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif