// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFCAMERATIMELAPSEPOSTERFRAMEGENERATOR_H
#define HFCAMERATIMELAPSEPOSTERFRAMEGENERATOR_H

@class NSMutableDictionary;
@protocol HFCameraImageGeneratorDelegate, HFCameraTimelapsePosterFrameGeneratorDelegate, OS_dispatch_queue, HFCameraTimelapseClipInfoProvider;

#import <Foundation/Foundation.h>


@interface HFCameraTimelapsePosterFrameGenerator : NSObject <HFCameraImageGeneratorDelegate>



@property (weak, nonatomic) NSObject<HFCameraTimelapsePosterFrameGeneratorDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *generationQueue; // ivar: _generationQueue
@property (retain, nonatomic) NSMutableDictionary *posterFrameGenerationRequests; // ivar: _posterFrameGenerationRequests
@property (weak, nonatomic) NSObject<HFCameraTimelapseClipInfoProvider> *timelapseClipInfoProvider; // ivar: _timelapseClipInfoProvider


-(id)_generateOffsetsForHighQualityClip:(id)arg0 withStep:(NSUInteger)arg1 ;
-(id)_generateTimelapseOffsetsFromOffsets:(id)arg0 forTimelapseDiff:(CGFloat)arg1 ;
-(id)_generationRequestForImageGenerator:(id)arg0 withKey:(id)arg1 ;
-(id)generatePosterFramesForHighQualityClip:(id)arg0 withStep:(NSUInteger)arg1 atSize:(struct CGSize )arg2 ;
-(id)initWithTimelapseClipInfoProvider:(id)arg0 andDelegate:(id)arg1 ;
-(void)_generatePosterFramesForAsset:(id)arg0 forOffsets:(id)arg1 atSize:(struct CGSize )arg2 withHighQualityClip:(id)arg3 andTimelapseOffset:(CGFloat)arg4 ;
-(void)_generatePosterFramesForTimelapseClip:(id)arg0 withHighQualityClip:(id)arg1 forOffsets:(id)arg2 atSize:(struct CGSize )arg3 ;
-(void)_removeGenerationRequestForImageGenerator:(id)arg0 withKey:(id)arg1 ;
-(void)dealloc;
-(void)imageGenerator:(id)arg0 didGenerateImage:(id)arg1 requestedTime:(struct ? )arg2 actualTime:(struct ? )arg3 forKey:(id)arg4 ;
-(void)imageGenerator:(id)arg0 failedToGenerateImageForRequestedTime:(struct ? )arg1 actualTime:(struct ? )arg2 forKey:(id)arg3 ;
-(void)imageGenerator:(id)arg0 finishedGeneratingImagesForKey:(id)arg1 ;


@end


#endif