// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCAUDIOTIERPICKER_H
#define VCAUDIOTIERPICKER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "VCAudioTier.h"
#import "BitrateLimits.h"

@interface VCAudioTierPicker : NSObject {
    NSMutableDictionary *_tierTablesForRedNumPayloads;
    VCAudioTier *_fallbackTier;
    BitrateLimits *_bitrateLimits;
}


@property ? config; // ivar: _config
@property (readonly) VCAudioTier *defaultTier; // ivar: _defaultTier


+(BOOL)arrayHasObject:(id)arg0 withPayloadType:(int)arg1 ;
+(BOOL)shouldFilterTierForPayloadConfig:(id)arg0 bitRate:(unsigned int)arg1 packetsPerBundle:(unsigned int)arg2 mode:(int)arg3 redNumPayloads:(unsigned int)arg4 cellular:(BOOL)arg5 ;
+(id)allPossibleCombinations:(id)arg0 supportedPacketsPerBundle:(id)arg1 redNumPayloads:(unsigned int)arg2 headerSize:(unsigned int)arg3 tierPickerMode:(int)arg4 usingCellular:(BOOL)arg5 useCaseWatchContinuity:(BOOL)arg6 ;
+(id)selectHighestQualityAudioTiers:(id)arg0 forBitrateLimits:(id)arg1 isHardLimit:(BOOL)arg2 ;
+(id)valueForNetworkBitrate:(id)arg0 networkBitrate:(unsigned int)arg1 ;
+(int)operatingModeToTierPickerMode:(int)arg0 ;
+(int)tierPickerModeToAVConferenceOperatingMode:(int)arg0 ;
-(BOOL)reconfigureTierPicker:(struct ? )arg0 ;
-(BOOL)setupTierPickerForConfig:(struct ? )arg0 ;
-(id)allAudioTiers;
-(id)chooseMultiwayAudioTierForRedPayload:(NSUInteger)arg0 ;
-(id)configToString:(struct ? )arg0 ;
-(id)initWithConfig:(struct ? )arg0 ;
-(id)tierForAudioBitrate:(NSUInteger)arg0 withRedNumPayloads:(NSUInteger)arg1 ;
-(id)tierForNetworkBitrate:(NSUInteger)arg0 withLegacyDuplication:(int)arg1 ;
-(id)tierForNetworkBitrate:(NSUInteger)arg0 withRedNumPayloads:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)logTierPickerConfig:(struct ? )arg0 ;
-(void)printCreatedAudioTiers:(id)arg0 ;
-(void)setupAlwaysOnRedTiersForSupportedRed:(id)arg0 usingCellular:(BOOL)arg1 ;


@end


#endif