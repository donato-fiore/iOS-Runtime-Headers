// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDREFERENCECOLLECTION_H
#define EDREFERENCECOLLECTION_H



#import "EDCollection.h"

@interface EDReferenceCollection : EDCollection {
    BOOL mCoalesce;
}




+(id)coalesceCollection;
+(id)noCoalesceCollection;
-(BOOL)coalesceReferenceAtIndex1:(NSUInteger)arg0 index2:(NSUInteger)arg1 ;
-(NSUInteger)addObject:(id)arg0 ;
-(NSUInteger)countOfCellsBeingReferenced;
-(id)init;
-(id)initWihNoCoalesce;
-(id)referenceToCellWithIndex:(NSUInteger)arg0 byRow:(BOOL)arg1 ;
-(id)reverseReferencesByRow:(BOOL)arg0 ;
-(void)coalesce;
-(void)coalesceProgressiveCellReferencesCollection;
-(void)insertObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)replaceObjectAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;


@end


#endif