// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPLOCATIONAGGSCOREINPUTSET_H
#define PPLOCATIONAGGSCOREINPUTSET_H



#import "PPBaseScoreInputSet.h"

@interface PPLocationAggScoreInputSet : PPBaseScoreInputSet



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