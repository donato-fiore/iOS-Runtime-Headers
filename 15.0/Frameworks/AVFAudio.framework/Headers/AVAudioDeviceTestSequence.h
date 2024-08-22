// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVAUDIODEVICETESTSEQUENCE_H
#define AVAUDIODEVICETESTSEQUENCE_H

@class NSString, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AVAudioDeviceTestProcessingChain.h"

@interface AVAudioDeviceTestSequence : NSObject <NSSecureCoding>



@property BOOL calculateCrossCorrelationPeak; // ivar: _calculateCrossCorrelationPeak
@property (retain, nonatomic) AVAudioDeviceTestProcessingChain *inputProcessingChain; // ivar: _inputProcessingChain
@property (retain) NSString *mode; // ivar: _mode
@property (nonatomic) NSInteger outputID; // ivar: _outputID
@property (nonatomic) NSInteger outputMode; // ivar: _outputMode
@property (retain, nonatomic) AVAudioDeviceTestProcessingChain *outputProcessingChain; // ivar: _outputProcessingChain
@property BOOL parallelCrossCorrelationCalculation; // ivar: _parallelCrossCorrelationCalculation
@property (nonatomic) NSInteger priority; // ivar: _priority
@property BOOL processSequenceAsynchronously; // ivar: _processSequenceAsynchronously
@property (retain, nonatomic) NSURL *stimulusURL; // ivar: _stimulusURL
@property (nonatomic) float volume; // ivar: _volume


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif