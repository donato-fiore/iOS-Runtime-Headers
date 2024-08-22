// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFVIDEOADJUSTMENTS_H
#define PFVIDEOADJUSTMENTS_H



#import "PFAssetAdjustments.h"

@interface PFVideoAdjustments : PFAssetAdjustments

@property (readonly, nonatomic) ? slowMotionRampIn;
@property (readonly, nonatomic) ? slowMotionRampOut;
@property (readonly, nonatomic) float slowMotionRate;
@property (nonatomic) float slowMotionRate; // ivar: _slowMotionRate
@property (readonly, nonatomic) ? slowMotionTimeRange;
@property (nonatomic) ? slowMotionTimeRange; // ivar: _slowMotionTimeRange


+(BOOL)isRecognizedSlowMotionFormatWithIdentifier:(id)arg0 version:(id)arg1 ;
+(float)defaultSlowMotionRateForNominalFrameRate:(float)arg0 ;
+(id)defaultSlowMotionAdjustmentsForAsset:(id)arg0 ;
+(id)defaultVideoAdjustmentsURLForVideoURL:(id)arg0 ;
+(struct ? )defaultSlowMotionTimeRangeForDuration:(struct ? )arg0 ;
-(BOOL)_isValidSlowMotionTimeRange:(struct ? )arg0 rate:(float)arg1 ;
-(BOOL)_parseAppleVideoDataBlobDictionary:(id)arg0 forSlowMotionTimeRange:(struct ? *)arg1 rate:(*float)arg2 ;
-(BOOL)_parseLegacySLMDictionary:(id)arg0 forSlowMotionTimeRange:(struct ? *)arg1 rate:(*float)arg2 ;
-(BOOL)_parseVersionedDataForSlowMotionTimeRange:(struct ? *)arg0 rate:(*float)arg1 ;
-(BOOL)hasSlowMotionAdjustments;
-(BOOL)isRecognizedFormat;
-(id)_adjustmentsObjectFromNSKeyedArchiverData:(id)arg0 ;
-(id)_dictionaryFromSlowMotionTimeRange:(struct ? )arg0 rate:(float)arg1 ;
-(id)description;
-(id)initWithPropertyListDictionary:(id)arg0 ;
-(id)initWithSlowMotionTimeRange:(struct ? )arg0 rate:(float)arg1 ;
-(struct ? )convertToOriginalTimeFromScaledTime:(struct ? )arg0 forExport:(BOOL)arg1 ;
-(struct ? )convertToScaledTimeFromOriginalTime:(struct ? )arg0 forExport:(BOOL)arg1 ;
-(void)_updateDerivedPropertiesFromVersionedData;


@end


#endif