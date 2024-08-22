// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVMUTABLEMOVIETRACK_H
#define AVMUTABLEMOVIETRACK_H

@class NSArray, NSURL;


#import "AVMovieTrack.h"
#import "AVMutableMovieTrackInternal.h"
#import "AVMediaDataStorage.h"

@interface AVMutableMovieTrack : AVMovieTrack {
    AVMutableMovieTrackInternal *_mutableMovieTrackInternal;
}


@property (nonatomic) NSInteger alternateGroupID;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) NSArray *formatDescriptions;
@property (readonly, nonatomic) BOOL hasProtectedContent;
@property (copy, nonatomic) AVMediaDataStorage *mediaDataStorage;
@property (copy, nonatomic) NSArray *metadata;
@property (nonatomic, getter=isModified) BOOL modified;
@property (copy, nonatomic) NSURL *sampleReferenceBaseURL;
@property (nonatomic) int timescale;


+(BOOL)expectsPropertyRevisedNotifications;
+(id)trackWithTrackID:(int)arg0 forMovie:(id)arg1 ;
-(BOOL)appendMediaData:(id)arg0 dataOffset:(*NSInteger)arg1 ;
-(BOOL)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 decodeTime:(struct ? *)arg1 presentationTime:(struct ? *)arg2 error:(*id)arg3 ;
-(BOOL)insertMediaTimeRange:(struct ? )arg0 intoTimeRange:(struct ? )arg1 ;
-(BOOL)insertTimeRange:(struct ? )arg0 ofTrack:(id)arg1 atTime:(struct ? )arg2 copySampleData:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)isCompatibleWithFormatDescription:(struct opaqueCMFormatDescription *)arg0 ;
-(NSInteger)layer;
-(NSInteger)preferredMediaChunkAlignment;
-(NSInteger)preferredMediaChunkSize;
-(NSInteger)statusOfValueForKey:(id)arg0 error:(*id)arg1 ;
-(float)preferredVolume;
-(id)_stringForProperty:(struct __CFString *)arg0 ;
-(id)availableMetadataFormats;
-(id)description;
-(id)extendedLanguageTag;
-(id)initWithTrackID:(int)arg0 forMovie:(id)arg1 ;
-(id)languageCode;
-(id)locale;
-(id)metadataForFormat:(id)arg0 ;
-(int)trackID;
-(struct ? )mediaDecodeTimeRange;
-(struct ? )mediaPresentationTimeRange;
-(struct ? )preferredMediaChunkDuration;
-(struct CGAffineTransform )preferredTransform;
-(struct CGSize )_sizeForProperty:(struct __CFString *)arg0 ;
-(struct CGSize )cleanApertureDimensions;
-(struct CGSize )dimensions;
-(struct CGSize )encodedPixelsDimensions;
-(struct CGSize )naturalSize;
-(struct CGSize )productionApertureDimensions;
-(struct OpaqueFigAssetTrack *)_figAssetTrack;
-(struct OpaqueFigMutableMovie *)_figMutableMovie;
-(void)_addFigAssetTrackNotifications;
-(void)_removeFigAssetTrackNotifications;
-(void)_setSize:(struct CGSize )arg0 forProperty:(struct __CFString *)arg1 ;
-(void)_setString:(id)arg0 forProperty:(struct __CFString *)arg1 ;
-(void)_signalMetadataUpdated;
-(void)addTrackAssociationToTrack:(id)arg0 type:(id)arg1 ;
-(void)dealloc;
-(void)insertEmptyTimeRange:(struct ? )arg0 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeTimeRange:(struct ? )arg0 ;
-(void)removeTrackAssociationToTrack:(id)arg0 type:(id)arg1 ;
-(void)replaceFormatDescription:(struct opaqueCMFormatDescription *)arg0 withFormatDescription:(struct opaqueCMFormatDescription *)arg1 ;
-(void)scaleTimeRange:(struct ? )arg0 toDuration:(struct ? )arg1 ;
-(void)setCleanApertureDimensions:(struct CGSize )arg0 ;
-(void)setEncodedPixelsDimensions:(struct CGSize )arg0 ;
-(void)setExtendedLanguageTag:(id)arg0 ;
-(void)setLanguageCode:(id)arg0 ;
-(void)setLayer:(NSInteger)arg0 ;
-(void)setNaturalSize:(struct CGSize )arg0 ;
-(void)setPreferredMediaChunkAlignment:(NSInteger)arg0 ;
-(void)setPreferredMediaChunkDuration:(struct ? )arg0 ;
-(void)setPreferredMediaChunkSize:(NSInteger)arg0 ;
-(void)setPreferredTransform:(struct CGAffineTransform )arg0 ;
-(void)setPreferredVolume:(float)arg0 ;
-(void)setProductionApertureDimensions:(struct CGSize )arg0 ;


@end


#endif