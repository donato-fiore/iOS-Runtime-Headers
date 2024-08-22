// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXVIDEOSTABILIZERESULT_H
#define _PXVIDEOSTABILIZERESULT_H

@class NSString, NSDictionary, NSError, AVAudioMix, AVAsset, AVVideoComposition;
@protocol PXVideoStabilizeResult;

#import <Foundation/Foundation.h>

#import "PXVideoStabilizeOperationSpec.h"

@interface _PXVideoStabilizeResult : NSObject <PXVideoStabilizeResult>



@property (nonatomic) NSUInteger analysisType; // ivar: _analysisType
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSDictionary *debugInfo; // ivar: _debugInfo
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AVAudioMix *outputAudioMix; // ivar: _outputAudioMix
@property (retain, nonatomic) AVAsset *outputVideoAsset; // ivar: _outputVideoAsset
@property (retain, nonatomic) AVVideoComposition *outputVideoComposition; // ivar: _outputVideoComposition
@property (retain, nonatomic) PXVideoStabilizeOperationSpec *spec; // ivar: _spec
@property (retain, nonatomic) NSDictionary *stabilizationRecipe; // ivar: _stabilizationRecipe
@property (readonly) Class superclass;




@end


#endif