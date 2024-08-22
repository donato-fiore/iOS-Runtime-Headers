// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTMODULE_H
#define PTMODULE_H

@class NSHashTable, NSArray, NSPredicate, NSString;
@protocol PTSettingsKeyPathObserver, PTComponentObserver, PTModuleComponent;

#import <Foundation/Foundation.h>

#import "PTSettings.h"

@interface PTModule : NSObject <PTSettingsKeyPathObserver, PTComponentObserver, PTModuleComponent>

 {
    NSHashTable *_observers;
    NSArray *_components;
}


@property (readonly, nonatomic) NSArray *allSections; // ivar: _allSections
@property (retain, nonatomic) NSPredicate *appearancePredicate; // ivar: _appearancePredicate
@property (retain, nonatomic) NSString *childSettingsKeyPath; // ivar: _childSettingsKeyPath
@property (weak, nonatomic) NSObject<PTComponentObserver> *componentObserver; // ivar: _componentObserver
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *enabledSections; // ivar: _enabledSections
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PTSettings *settings; // ivar: _settings
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)moduleWithSettings:(id)arg0 ;
+(id)moduleWithTitle:(id)arg0 contents:(id)arg1 ;
+(id)sectionWithRows:(id)arg0 ;
+(id)sectionWithRows:(id)arg0 title:(id)arg1 ;
+(id)sectionWithRows:(id)arg0 title:(id)arg1 condition:(id)arg2 ;
+(id)sectionWithRows:(id)arg0 title:(id)arg1 conditionFormat:(id)arg2 ;
+(id)submoduleWithModule:(id)arg0 ;
+(id)submoduleWithModule:(id)arg0 childSettingsKeyPath:(id)arg1 ;
+(id)submoduleWithModule:(id)arg0 childSettingsKeyPath:(id)arg1 condition:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)numberOfSections;
-(id)_computeEnabledSections;
-(id)_remoteEditingWhitelistedComponent;
-(id)_remoteEditingWhitelistedModule;
-(id)_settingsForComponent:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)indexPathForRow:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContents:(id)arg0 ;
-(id)rowAtIndexPath:(id)arg0 ;
-(id)sectionAtIndex:(NSUInteger)arg0 ;
-(void)_reportSectionInsertsAndDeletesRelativeTo:(id)arg0 ;
-(void)_updateEnabledSections;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)enabledSectionsDidChange:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)section:(id)arg0 didInsertRows:(id)arg1 deleteRows:(id)arg2 ;
-(void)sectionDidReload:(id)arg0 ;
-(void)settings:(id)arg0 changedValueForKeyPath:(id)arg1 ;


@end


#endif