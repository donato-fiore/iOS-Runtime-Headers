// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVASSETWRITERUNKNOWNHELPER_H
#define AVASSETWRITERUNKNOWNHELPER_H



#import "AVAssetWriterHelper.h"

@interface AVAssetWriterUnknownHelper : AVAssetWriterHelper {
    short _alternateGroupID;
}




-(BOOL)_canAddInput:(id)arg0 exceptionReason:(*id)arg1 ;
-(BOOL)_canAddInputGroup:(id)arg0 exceptionReason:(*id)arg1 ;
-(BOOL)canAddInput:(id)arg0 ;
-(BOOL)canAddInputGroup:(id)arg0 ;
-(NSInteger)status;
-(id)initWithConfigurationState:(id)arg0 ;
-(id)initWithURL:(id)arg0 fileType:(id)arg1 ;
-(void)addInput:(id)arg0 ;
-(void)addInputGroup:(id)arg0 ;
-(void)cancelWriting;
-(void)setDefaultPropertyValuesToConfigurationState:(id)arg0 outputURL:(id)arg1 fileType:(id)arg2 ;
-(void)setDelegate:(id)arg0 ;
-(void)setDirectoryForTemporaryFiles:(id)arg0 ;
-(void)setInitialMovieFragmentSequenceNumber:(NSInteger)arg0 ;
-(void)setInitialSegmentStartTime:(struct ? )arg0 ;
-(void)setMetadata:(id)arg0 ;
-(void)setMovieFragmentInterval:(struct ? )arg0 ;
-(void)setMovieTimeScale:(int)arg0 ;
-(void)setOutputFileTypeProfile:(id)arg0 ;
-(void)setOverallDurationHint:(struct ? )arg0 ;
-(void)setPreferredOutputSegmentInterval:(struct ? )arg0 ;
-(void)setPreferredRate:(float)arg0 ;
-(void)setPreferredTransform:(struct CGAffineTransform )arg0 ;
-(void)setPreferredVolume:(float)arg0 ;
-(void)setProducesCombinableFragments:(BOOL)arg0 ;
-(void)setRequiresInProcessOperation:(BOOL)arg0 ;
-(void)setShouldOptimizeForNetworkUse:(BOOL)arg0 ;
-(void)setSinglePassFileSize:(NSInteger)arg0 ;
-(void)setSinglePassMediaDataSize:(NSInteger)arg0 ;
-(void)setUsesVirtualCaptureCard:(BOOL)arg0 ;
-(void)startWriting;


@end


#endif