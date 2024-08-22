// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPSOUNDDETECTOR_H
#define VCPSOUNDDETECTOR_H

@class NSMutableArray, NSString;
@protocol SNResultsObserving;

#import <Foundation/Foundation.h>


@interface VCPSoundDetector : NSObject <SNResultsObserving>

 {
    NSMutableArray *_results;
    ? _activeStart;
    ? _activeEnd;
    int _length;
    float _sampleRate;
    ? _trackStart;
    float _activeConfidence;
    float _threshold;
    int _minDetections;
    NSString *_resultsKey;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithTrackStart:(struct ? )arg0 threshold:(float)arg1 resultsKey:(id)arg2 ;
-(id)results;
-(int)finalizeAnalysisAtTime:(struct ? *)arg0 ;
-(void)addDetectionFromTime:(struct ? *)arg0 toTime:(struct ? *)arg1 confidence:(float)arg2 ;
-(void)request:(id)arg0 didProduceResult:(id)arg1 ;


@end


#endif