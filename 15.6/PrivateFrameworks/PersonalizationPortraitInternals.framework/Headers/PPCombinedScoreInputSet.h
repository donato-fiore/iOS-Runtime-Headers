// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPCOMBINEDSCOREINPUTSET_H
#define PPCOMBINEDSCOREINPUTSET_H



#import "PPBaseScoreInputSet.h"

@interface PPCombinedScoreInputSet : PPBaseScoreInputSet



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