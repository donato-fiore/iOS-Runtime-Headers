// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVFORMATREADERINSPECTOR_H
#define AVFORMATREADERINSPECTOR_H



#import "AVAssetInspector.h"

@interface AVFormatReaderInspector : AVAssetInspector {
    *OpaqueFigFormatReader _formatReader;
    BOOL didCheckForSaveRestriction;
    BOOL hasSaveRestriction;
}


@property (retain, nonatomic, getter=_formatReader, setter=_setFormatReader:) *OpaqueFigFormatReader formatReader;


-(*void)_valueAsCFTypeForProperty:(struct __CFString *)arg0 ;
-(BOOL)_hasQTSaveRestriction;
-(BOOL)canContainFragments;
-(BOOL)containsFragments;
-(BOOL)isComposable;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isExportable;
-(BOOL)isReadable;
-(BOOL)providesPreciseDurationAndTiming;
-(NSInteger)firstFragmentSequenceNumber;
-(NSInteger)fragmentCount;
-(NSInteger)trackCount;
-(NSUInteger)hash;
-(float)preferredRate;
-(float)preferredSoundCheckVolumeNormalization;
-(float)preferredVolume;
-(id)alternateTrackGroups;
-(id)availableMetadataFormats;
-(id)commonMetadata;
-(id)initWithFormatReader:(struct OpaqueFigFormatReader *)arg0 ;
-(id)lyrics;
-(id)metadataForFormat:(id)arg0 ;
-(id)trackReferences;
-(int)naturalTimeScale;
-(struct ? )duration;
-(struct ? )minimumTimeOffsetFromLive;
-(struct ? )overallDurationHint;
-(struct CGAffineTransform )preferredTransform;
-(struct CGSize )naturalSize;
-(void)dealloc;


@end


#endif