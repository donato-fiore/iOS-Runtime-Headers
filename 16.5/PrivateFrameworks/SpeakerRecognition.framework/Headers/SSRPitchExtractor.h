// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSRPITCHEXTRACTOR_H
#define SSRPITCHEXTRACTOR_H

@class NSString, EARAudioResultsGenerator;
@protocol EARAudioResultsGeneratorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SSRPitchExtractor : NSObject <EARAudioResultsGeneratorDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) EARAudioResultsGenerator *resultsGenerator; // ivar: _resultsGenerator
@property (readonly) Class superclass;


-(float)_getPitchHzFromRawData:(float)arg0 ;
-(float)_getVoicingProbFromRawData:(float)arg0 ;
-(float)_getVoicingWeightedPitchForResultMatrix:(id)arg0 ;
-(float)getPitchForUtteranceAudioFiles:(id)arg0 ;
-(id)initWithAsset:(id)arg0 ;
-(void)_processAudioFileURL:(id)arg0 ;


@end


#endif