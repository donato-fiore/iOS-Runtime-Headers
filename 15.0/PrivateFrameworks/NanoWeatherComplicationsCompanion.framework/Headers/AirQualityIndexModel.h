// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AIRQUALITYINDEXMODEL_H
#define AIRQUALITYINDEXMODEL_H

@class NSString, NSArray, UIColor;

#import <Foundation/Foundation.h>


@interface AirQualityIndexModel : NSObject

@property (readonly, nonatomic) CGFloat fraction; // ivar: _fraction
@property (readonly, nonatomic) NSString *localizedIndex; // ivar: _localizedIndex
@property (readonly, nonatomic) NSArray *spectrum; // ivar: _spectrum
@property (readonly, nonatomic) NSArray *spectrumTicks; // ivar: _spectrumTicks
@property (readonly, nonatomic) UIColor *tintColor; // ivar: _tintColor


+(id)airQualityIndexModelForConditions:(id)arg0 location:(id)arg1 indexNumberFormatter:(id)arg2 useRoundedVariant:(BOOL)arg3 ;
-(void)logSpectrum;


@end


#endif