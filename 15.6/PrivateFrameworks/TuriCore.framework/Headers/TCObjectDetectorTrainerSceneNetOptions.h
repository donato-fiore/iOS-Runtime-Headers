// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TCOBJECTDETECTORTRAINERSCENENETOPTIONS_H
#define TCOBJECTDETECTORTRAINERSCENENETOPTIONS_H


#import <Foundation/Foundation.h>


@interface TCObjectDetectorTrainerSceneNetOptions : NSObject

@property (nonatomic) NSInteger batchSize; // ivar: _batchSize
@property (nonatomic) NSInteger maxIterations; // ivar: _maxIterations
@property (nonatomic) NSInteger numClasses; // ivar: _numClasses
@property (nonatomic) NSInteger randomSeed; // ivar: _randomSeed


-(id)init;
-(struct Config )config;


@end


#endif