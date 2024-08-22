// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCBITRATEARBITER_H
#define VCBITRATEARBITER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface VCBitrateArbiter : NSObject {
    unsigned int _maxAllowedScreenShareBitrate2G;
    unsigned int _maxAllowedScreenShareBitrate3G;
    unsigned int _maxAllowedScreenShareBitrateLTE;
    unsigned int _maxAllowedScreenShareBitrateWifi;
    unsigned int _maxAllowedAudioOnlyBitrate2G;
    unsigned int _maxAllowedAudioOnlyBitrate3G;
    unsigned int _maxAllowedAudioOnlyBitrateLTE;
    unsigned int _maxAllowedAudioOnlyBitrateWifi;
    unsigned int _maxiBitrateIPadCompanionP2P;
    unsigned int _maxAllowedBitrateIPadCompanionUSB;
    NSMutableArray *supportedBitrateRules;
}


@property (readonly) unsigned int maxAllowedBitrate; // ivar: _maxAllowedBitrate
@property (readonly) unsigned int maxAllowedBitrate2G; // ivar: _maxAllowedBitrate2G
@property (readonly) unsigned int maxAllowedBitrate3G; // ivar: _maxAllowedBitrate3G
@property (readonly) unsigned int maxAllowedBitrateHighRat; // ivar: _maxAllowedBitrateHighRat
@property (readonly) unsigned int maxAllowedBitrateLTE; // ivar: _maxAllowedBitrateLTE
@property (readonly) unsigned int maxAllowedBitrateP2P; // ivar: _maxAllowedBitrateP2P
@property (readonly) unsigned int maxAllowedBitrateTCPRelay; // ivar: _maxAllowedBitrateTCPRelay
@property (readonly) unsigned int maxAllowedBitrateUSB; // ivar: _maxAllowedBitrateUSB
@property (readonly) unsigned int maxAllowedBitrateWifi; // ivar: _maxAllowedBitrateWifi


+(void)updateMaxAllowedBitratePerConnection:(*unsigned int)arg0 connectionType:(int)arg1 negotiatedSettings:(id)arg2 ;
-(id)initWithDeviceRole:(int)arg0 callLogFile:(*void)arg1 ;
-(id)maxAllowedBitrateRuleForConnection:(int)arg0 ;
-(int)storeBagBitrateForKey:(id)arg0 ;
-(unsigned int)maxAllowedAudioOnlyBitrateForConnection:(int)arg0 ;
-(unsigned int)maxAllowedBitrateForConnectionType:(int)arg0 ;
-(unsigned int)maxAllowedBitrateForConnectionType:(int)arg0 operatingMode:(int)arg1 ;
-(unsigned int)maxAllowedBitrateForVCConnection:(id)arg0 forLocalInterface:(BOOL)arg1 ;
-(unsigned int)maxAllowedBitrateForVCConnection:(id)arg0 forLocalInterface:(BOOL)arg1 encodeRule:(id)arg2 ;
-(unsigned int)maxAllowedBitrateForVCConnection:(id)arg0 forLocalInterface:(BOOL)arg1 operatingMode:(int)arg2 encodeRule:(id)arg3 ;
-(unsigned int)maxAllowedCellularBitrate;
-(unsigned int)maxAllowedScreenShareBitrateForConnection:(int)arg0 ;
-(unsigned int)maxAllowedScreenShareCellularBitrate;
-(void)addRuleForBitrate:(unsigned int)arg0 connectionType:(int)arg1 limitingRule:(id)arg2 ;
-(void)createSupportedBitrateRuleSets;
-(void)dealloc;
-(void)readCarrierBundleValues;
-(void)readHardwareValues;
-(void)readStoreBagValues:(*void)arg0 ;
-(void)updateMaxAllowedBitrate:(*unsigned int)arg0 key:(struct __CFString *)arg1 type:(id)arg2 isAudio:(BOOL)arg3 carrierBundleBitrates:(struct __CFDictionary *)arg4 ;
-(void)updateNegotiatedSettings:(id)arg0 ;


@end


#endif