// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TCHUMANACTIONRECOGNITIONTRAINERSTGCNOPTIONS_H
#define TCHUMANACTIONRECOGNITIONTRAINERSTGCNOPTIONS_H


#import <Foundation/Foundation.h>


@interface TCHumanActionRecognitionTrainerSTGCNOptions : NSObject

@property (nonatomic) NSInteger batchSize; // ivar: _batchSize
@property (nonatomic) float dropoutProbability; // ivar: _dropoutProbability
@property (nonatomic) NSInteger numClasses; // ivar: _numClasses
@property (nonatomic) NSInteger numFrames; // ivar: _numFrames
@property (nonatomic) NSInteger numKeypoints; // ivar: _numKeypoints


-(id)init;
-(void)validate;


@end


#endif