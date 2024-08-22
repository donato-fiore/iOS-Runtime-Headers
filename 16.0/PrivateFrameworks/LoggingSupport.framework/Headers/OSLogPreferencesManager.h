// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OSLOGPREFERENCESMANAGER_H
#define OSLOGPREFERENCESMANAGER_H

@class NSString, NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface OSLogPreferencesManager : NSObject {
    NSString *_name;
    NSString *_prefsFile;
    NSMutableDictionary *_prefs;
}


@property (nonatomic) NSInteger enabledLevel;
@property (nonatomic) NSInteger persistedLevel;
@property (readonly, nonatomic) NSArray *processes;
@property (readonly, nonatomic) NSArray *subsystems;


+(id)sharedManager;
-(id)_levelPrefs;
-(id)init;
-(void)reset;
-(void)resetAll;
-(void)resetAllProcesses;
-(void)resetAllSubsystems;


@end


#endif