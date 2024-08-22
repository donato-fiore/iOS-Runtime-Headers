// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXMCAPTIONDETECTORNODE_H
#define AXMCAPTIONDETECTORNODE_H

@class NSURL, AXImageCaptionModel;


#import "AXMEvaluationNode.h"
#import "AXMLanguageTranslator.h"
#import "AXMSceneDetectorNode.h"

@interface AXMCaptionDetectorNode : AXMEvaluationNode {
    os_unfair_lock_s _lock;
    BOOL _needsCaptionHandlerRefresh;
    *CVNLPCaptionHandler _captionHandlerRef;
    NSURL *_overrideModelURL;
    NSUInteger _overrideScaleMethod;
    NSUInteger _genderStrategy;
    BOOL _prefersPixelBufferImageInput;
    AXImageCaptionModel *_effectiveCaptionModelInfo;
    NSURL *_effectiveModelURL;
    AXMLanguageTranslator *_languageTranslator;
}


@property (readonly, nonatomic) AXImageCaptionModel *effectiveCaptionModelInfo;
@property (readonly, nonatomic) NSURL *effectiveModelURL;
@property (nonatomic) NSUInteger genderStrategy;
@property (retain, nonatomic) NSURL *overrideModelURL;
@property (nonatomic) NSUInteger overrideScaleMethod;
@property (weak, nonatomic) AXMSceneDetectorNode *sceneDetector; // ivar: _sceneDetector


+(BOOL)isSupported;
+(BOOL)supportsSecureCoding;
+(id)title;
+(struct CGSize )preferredModelInputSize;
-(BOOL)_captionModelCloningIsNeeded;
-(BOOL)requiresVisionFramework;
-(id)_computeCaptionForPixelBuffer:(struct __CVBuffer *)arg0 orImage:(struct CGImage *)arg1 captionHandler:(struct CVNLPCaptionHandler *)arg2 metrics:(id)arg3 ;
-(id)_withLock_captionModelURLCloningAssetIfNeeded;
-(id)_withLock_cloneCaptionModelIfNeeded:(id)arg0 ;
-(id)_withLock_modelURLForOverrideURL:(id)arg0 ;
-(id)_withLock_valueForOverrideScaleMethod;
-(id)initWithCoder:(id)arg0 ;
-(struct CVNLPCaptionHandler *)_withLock_captionHandlerCreateIfNeeded:(id)arg0 ;
-(void)_performWithLock:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)evaluate:(id)arg0 metrics:(id)arg1 ;
-(void)nodeInitialize;


@end


#endif