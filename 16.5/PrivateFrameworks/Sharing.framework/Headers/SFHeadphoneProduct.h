// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFHEADPHONEPRODUCT_H
#define SFHEADPHONEPRODUCT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SFHeadphoneProduct : NSObject

@property (copy, nonatomic) NSString *bluetoothModel; // ivar: _bluetoothModel
@property (nonatomic) NSUInteger buttonLocation; // ivar: _buttonLocation
@property (nonatomic) BOOL hasAddressInAdvertisement; // ivar: _hasAddressInAdvertisement
@property (nonatomic) BOOL hasLid; // ivar: _hasLid
@property (nonatomic) BOOL hasSplitBattery; // ivar: _hasSplitBattery
@property (nonatomic) BOOL hasSplitCaseColors; // ivar: _hasSplitCaseColors
@property (nonatomic) BOOL hasW1Chip; // ivar: _hasW1Chip
@property (nonatomic) BOOL ignoresBatteryStatusIfCounterfeit; // ivar: _ignoresBatteryStatusIfCounterfeit
@property (nonatomic) BOOL isAirPods; // ivar: _isAirPods
@property (nonatomic) NSUInteger model; // ivar: _model
@property (nonatomic) unsigned int productID; // ivar: _productID
@property (nonatomic) BOOL showsStatus; // ivar: _showsStatus
@property (nonatomic) BOOL showsStatusOutOfCase; // ivar: _showsStatusOutOfCase
@property (nonatomic) BOOL supportsCounterfeitDetection; // ivar: _supportsCounterfeitDetection
@property (nonatomic) BOOL supportsDigitalEngraving; // ivar: _supportsDigitalEngraving
@property (nonatomic) BOOL supportsEndCallProx; // ivar: _supportsEndCallProx
@property (nonatomic) BOOL supportsFindMyNetwork; // ivar: _supportsFindMyNetwork
@property (nonatomic) BOOL supportsMobileAsset; // ivar: _supportsMobileAsset
@property (nonatomic) BOOL supportsOptimizedBatteryCharging; // ivar: _supportsOptimizedBatteryCharging
@property (nonatomic) BOOL supportsRepair; // ivar: _supportsRepair
@property (nonatomic) BOOL supportsSiri; // ivar: _supportsSiri
@property (nonatomic) BOOL supportsSpatialAudio; // ivar: _supportsSpatialAudio
@property (nonatomic) BOOL supportsWirelessSplitterInEar; // ivar: _supportsWirelessSplitterInEar
@property (nonatomic) BOOL usesProductCaseName; // ivar: _usesProductCaseName


+(id)airPods;
+(id)airPodsMax;
+(id)airPodsPro;
+(id)airPodsSecondGeneration;
+(id)b453;
+(id)b494;
+(id)b507;
+(id)b607;
+(id)b688;
+(id)b698;
+(id)beatsFlex;
+(id)beatsSolo;
+(id)beatsSoloPro;
+(id)beatsStudio;
+(id)beatsX;
+(id)powerBeats3;
+(id)powerBeats4;
+(id)powerBeatsPro;
-(id)initWithBluetoothModel:(id)arg0 ;
-(id)initWithModel:(NSUInteger)arg0 ;
-(id)initWithProductID:(unsigned int)arg0 ;
-(id)initWithProductID:(unsigned int)arg0 supportsMobileAsset:(BOOL)arg1 ;


@end


#endif