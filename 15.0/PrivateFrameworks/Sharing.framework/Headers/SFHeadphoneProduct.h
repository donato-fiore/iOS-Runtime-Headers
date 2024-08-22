// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFHEADPHONEPRODUCT_H
#define SFHEADPHONEPRODUCT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SFHeadphoneProduct : NSObject

@property (copy, nonatomic) NSString *bluetoothModel; // ivar: _bluetoothModel
@property (nonatomic) NSUInteger buttonLocation; // ivar: _buttonLocation
@property (nonatomic) BOOL hasLid; // ivar: _hasLid
@property (nonatomic) BOOL hasSplitBattery; // ivar: _hasSplitBattery
@property (nonatomic) BOOL hasSplitCaseColors; // ivar: _hasSplitCaseColors
@property (nonatomic) BOOL hasW1Chip; // ivar: _hasW1Chip
@property (nonatomic) BOOL isAirPods; // ivar: _isAirPods
@property (nonatomic) NSUInteger model; // ivar: _model
@property (nonatomic) unsigned int productID; // ivar: _productID
@property (nonatomic) BOOL showsStatus; // ivar: _showsStatus
@property (nonatomic) BOOL showsStatusOutOfCase; // ivar: _showsStatusOutOfCase
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
+(id)b507;
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