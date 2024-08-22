// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPBASESCOREINPUTSET_H
#define PPBASESCOREINPUTSET_H

@class _PASLock;

#import <Foundation/Foundation.h>


@interface PPBaseScoreInputSet : NSObject {
    _PASLock *_scalarMap;
    _PASLock *_arrayMap;
    _PASLock *_objectMap;
}




-(NSUInteger)arrayScoreIndexUpperBound;
-(NSUInteger)indexForArrayScoreName:(id)arg0 ;
-(NSUInteger)indexForObjectScoreName:(id)arg0 ;
-(NSUInteger)indexForScalarScoreName:(id)arg0 ;
-(NSUInteger)minArrayScoreIndex;
-(NSUInteger)minObjectScoreIndex;
-(NSUInteger)minScalarScoreIndex;
-(NSUInteger)objectScoreIndexUpperBound;
-(NSUInteger)scalarScoreIndexUpperBound;
-(NSUInteger)undefinedArrayScoreIndex;
-(NSUInteger)undefinedObjectScoreIndex;
-(NSUInteger)undefinedScalarScoreIndex;
-(id)init;
-(id)nameForArrayScoreIndex:(NSUInteger)arg0 ;
-(id)nameForObjectScoreIndex:(NSUInteger)arg0 ;
-(id)nameForScalarScoreIndex:(NSUInteger)arg0 ;


@end


#endif