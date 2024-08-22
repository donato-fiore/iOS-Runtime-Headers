// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGPHOTOSCHALLENGEPUBLICEVENTALGORITHMWRAPPER_H
#define PGPHOTOSCHALLENGEPUBLICEVENTALGORITHMWRAPPER_H

@class PHPhotoLibrary;

#import <Foundation/Foundation.h>

#import "PGGraph.h"

@interface PGPhotosChallengePublicEventAlgorithmWrapper : NSObject

@property (readonly, nonatomic) PGGraph *graph; // ivar: _graph
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary


-(id)initWithEvaluationContext:(id)arg0 ;
-(unsigned short)predictedQuestionStateForAssetUUID:(id)arg0 publicEventMUID:(NSUInteger)arg1 ;


@end


#endif