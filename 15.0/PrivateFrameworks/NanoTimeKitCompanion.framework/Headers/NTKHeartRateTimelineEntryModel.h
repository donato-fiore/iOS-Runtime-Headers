// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKHEARTRATETIMELINEENTRYMODEL_H
#define NTKHEARTRATETIMELINEENTRYMODEL_H

@class NSArray, NSDate;


#import "NTKTimelineEntryModel.h"

@interface NTKHeartRateTimelineEntryModel : NTKTimelineEntryModel

@property (nonatomic) NSInteger BPM; // ivar: _BPM
@property (retain, nonatomic) NSArray *chartPoints; // ivar: _chartPoints
@property (nonatomic) NSInteger dailyHighBPM; // ivar: _dailyHighBPM
@property (nonatomic) NSInteger dailyLowBPM; // ivar: _dailyLowBPM
@property (nonatomic) BOOL hasBPM; // ivar: _hasBPM
@property (nonatomic) BOOL hasSummary; // ivar: _hasSummary
@property (nonatomic) BOOL lessThanMinute; // ivar: _lessThanMinute
@property (nonatomic, getter=isLocked) BOOL locked; // ivar: _locked
@property (retain, nonatomic) NSDate *measurementDate; // ivar: _measurementDate


-(id)_bpmString;
-(id)_heartrateString;
-(id)_metadataWithCurrentMeasurements;
-(id)_newCircularTemplateUsingMediumSize:(BOOL)arg0 ;
-(id)_newExtraLargeTemplate;
-(id)_newModularLargeTemplate;
-(id)_newModularSmallTemplate;
-(id)_newSignatureBezelTemplate;
-(id)_newSignatureCircularTemplate;
-(id)_newSignatureCornerTemplate;
-(id)_newSignatureExtraLargeCircularTemplate;
-(id)_newSignatureRectangularTemplate;
-(id)_newUtilitarianLargeTemplate;
-(id)_newUtilitarianSmallFlatTemplate;
-(id)_newUtilitarianSmallTemplate;
-(id)_signatureBezelTextProvider;
-(id)templateForComplicationFamily:(NSInteger)arg0 ;


@end


#endif