// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVMUTABLEMOVIE_H
#define AVMUTABLEMOVIE_H

@class NSArray;


#import "AVMovie.h"
#import "AVMutableMovieInternal.h"
#import "AVMediaDataStorage.h"

@interface AVMutableMovie : AVMovie {
    AVMutableMovieInternal *_mutableMovieInternal;
}


@property (copy, nonatomic) AVMediaDataStorage *defaultMediaDataStorage;
@property (nonatomic) ? interleavingPeriod;
@property (copy, nonatomic) NSArray *metadata;
@property (nonatomic, getter=isModified) BOOL modified;
@property (nonatomic) float preferredRate;
@property (nonatomic) CGAffineTransform preferredTransform;
@property (nonatomic) float preferredVolume;
@property (nonatomic) int timescale;
@property (readonly, nonatomic) NSArray *tracks;


+(BOOL)expectsPropertyRevisedNotifications;
+(id)movieWithData:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)movieWithSettingsFromMovie:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)movieWithURL:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(BOOL)insertTimeRange:(struct ? )arg0 ofAsset:(id)arg1 atTime:(struct ? )arg2 copySampleData:(BOOL)arg3 error:(*id)arg4 ;
-(Class)_classForTrackInspectors;
-(NSInteger)statusOfValueForKey:(id)arg0 error:(*id)arg1 ;
-(id)URL;
-(id)_addMutableTrackWithMediaType:(id)arg0 copySettingsFromTrack:(id)arg1 options:(id)arg2 ;
-(id)_initWithFigAsset:(struct OpaqueFigAsset *)arg0 ;
-(id)_initWithFigError:(int)arg0 userInfo:(id)arg1 ;
-(id)_initWithFormatReader:(struct OpaqueFigFormatReader *)arg0 URL:(id)arg1 data:(id)arg2 options:(id)arg3 ;
-(id)_initializationOptions;
-(id)_mutableTracks;
-(id)addMutableTrackWithMediaType:(id)arg0 copySettingsFromTrack:(id)arg1 options:(id)arg2 ;
-(id)addMutableTracksCopyingSettingsFromTracks:(id)arg0 options:(id)arg1 ;
-(id)availableMetadataFormats;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)data;
-(id)description;
-(id)fileType;
-(id)init;
-(id)initWithData:(id)arg0 options:(id)arg1 ;
-(id)initWithData:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)initWithFileType:(id)arg0 copySettingsFromMovie:(id)arg1 options:(id)arg2 ;
-(id)initWithSettingsFromMovie:(id)arg0 options:(id)arg1 ;
-(id)initWithSettingsFromMovie:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)initWithURL:(id)arg0 options:(id)arg1 ;
-(id)initWithURL:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)metadataForFormat:(id)arg0 ;
-(id)mutableTrackCompatibleWithTrack:(id)arg0 ;
-(id)trackReferences;
-(id)trackWithTrackID:(int)arg0 ;
-(id)tracksWithMediaCharacteristic:(id)arg0 ;
-(id)tracksWithMediaType:(id)arg0 ;
-(struct ? )duration;
-(struct OpaqueFigFormatReader *)_formatReader;
-(struct OpaqueFigMutableMovie *)_figMutableMovie;
-(void)_addFigAssetNotifications;
-(void)_removeFigAssetNotifications;
-(void)_signalMetadataUpdated;
-(void)_signalTracksUpdated;
-(void)dealloc;
-(void)insertEmptyTimeRange:(struct ? )arg0 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeTimeRange:(struct ? )arg0 ;
-(void)removeTrack:(id)arg0 ;
-(void)scaleTimeRange:(struct ? )arg0 toDuration:(struct ? )arg1 ;


@end


#endif