// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTDATASTATUS_H
#define CTDATASTATUS_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTDataStatus : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) unsigned int activeContexts; // ivar: _activeContexts
@property (nonatomic) BOOL attached; // ivar: _attached
@property (nonatomic) BOOL cellularDataPossible; // ivar: _cellularDataPossible
@property (nonatomic) unsigned int dataBearerSoMask; // ivar: _dataBearerSoMask
@property (nonatomic) int dataBearerTechnology; // ivar: _dataBearerTechnology
@property (nonatomic) int dataMode; // ivar: _dataMode
@property (nonatomic) BOOL dataPlanSignalingReductionOverride; // ivar: _dataPlanSignalingReductionOverride
@property (nonatomic) BOOL dataSim; // ivar: _dataSim
@property (nonatomic) BOOL inHomeCountry; // ivar: _inHomeCountry
@property (nonatomic) int indicator; // ivar: _indicator
@property (nonatomic) int indicatorOverride; // ivar: _indicatorOverride
@property (readonly, nonatomic) BOOL newRadioCoverage;
@property (readonly, nonatomic) BOOL newRadioDataBearer;
@property (readonly, nonatomic) BOOL newRadioMmWaveDataBearer;
@property (readonly, nonatomic) BOOL newRadioNsaCoverage;
@property (readonly, nonatomic) BOOL newRadioNsaDataBearer;
@property (readonly, nonatomic) BOOL newRadioSaCoverage;
@property (readonly, nonatomic) BOOL newRadioSaDataBearer;
@property (readonly, nonatomic) BOOL newRadioSub6DataBearer;
@property (nonatomic) int radioTechnology; // ivar: _radioTechnology
@property (nonatomic) int reason; // ivar: _reason
@property (nonatomic) BOOL roamAllowed; // ivar: _roamAllowed
@property (nonatomic) unsigned int totalActiveContexts; // ivar: _totalActiveContexts


+(BOOL)supportsSecureCoding;
-(id)copyBasic;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif