// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VTNOVDETECTOR_H
#define VTNOVDETECTOR_H


#import <Foundation/Foundation.h>


@interface VTNovDetector : NSObject {
    *void _novDetect;
}




-(id)getAnalyzedResultForPhraseId:(unsigned int)arg0 ;
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