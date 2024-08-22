// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVASSETREADEROUTPUT_H
#define AVASSETREADEROUTPUT_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "AVAssetReaderOutputInternal.h"
#import "AVWeakReference.h"

@interface AVAssetReaderOutput : NSObject {
    AVAssetReaderOutputInternal *_internal;
}


@property (nonatomic) BOOL alwaysCopiesSampleData;
@property (nonatomic, getter=_extractionID, setter=_setExtractionID:) int extractionID;
@property (readonly, nonatomic, getter=_figAssetReaderExtractionOptions) NSDictionary *figAssetReaderExtractionOptions;
@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic, getter=_trimsSampleDurations) BOOL trimsSampleDurations;
@property (readonly, nonatomic, getter=_weakReferenceToAssetReader) AVWeakReference *weakReferenceToAssetReader;


+(id)_figAssetReaderVideoScalingPropertiesFromVideoSettings:(id)arg0 withFormatDescription:(id)arg1 ;
+(void)initialize;
-(BOOL)_enableTrackExtractionReturningError:(*id)arg0 ;
-(BOOL)_isFinished;
-(BOOL)_prepareForReadingReturningError:(*id)arg0 ;
-(BOOL)_updateTimeRangesOnFigAssetReaderReturningError:(*id)arg0 ;
-(BOOL)maximizePowerEfficiency;
-(BOOL)supportsRandomAccess;
-(NSInteger)_status;
-(id)_asset;
-(id)_errorForOSStatus:(int)arg0 ;
-(id)currentTimeRanges;
-(id)init;
-(struct OpaqueFigAssetReader *)_figAssetReader;
-(struct opaqueCMSampleBuffer *)copyNextSampleBuffer;
-(void)_attachToWeakReferenceToAssetReader:(id)arg0 ;
-(void)_cancelReading;
-(void)_figAssetReaderDecodeError;
-(void)_figAssetReaderFailed;
-(void)_figAssetReaderSampleBufferDidBecomeAvailableForExtractionID:(int)arg0 ;
-(void)_figAssetReaderServerConnectionDied;
-(void)_markAsFinished;
-(void)_setFigAssetReader:(struct OpaqueFigAssetReader *)arg0 ;
-(void)dealloc;
-(void)markConfigurationAsFinal;
-(void)resetForReadingTimeRanges:(id)arg0 ;
-(void)setMaximizePowerEfficiency:(BOOL)arg0 ;
-(void)setSupportsRandomAccess:(BOOL)arg0 ;


@end


#endif