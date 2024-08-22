// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EARAUDIORESULT_H
#define EARAUDIORESULT_H

@class NSData;

#import <Foundation/Foundation.h>


@interface EARAudioResult : NSObject

@property (retain, nonatomic) NSData *audioResultMat; // ivar: _audioResultMat
@property (nonatomic) NSUInteger audioResultsNumVectors; // ivar: _audioResultsNumVectors
@property (nonatomic) NSUInteger audioResultsVectorSize; // ivar: _audioResultsVectorSize


-(id)initWithAudioResultMat:(id)arg0 vectorSize:(NSUInteger)arg1 numVectors:(NSUInteger)arg2 ;


@end


#endif