// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KGEDGECOLLECTION_H
#define KGEDGECOLLECTION_H



#import "KGElementCollection.h"

@interface KGEdgeCollection : KGElementCollection



-(id)allObjects;
-(void)enumerateEdgesSortedByFloatPropertyForName:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateEdgesSortedByIntegerPropertyForName:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateEdgesSortedByStringPropertyForName:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateEdgesUsingBlock:(id)arg0 ;
-(void)enumerateElementsWithBatchSize:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateOrderedEdges:(id)arg0 withBatchSize:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)enumeratePropertyValuesForKey:(id)arg0 withBlock:(id)arg1 ;


@end


#endif