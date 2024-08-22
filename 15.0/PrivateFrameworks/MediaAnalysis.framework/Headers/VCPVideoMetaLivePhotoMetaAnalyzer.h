// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPVIDEOMETALIVEPHOTOMETAANALYZER_H
#define VCPVIDEOMETALIVEPHOTOMETAANALYZER_H

@class NSMutableData, NSMutableArray;


#import "VCPVideoMetaAnalyzer.h"
#import "VCPVideoMetaFocusAnalyzer.h"
#import "VCPVideoMetaMotionAnalyzer.h"
#import "VCPVideoMetaLensSwitchAnalyzer.h"

@interface VCPVideoMetaLivePhotoMetaAnalyzer : VCPVideoMetaAnalyzer {
    CGVector _prevEstimatedCenterMv;
    NSMutableData *_deSerializedMetaBuffer;
    VCPVideoMetaFocusAnalyzer *_metaFocusAnalyzer;
    VCPVideoMetaMotionAnalyzer *_metaMotionAnalyzer;
    NSUInteger _requestAnalyses;
    NSMutableArray *_metadataStabilizationArray;
    NSMutableArray *_frameTimestampArray;
    NSMutableArray *_originalFrameTimestampArray;
    NSMutableArray *_metadataItemTimestampArray;
    NSMutableArray *_adjusterArray;
    NSMutableArray *_interpolatedFrameArray;
    VCPVideoMetaLensSwitchAnalyzer *_metaLensSwitchAnalzer;
    BOOL _gyroHomographyIsValid;
    CGSize _gyroHomographyDimension;
}




+(id)defaultDesiredKeys;
+(id)referenceSoftwareStackVersion;
-(BOOL)gyroHomographyVersionIsValid:(struct opaqueCMFormatDescription *)arg0 ;
-(float)compareNumericVersion:(id)arg0 withReferenceVersion:(id)arg1 ;
-(float)compareSoftwareStackVersion:(id)arg0 withReferenceVersion:(id)arg1 ;
-(id)init;
-(id)initWithRequestAnalyses:(NSUInteger)arg0 formatDescription:(struct opaqueCMFormatDescription *)arg1 ;
-(id)privateResults;
-(id)readSoftwareStackVersion:(struct opaqueCMFormatDescription *)arg0 ;
-(int)convertLivePhotoBinary:(id)arg0 toDictionary:(id)arg1 ;
-(int)convertLivePhotoStruct:(struct FigLivePhotoMetadata *)arg0 toDictionary:(id)arg1 ;
-(int)finalizeAnalysis;
-(int)processMetadataGroup:(id)arg0 flags:(*NSUInteger)arg1 ;
-(struct CGSize )readGyroHomographyDimension:(struct opaqueCMFormatDescription *)arg0 ;
-(struct __CFData *)getFirstAtomWithFourCharCode:(unsigned int)arg0 fromSetupData:(struct __CFData *)arg1 ;
-(struct __CFData *)getSetupDataFrom:(struct opaqueCMFormatDescription *)arg0 ;


@end


#endif