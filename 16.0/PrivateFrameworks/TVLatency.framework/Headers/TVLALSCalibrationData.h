// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVLALSCALIBRATIONDATA_H
#define TVLALSCALIBRATIONDATA_H

@class NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface TVLALSCalibrationData : NSObject

@property (retain, nonatomic) NSNumber *channels; // ivar: _channels
@property (retain, nonatomic) NSNumber *displayID; // ivar: _displayID
@property (retain, nonatomic) NSNumber *normalizationFactor; // ivar: _normalizationFactor
@property (retain, nonatomic) NSArray *spectrumNom; // ivar: _spectrumNom
@property (retain, nonatomic) NSNumber *version; // ivar: _version
@property (retain, nonatomic) NSNumber *wavelengthEnd; // ivar: _wavelengthEnd
@property (retain, nonatomic) NSNumber *wavelengthStartNIR; // ivar: _wavelengthStartNIR
@property (retain, nonatomic) NSNumber *wavelengthStartVisible; // ivar: _wavelengthStartVisible
@property (retain, nonatomic) NSNumber *wavelengthStep; // ivar: _wavelengthStep


+(id)instanceFromDictionary:(id)arg0 ;
-(id)dictionaryRepresentation;


@end


#endif