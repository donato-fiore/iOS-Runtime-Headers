// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSNOVDETECTOR_H
#define CSNOVDETECTOR_H


#import <Foundation/Foundation.h>


@interface CSNovDetector : NSObject {
    *void _novDetect;
}




-(id)_getAnalyzedResultFromNdresult:(struct _ndresult *)arg0 ;
-(id)getAnalyzedResultForPhId:(unsigned int)arg0 ;
-(id)getBestAnalyzedResult;
-(id)getOptionValue:(id)arg0 ;
-(id)getSuperVectorWithEndPoint:(NSUInteger)arg0 ;
-(id)initWithConfigPath:(id)arg0 resourcePath:(id)arg1 ;
-(unsigned int)numResultsAvailable;
-(void)analyzeWavData:(id)arg0 numSamples:(NSUInteger)arg1 ;
-(void)analyzeWavFloatData:(id)arg0 numSamples:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)reset;
-(void)resetBest;


@end


#endif