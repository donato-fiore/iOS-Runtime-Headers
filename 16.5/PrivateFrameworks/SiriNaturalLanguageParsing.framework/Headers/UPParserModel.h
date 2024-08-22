// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UPPARSERMODEL_H
#define UPPARSERMODEL_H

@class NSLocale;

#import <Foundation/Foundation.h>

#import "UPLoadedModelConfiguration.h"
#import "UPUsoSerializer.h"
#import "UPModelIdentifier.h"
#import "UPPreprocessor.h"

@interface UPParserModel : NSObject

@property (readonly, nonatomic) UPLoadedModelConfiguration *_loadedModelConfiguration; // ivar: __loadedModelConfiguration
@property (readonly) UPUsoSerializer *_usoSerializer; // ivar: __usoSerializer
@property (readonly, nonatomic) UPModelIdentifier *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly) UPPreprocessor *preprocessor;


+(id)modelWithLoadedModelConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)_candidateForBeamSequence:(*void)arg0 utterance:(*void)arg1 outputTokens:(*void)arg2 resolver:(*void)arg3 sharedEntityResolution:(id)arg4 ;
-(id)_candidateForUtterance:(*void)arg0 probability:(float)arg1 labelledSpans:(*void)arg2 intent:(id)arg3 sharedEntityResolution:(id)arg4 ;
-(id)_resultFromInferenceResult:(*void)arg0 query:(id)arg1 outputTokens:(*void)arg2 resolver:(*void)arg3 sharedEntityResolution:(id)arg4 ;
-(id)initWithLoadedModelConfiguration:(id)arg0 ;
-(id)predictionFromQuery:(id)arg0 error:(*id)arg1 ;
-(id)predictionFromQuery:(id)arg0 preprocessorOutput:(id)arg1 error:(*id)arg2 ;
-(struct UPInferenceResult )forwardWithSpanLabels:(struct UPGenericTensor )arg0 embeddings:(struct UPGenericTensor )arg1 utterance:(id)arg2 ;


@end


#endif