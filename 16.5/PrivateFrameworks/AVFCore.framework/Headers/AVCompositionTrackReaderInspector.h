// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCOMPOSITIONTRACKREADERINSPECTOR_H
#define AVCOMPOSITIONTRACKREADERINSPECTOR_H



#import "AVTrackReaderInspector.h"

@interface AVCompositionTrackReaderInspector : AVTrackReaderInspector {
    *OpaqueFigMutableComposition _figMutableComposition;
}


@property (readonly, nonatomic, getter=_mutableComposition) *OpaqueFigMutableComposition mutableComposition;


-(BOOL)isDecodable;
-(BOOL)isPlayable;
-(id)_initWithAsset:(id)arg0 trackID:(int)arg1 trackIndex:(NSInteger)arg2 ;
-(id)segmentForTrackTime:(struct ? )arg0 ;
-(id)segments;
-(int)decodabilityValidationResult;
-(int)playabilityValidationResult;
-(struct OpaqueFigSampleCursorService *)_getFigSampleCursorServiceReportingTimeAccuracy:(*BOOL)arg0 ;
-(void)dealloc;


@end


#endif