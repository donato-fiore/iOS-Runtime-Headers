// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KGNODECOLLECTION_H
#define KGNODECOLLECTION_H



#import "KGElementCollection.h"

@interface KGNodeCollection : KGElementCollection



-(id)allObjects;
-(void)enumerateElementsWithBatchSize:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateNodesSortedByFloatPropertyForName:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateNodesSortedByIntegerPropertyForName:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateNodesSortedByStringPropertyForName:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateNodesUsingBlock:(id)arg0 ;
-(void)enumerateOrderedNodes:(id)arg0 withBatchSize:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)enumeratePropertyValuesForKey:(id)arg0 withBlock:(id)arg1 ;


@end


#endif