// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PESERIALIZATIONUTILITY_H
#define PESERIALIZATIONUTILITY_H


#import <Foundation/Foundation.h>


@interface PESerializationUtility : NSObject



+(BOOL)_isKeyOnlyAdjustmentFor:(id)arg0 key:(id)arg1 ;
+(BOOL)adjustmentDataIsSupported:(id)arg0 ;
+(BOOL)isLoopOrMirrorAutoLoopInExportComposition:(id)arg0 compositionController:(id)arg1 ;
+(NSInteger)_playbackStyleForAutoLoopController:(id)arg0 ;
+(id)compositionControllerForContentEditingInput:(id)arg0 asShot:(BOOL)arg1 source:(id)arg2 error:(*id)arg3 ;
+(id)contentEditingOutputForContentEditingInput:(id)arg0 compositionController:(id)arg1 asset:(id)arg2 async:(BOOL)arg3 onlyChangingOriginalChoice:(BOOL)arg4 ;
+(id)renderCompositionController:(id)arg0 forContentEditingOutput:(id)arg1 scalePolicy:(id)arg2 applyVideoOrientationAsMetadata:(BOOL)arg3 queue:(id)arg4 completion:(id)arg5 ;
+(unsigned short)_playbackVariationForAutoLoopController:(id)arg0 ;


@end


#endif