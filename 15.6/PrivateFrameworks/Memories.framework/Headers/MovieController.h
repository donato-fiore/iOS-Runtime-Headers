// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MOVIECONTROLLER_H
#define MOVIECONTROLLER_H

@class AVMutableComposition, AVMutableAudioMix, CALayer, AVAssetImageGenerator, NSString, AVPlayerItem, AVMutableVideoComposition;
@protocol MovieControllerExportProtocol;

#import <Foundation/Foundation.h>

#import "Composition.h"
#import "Project.h"

@interface MovieController : NSObject <MovieControllerExportProtocol>

 {
    float m_rate;
}


@property (readonly, nonatomic) AVMutableComposition *AVComposition;
@property (readonly, nonatomic) AVMutableAudioMix *audioMix;
@property (retain) Composition *composition; // ivar: _composition
@property (readonly, nonatomic) CALayer *compositionLayer; // ivar: compositionLayer
@property (retain) AVAssetImageGenerator *customImageGen; // ivar: _customImageGen
@property NSInteger customImageGenCount; // ivar: _customImageGenCount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property CGFloat exportAspect; // ivar: _exportAspect
@property BOOL forExport; // ivar: _forExport
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AVPlayerItem *playerItem;
@property (retain, nonatomic) CALayer *playerLayer; // ivar: playerLayer
@property (copy) id *playerReadyCompletionBlock; // ivar: _playerReadyCompletionBlock
@property (copy, nonatomic) id *progressUpdateBlock; // ivar: progressUpdateBlock
@property (retain) Project *project; // ivar: project
@property CGSize size; // ivar: _size
@property (readonly) Class superclass;
@property (readonly, nonatomic) AVMutableVideoComposition *videoComposition;


+(id)controllerWithProject:(id)arg0 forExport:(BOOL)arg1 ;
+(id)imageFromProject:(id)arg0 atTime:(int)arg1 withSize:(struct CGSize )arg2 ;
-(id)imageAtTime:(struct ? )arg0 withSize:(struct CGSize )arg1 ;
-(void)applyPlayerItemProperties;
-(void)cancelAllUIImageGeneration;
-(void)clearPlayerItemProperties;
-(void)dealloc;
-(void)generateOrigUIImagesAsynchronouslyForSize:(struct CGSize )arg0 atTimes:(id)arg1 completionHandler:(id)arg2 ;
-(void)generateUIImagesAsynchronouslyForSize:(struct CGSize )arg0 atTimes:(id)arg1 completionHandler:(id)arg2 ;
-(void)renderBothOrientationsOfFirstFrameAtSize:(struct CGSize )arg0 withCompletion:(id)arg1 ;
-(void)tearDownProjectDisplay;
-(void)updateComposition;
-(void)updateForProjectTimeInSeconds:(CGFloat)arg0 asynchronous:(BOOL)arg1 allowUnloading:(BOOL)arg2 ;


@end


#endif