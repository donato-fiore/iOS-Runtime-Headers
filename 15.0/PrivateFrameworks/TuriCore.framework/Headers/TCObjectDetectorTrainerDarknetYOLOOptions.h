// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TCOBJECTDETECTORTRAINERDARKNETYOLOOPTIONS_H
#define TCOBJECTDETECTORTRAINERDARKNETYOLOOPTIONS_H


#import <Foundation/Foundation.h>


@interface TCObjectDetectorTrainerDarknetYOLOOptions : NSObject

@property (nonatomic) NSInteger batchSize; // ivar: _batchSize
@property (nonatomic) NSInteger maxIterations; // ivar: _maxIterations
@property (nonatomic) NSInteger numClasses; // ivar: _numClasses
@property (nonatomic) NSInteger outputHeight; // ivar: _outputHeight
@property (nonatomic) NSInteger outputWidth; // ivar: _outputWidth
@property (nonatomic) NSInteger randomSeed; // ivar: _randomSeed


-(id)init;
-(struct Config )config;


@end


#endif