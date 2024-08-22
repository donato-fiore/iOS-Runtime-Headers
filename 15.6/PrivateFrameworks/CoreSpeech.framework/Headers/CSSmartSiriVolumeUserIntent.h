// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSSMARTSIRIVOLUMEUSERINTENT_H
#define CSSMARTSIRIVOLUMEUSERINTENT_H


#import <Foundation/Foundation.h>


@interface CSSmartSiriVolumeUserIntent : NSObject {
    NSUInteger kSSVCAUserIntentValidForSeconds;
    float kSSVCAUserIntentVolumeIncreaseFactor;
    float kSSVCAUserIntentVolumeDecreaseFactor;
    float kSSVCAUserIntentPermanentOffsetFactorDelta;
    float kSSVCAUserIntentPermanentOffsetFactorLowerBound;
    float kSSVCAUserIntentPermanentOffsetFactorUpperBound;
    float kSSVCA_DEVICE_SIMPLE_MIN_TTS_VOLUME;
    float kSSVCA_DEVICE_SIMPLE_MAX_TTS_VOLUME;
    float kSSVCA_DEVICE_DEFAULT_MIN_TTS_VOLUME;
    float kSSVCA_DEVICE_DEFAULT_MAX_TTS_VOLUME;
}


@property (nonatomic) float latestVolume; // ivar: _latestVolume
@property (nonatomic) NSUInteger latestVolumeTime; // ivar: _latestVolumeTime
@property (nonatomic) float permanentOffsetFactor; // ivar: _permanentOffsetFactor
@property (nonatomic) BOOL permanentOffsetIsEnabled; // ivar: _permanentOffsetIsEnabled
@property (nonatomic) NSUInteger userIntentTime; // ivar: _userIntentTime
@property (nonatomic) NSUInteger userIntentType; // ivar: _userIntentType
@property (nonatomic) NSUInteger userIntentValidForSeconds; // ivar: _userIntentValidForSeconds
@property (nonatomic) float userIntentVolume; // ivar: _userIntentVolume


-(CGFloat)applyLowerAndUpperBoundsToVolume:(float)arg0 ;
-(CGFloat)applyLowerAndUpperBoundsToVolumeOffset:(float)arg0 ;
-(float)decreaseSiriVolumeBasedOnUserIntent;
-(float)increaseSiriVolumeBasedOnUserIntent;
-(void)initWithStoredInformationAndAsset:(id)arg0 ;
-(void)storeASVStateInformation;


@end


#endif