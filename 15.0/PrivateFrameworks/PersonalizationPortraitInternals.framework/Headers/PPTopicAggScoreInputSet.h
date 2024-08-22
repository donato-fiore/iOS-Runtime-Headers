// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPTOPICAGGSCOREINPUTSET_H
#define PPTOPICAGGSCOREINPUTSET_H



#import "PPBaseScoreInputSet.h"

@interface PPTopicAggScoreInputSet : PPBaseScoreInputSet



-(NSUInteger)arrayScoreIndexUpperBound;
-(NSUInteger)minArrayScoreIndex;
-(NSUInteger)minObjectScoreIndex;
-(NSUInteger)minScalarScoreIndex;
-(NSUInteger)objectScoreIndexUpperBound;
-(NSUInteger)scalarScoreIndexUpperBound;
-(NSUInteger)undefinedArrayScoreIndex;
-(NSUInteger)undefinedObjectScoreIndex;
-(NSUInteger)undefinedScalarScoreIndex;
-(id)nameForArrayScoreIndex:(NSUInteger)arg0 ;
-(id)nameForObjectScoreIndex:(NSUInteger)arg0 ;
-(id)nameForScalarScoreIndex:(NSUInteger)arg0 ;


@end


#endif