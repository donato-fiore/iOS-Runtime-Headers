// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RCWAVEFORMSEGMENTACCUMULATOR_H
#define RCWAVEFORMSEGMENTACCUMULATOR_H

@class NSString, NSMutableArray;
@protocol RCWaveformGeneratorSegmentOutputObserver;

#import <Foundation/Foundation.h>

#import "RCWaveformGenerator.h"

@interface RCWaveformSegmentAccumulator : NSObject <RCWaveformGeneratorSegmentOutputObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL finishedSuccessfully; // ivar: _finishedSuccessfully
@property (retain, nonatomic) RCWaveformGenerator *generator; // ivar: _generator
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *segments; // ivar: _segments
@property (readonly) Class superclass;


-(BOOL)waitUntilFinished;
-(id)initWithWaveformGenerator:(id)arg0 ;
-(void)dealloc;
-(void)waveformGenerator:(id)arg0 didLoadWaveformSegment:(id)arg1 ;
-(void)waveformGeneratorDidFinishLoading:(id)arg0 error:(id)arg1 ;
-(void)waveformGeneratorWillBeginLoading:(id)arg0 ;


@end


#endif