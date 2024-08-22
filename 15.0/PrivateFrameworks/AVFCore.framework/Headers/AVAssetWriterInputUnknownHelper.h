// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVASSETWRITERINPUTUNKNOWNHELPER_H
#define AVASSETWRITERINPUTUNKNOWNHELPER_H



#import "AVAssetWriterInputHelper.h"

@interface AVAssetWriterInputUnknownHelper : AVAssetWriterInputHelper



+(id)keyPathsForValuesAffectingCanPerformMultiplePasses;
-(BOOL)_canAddTrackAssociationWithTrackOfInput:(id)arg0 type:(id)arg1 exceptionReason:(*id)arg2 ;
-(BOOL)_validateLanguageCode:(id)arg0 ;
-(BOOL)canAddTrackAssociationWithTrackOfInput:(id)arg0 type:(id)arg1 ;
-(BOOL)canPerformMultiplePasses;
-(BOOL)canStartRespondingToEachPassDescriptionReturningReason:(*id)arg0 ;
-(NSInteger)status;
-(id)initWithConfigurationState:(id)arg0 ;
-(id)initWithMediaType:(id)arg0 outputSettings:(id)arg1 sourceFormatHint:(struct opaqueCMFormatDescription *)arg2 ;
-(void)addTrackAssociationWithTrackOfInput:(id)arg0 type:(id)arg1 ;
-(void)setAlternateGroupID:(short)arg0 ;
-(void)setExpectsMediaDataInRealTime:(BOOL)arg0 ;
-(void)setExtendedLanguageTag:(id)arg0 ;
-(void)setLanguageCode:(id)arg0 ;
-(void)setLayer:(NSInteger)arg0 ;
-(void)setMarksOutputTrackAsEnabled:(BOOL)arg0 ;
-(void)setMaximizePowerEfficiency:(BOOL)arg0 ;
-(void)setMediaDataLocation:(id)arg0 ;
-(void)setMediaTimeScale:(int)arg0 ;
-(void)setMetadata:(id)arg0 ;
-(void)setNaturalSize:(struct CGSize )arg0 ;
-(void)setPerformsMultiPassEncodingIfSupported:(BOOL)arg0 ;
-(void)setPreferredMediaChunkAlignment:(NSInteger)arg0 ;
-(void)setPreferredMediaChunkDuration:(struct ? )arg0 ;
-(void)setPreferredMediaChunkSize:(NSInteger)arg0 ;
-(void)setPreferredVolume:(float)arg0 ;
-(void)setProvisionalAlternateGroupID:(short)arg0 ;
-(void)setSampleReferenceBaseURL:(id)arg0 ;
-(void)setSourcePixelBufferAttributes:(id)arg0 ;
-(void)setTransform:(struct CGAffineTransform )arg0 ;


@end


#endif