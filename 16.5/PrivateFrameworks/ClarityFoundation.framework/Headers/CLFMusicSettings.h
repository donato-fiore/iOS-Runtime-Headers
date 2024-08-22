// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLFMUSICSETTINGS_H
#define CLFMUSICSETTINGS_H

@class NSArray;


#import "CLFBaseSettings.h"

@interface CLFMusicSettings : CLFBaseSettings

@property (retain, nonatomic) NSArray *selectedPlaylists;


+(id)allPreferenceSelectorsAsStrings;
+(id)domainName;
+(id)sharedInstance;
-(id)init;


@end


#endif