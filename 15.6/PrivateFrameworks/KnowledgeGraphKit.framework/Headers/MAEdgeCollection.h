// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAEDGECOLLECTION_H
#define MAEDGECOLLECTION_H



#import "MAElementCollection.h"

@interface MAEdgeCollection : MAElementCollection



+(id)edgesFromNodes:(id)arg0 matchingFilter:(id)arg1 ;
+(id)edgesFromNodes:(id)arg0 toNodes:(id)arg1 matchingFilter:(id)arg2 ;
+(id)edgesMatchingFilter:(id)arg0 inGraph:(id)arg1 ;
+(id)edgesOfType:(NSUInteger)arg0 betweenNodes:(id)arg1 andNodes:(id)arg2 matchingFilter:(id)arg3 ;
+(id)edgesOfType:(NSUInteger)arg0 onNodes:(id)arg1 matchingFilter:(id)arg2 ;
+(id)edgesToNodes:(id)arg0 matchingFilter:(id)arg1 ;
-(BOOL)containsEdge:(id)arg0 ;
-(id)anyEdge;
-(id)initWithEdge:(id)arg0 ;
-(id)randomEdge;
-(void)_enumerateUsingBlock:(id)arg0 ;
-(void)enumerateDoublePropertyValuesForKey:(id)arg0 withBlock:(id)arg1 ;
-(void)enumerateEdgesUsingBlock:(id)arg0 ;
-(void)enumerateIntegerPropertyValuesForKey:(id)arg0 withBlock:(id)arg1 ;
-(void)enumerateStringPropertyValuesForKey:(id)arg0 withBlock:(id)arg1 ;
-(void)enumerateUnsignedIntegerPropertyValuesForKey:(id)arg0 withBlock:(id)arg1 ;


@end


#endif