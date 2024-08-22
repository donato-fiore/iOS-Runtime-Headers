// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKAUDIOMEDIAOBJECT_H
#define CKAUDIOMEDIAOBJECT_H

@class NSArray, NSString;
@protocol CKMediaObjectMetadataPreview;


#import "CKAVMediaObject.h"

@interface CKAudioMediaObject : CKAVMediaObject <CKMediaObjectMetadataPreview>



@property (nonatomic) CGFloat durationFromMetadata; // ivar: _durationFromMetadata
@property (retain, nonatomic) NSArray *powerLevels;
@property (retain, nonatomic) NSArray *powerLevelsFromMetadata; // ivar: _powerLevelsFromMetadata
@property (readonly, copy, nonatomic) NSString *previewMetadataFilenameExtension;
@property (readonly, nonatomic) BOOL supportsPreviewMetadata;


+(BOOL)isPreviewable;
+(BOOL)shouldUseTranscoderGeneratedPreviewSize;
+(Class)__ck_attachmentItemClass;
+(id)UTITypes;
+(id)_cachedPowerLevelsForKey:(id)arg0 ;
+(id)fallbackFilenamePrefix;
+(id)generateThumbnailForPowerLevelsFromMetadata:(id)arg0 color:(id)arg1 ;
+(id)generateThumbnailForWidth:(CGFloat)arg0 color:(id)arg1 powerLevels:(id)arg2 fileURL:(id)arg3 ;
+(id)generateWaveformFromPowerLevels:(*CGFloat)arg0 powerLevelsCount:(NSUInteger)arg1 color:(id)arg2 ;
+(void)_cachePowerLevels:(id)arg0 forKey:(id)arg1 ;
+(void)normalizedPowerLevelsForPowerValues:(id)arg0 powerLevelsCount:(NSUInteger)arg1 powerLevels:(*CGFloat)arg2 ;
-(BOOL)canExport;
-(BOOL)isLikeAudioMessage;
-(BOOL)isPreviewable;
-(BOOL)shouldSuppressPreview;
-(BOOL)writePreviewMetadata:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(CGFloat)duration;
-(Class)balloonViewClass;
-(id)attachmentSummary:(NSUInteger)arg0 ;
-(id)composeWaveformForWidth:(CGFloat)arg0 orientation:(char)arg1 ;
-(id)composeWaveformForWidth:(CGFloat)arg0 orientation:(char)arg1 withColor:(id)arg2 ;
-(id)generatePlaceholderThumbnailForWidth:(CGFloat)arg0 ;
-(id)generatePlaceholderThumbnailForWidth:(CGFloat)arg0 withColor:(id)arg1 ;
-(id)generatePreviewFromThumbnail:(id)arg0 width:(CGFloat)arg1 orientation:(char)arg2 ;
-(id)generatePreviewFromThumbnail:(id)arg0 width:(CGFloat)arg1 orientation:(char)arg2 withColor:(id)arg3 ;
-(id)generateThumbnailForWidth:(CGFloat)arg0 ;
-(id)generateThumbnailForWidth:(CGFloat)arg0 withColor:(id)arg1 ;
-(id)metricsCollectorMediaType;
-(id)previewFilenameExtension;
-(id)previewItemTitle;
-(id)previewMetadataWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
-(id)savedPreviewFromURL:(id)arg0 forOrientation:(char)arg1 ;
-(id)waveformForOrientation:(char)arg0 ;
-(int)mediaType;
-(void)restorePreviewMetadataFromDict:(id)arg0 ;
-(void)savePreview:(id)arg0 toURL:(id)arg1 forOrientation:(char)arg2 ;


@end


#endif