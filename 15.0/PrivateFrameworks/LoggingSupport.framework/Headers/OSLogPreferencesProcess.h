// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OSLOGPREFERENCESPROCESS_H
#define OSLOGPREFERENCESPROCESS_H

@class NSString, NSDictionary, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface OSLogPreferencesProcess : NSObject {
    NSString *_systemPrefsFile;
    NSDictionary *_systemPrefs;
    NSString *_internalPrefsFile;
    NSDictionary *_internalPrefs;
    NSString *_prefsFile;
    NSMutableDictionary *_prefs;
}


@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) NSInteger effectiveEnabledLevel;
@property (readonly, nonatomic) NSInteger effectivePersistedLevel;
@property (nonatomic) NSInteger enabledLevel;
@property (readonly, nonatomic) BOOL isLocked;
@property (nonatomic) NSInteger persistedLevel;


-(NSInteger)defaultEnabledLevel;
-(NSInteger)defaultPersistedLevel;
-(id)_levelPrefs;
-(id)initWithBundleID:(id)arg0 ;
-(void)reset;


@end


#endif