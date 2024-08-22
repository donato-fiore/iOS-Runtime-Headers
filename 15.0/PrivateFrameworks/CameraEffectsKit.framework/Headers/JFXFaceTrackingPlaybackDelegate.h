// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JFXFACETRACKINGPLAYBACKDELEGATE_H
#define JFXFACETRACKINGPLAYBACKDELEGATE_H

@class NSString;
@protocol PVEffectTimedPropertiesDelegate, OS_dispatch_queue, JFXPlayableElement;

#import <Foundation/Foundation.h>

#import "JFXARMetadataMediaReader.h"
#import "JFXFaceTrackingPlaybackProperties.h"
#import "JFXSharedMediaDataReaderManager.h"

@interface JFXFaceTrackingPlaybackDelegate : NSObject <PVEffectTimedPropertiesDelegate>



@property (retain, nonatomic) JFXARMetadataMediaReader *arMetadataReader; // ivar: _arMetadataReader
@property (retain, nonatomic) JFXFaceTrackingPlaybackProperties *cachedFaceTrackingProperties; // ivar: _cachedFaceTrackingProperties
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *cachedFaceTrackingPropertiesQueue; // ivar: _cachedFaceTrackingPropertiesQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isScrubbing; // ivar: _isScrubbing
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *mediaDataReaderUpdateQueue; // ivar: _mediaDataReaderUpdateQueue
@property (readonly, nonatomic) CGSize outputSize; // ivar: _outputSize
@property (readonly, nonatomic) NSObject<JFXPlayableElement> *playableElement; // ivar: _playableElement
@property (readonly, nonatomic) ? playbackElementPlaybackMediaRange; // ivar: _playbackElementPlaybackMediaRange
@property (readonly, nonatomic) ? playbackElementPlaybackPresentationOffset; // ivar: _playbackElementPlaybackPresentationOffset
@property (readonly, nonatomic) JFXSharedMediaDataReaderManager *sharedMediaDataReaderManager; // ivar: _sharedMediaDataReaderManager
@property (readonly) Class superclass;


-(id)JFX_arMetadataForMediaTime:(struct ? )arg0 foundTimeRange:(struct ? *)arg1 ;
-(id)JFX_cachedFaceTrackingPropertiesForMediaTime:(struct ? )arg0 forDisplayingMediaAtInterfaceOrientation:(NSInteger)arg1 ;
-(id)JFX_faceTrackingPlaybackPropertiesAtTime:(struct ? )arg0 forDisplayingMediaAtInterfaceOrientation:(NSInteger)arg1 ;
-(id)arDataAtTime:(struct ? )arg0 forDisplayingMediaAtInterfaceOrientation:(NSInteger)arg1 ;
-(id)effect:(id)arg0 timedPropertiesForGroup:(id)arg1 time:(struct ? )arg2 userContext:(id)arg3 ;
-(id)faceTrackingTransformAtTime:(struct ? )arg0 forDisplayingMediaAtInterfaceOrientation:(NSInteger)arg1 ;
-(id)initWithPlayableElement:(id)arg0 sharedMediaDataReaderManager:(id)arg1 outputSize:(struct CGSize )arg2 ;
-(id)supportedTimedPropertyGroupsForEffect:(id)arg0 ;
-(struct ? )jfx_mediaTimeFromPlaybackTime:(struct ? )arg0 ;
-(void)JFX_cacheFaceTrackingProperties:(id)arg0 ;
-(void)JFX_initFaceTrackingCachingProperties;
-(void)JFX_initMetadataReadingProperties;
-(void)JFX_loadMediaDataReaders;
-(void)JFX_setMediaDataReaderScrubbingMode:(BOOL)arg0 ;
-(void)JFX_unloadMediaDataReaders;
-(void)effect:(id)arg0 didStopRequestingTimedProperties:(id)arg1 ;
-(void)effect:(id)arg0 willStartRequestingTimedProperties:(id)arg1 ;


@end


#endif