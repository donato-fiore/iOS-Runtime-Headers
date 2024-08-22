// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXSDSETTINGS_H
#define AXSDSETTINGS_H

@class HCSettings, NSArray, NSData, NSMutableDictionary, NSString;



@interface AXSDSettings : HCSettings

@property (readonly, nonatomic) NSArray *enabledKShotDetectorIdentifiers;
@property (retain, nonatomic) NSArray *enabledSoundDetectionTypes;
@property (nonatomic) BOOL isActivelyTrainingAKShotModel;
@property (readonly, nonatomic) NSData *kShotDetectors;
@property (nonatomic) BOOL kShotShouldSaveCurrentSound;
@property (readonly, nonatomic) NSMutableDictionary *kShotSoundRecordings;
@property (nonatomic) BOOL micDisabled;
@property (readonly, nonatomic) NSString *pipedInFile;
@property (readonly, nonatomic) BOOL soundDetectionEnabled;
@property (nonatomic) NSInteger soundDetectionKShotListeningState;
@property (retain, nonatomic) NSMutableDictionary *soundDetectionSnoozeDictionary;
@property (nonatomic) NSInteger soundDetectionState;
@property (readonly, nonatomic) NSArray *supportedSoundDetectionTypes;
@property (nonatomic) BOOL ultronIsRunning;
@property (nonatomic) BOOL ultronSupportEnabled;


+(id)sharedInstance;
+(id)stringForSoundDetectionState:(NSInteger)arg0 ;
+(void)initialize;
-(BOOL)hasCustomHapticForDetector:(id)arg0 ;
-(BOOL)hasCustomToneForDetector:(id)arg0 ;
-(BOOL)shouldStoreLocally;
-(id)keysToSync;
-(id)localizedNameForSoundDetectionType:(id)arg0 ;
-(id)preferenceDomainForPreferenceKey:(id)arg0 ;
-(id)preferenceKeyForSelector:(SEL)arg0 ;
-(id)sortedSupportedSoundDetectionTypes;
-(id)soundAlertTopicForSoundDetectionType:(id)arg0 ;
-(void)addSnoozeDateToSnoozeDictionary:(id)arg0 forKey:(id)arg1 ;
-(void)addSoundDetectionType:(id)arg0 ;
-(void)logMessage:(id)arg0 ;
-(void)pipeFile:(id)arg0 ;
-(void)removeAllSoundDetectionTypes;
-(void)removeSoundDetectionType:(id)arg0 ;


@end


#endif