// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUCOMFORTSOUNDSSETTINGS_H
#define HUCOMFORTSOUNDSSETTINGS_H

@class HCSettings;


#import "HUComfortSound.h"

@interface HUComfortSoundsSettings : HCSettings

@property (nonatomic) BOOL comfortSoundsEnabled;
@property (nonatomic) BOOL forceMixingBehavior;
@property (nonatomic) CGFloat lastEnablementTimestamp;
@property (nonatomic) CGFloat mediaVolume;
@property (nonatomic) BOOL mixesWithMedia;
@property (nonatomic) CGFloat relativeVolume;
@property (retain, nonatomic) HUComfortSound *selectedComfortSound;
@property (nonatomic) BOOL stopsOnLock;


+(id)sharedInstance;
-(BOOL)comfortSoundsAvailable;
-(BOOL)shouldStoreLocally;
-(id)keysToSync;
-(id)preferenceDomain;
-(id)preferenceKeyForSelector:(SEL)arg0 ;
-(void)logMessage:(id)arg0 ;
-(void)reset;


@end


#endif