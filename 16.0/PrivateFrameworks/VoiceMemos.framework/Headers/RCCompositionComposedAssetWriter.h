// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RCCOMPOSITIONCOMPOSEDASSETWRITER_H
#define RCCOMPOSITIONCOMPOSEDASSETWRITER_H

@class AVAssetExportSession;

#import <Foundation/Foundation.h>

#import "RCWaveformDataSource.h"
#import "RCComposition.h"

@interface RCCompositionComposedAssetWriter : NSObject {
    AVAssetExportSession *_exportSession;
    RCWaveformDataSource *_waveformDataSource;
}


@property (nonatomic) BOOL canGenerateWaveform; // ivar: _canGenerateWaveform
@property (nonatomic) BOOL canGenerateWaveformByProcessingAVURL; // ivar: _canGenerateWaveformByProcessingAVURL
@property (nonatomic) BOOL canSaveCompositionMetadata; // ivar: _canSaveCompositionMetadata
@property (readonly, nonatomic) RCComposition *composition; // ivar: _composition
@property (readonly, nonatomic) float progress;


-(id)initWithComposition:(id)arg0 ;
-(void)_writeCompositionWaveformForFinalizedAssetFromFragmentsWithCompletionHandler:(id)arg0 ;
-(void)_writeCompositionWaveformForFinalizedAssetWithCompletionHandler:(id)arg0 ;
-(void)_writeCompositionWithCompletionHandler:(id)arg0 ;
-(void)cancel;
-(void)writeCompositionWithCompletionBlock:(id)arg0 ;


@end


#endif