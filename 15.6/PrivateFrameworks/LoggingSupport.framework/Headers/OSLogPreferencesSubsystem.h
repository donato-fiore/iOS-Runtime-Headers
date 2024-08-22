// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OSLOGPREFERENCESSUBSYSTEM_H
#define OSLOGPREFERENCESSUBSYSTEM_H

@class NSString, NSDictionary, NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface OSLogPreferencesSubsystem : NSObject {
    NSString *_systemPrefsFile;
    NSDictionary *_systemPrefs;
    NSString *_internalPrefsFile;
    NSDictionary *_internalPrefs;
    NSString *_prefsFile;
    NSMutableDictionary *_prefs;
}


@property (readonly, nonatomic) NSArray *categories;
@property (readonly, nonatomic) NSInteger effectiveEnabledLevel;
@property (readonly, nonatomic) NSInteger effectivePersistedLevel;
@property (nonatomic) NSInteger enabledLevel;
@property (readonly, nonatomic) BOOL isLocked;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger persistedLevel;


-(BOOL)_signpostEnabledForCategory:(id)arg0 ;
-(BOOL)_signpostPersistedForCategory:(id)arg0 ;
-(NSInteger)_defaultEnabledLevelForCategory:(id)arg0 ;
-(NSInteger)_defaultPersistedLevelForCategory:(id)arg0 ;
-(NSInteger)_enabledLevelForCategory:(id)arg0 ;
-(NSInteger)_persistedLevelForCategory:(id)arg0 ;
-(NSInteger)defaultEnabledLevel;
-(NSInteger)defaultPersistedLevel;
-(id)_levelPrefsForCategory:(id)arg0 ;
-(id)_prefsForCategory:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(void)_resetCategory:(id)arg0 ;
-(void)_setSignpostEnabled:(BOOL)arg0 forCategory:(id)arg1 ;
-(void)_setSignpostPersisted:(BOOL)arg0 forCategory:(id)arg1 ;
-(void)reset;
-(void)resetAll;


@end


#endif