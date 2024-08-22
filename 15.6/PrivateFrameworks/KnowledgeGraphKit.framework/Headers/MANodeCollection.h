// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MANODECOLLECTION_H
#define MANODECOLLECTION_H



#import "MAElementCollection.h"

@interface MANodeCollection : MAElementCollection



+(id)nodesMatchingFilter:(id)arg0 inGraph:(id)arg1 ;
+(id)nodesOfEdges:(id)arg0 ;
+(id)nodesRelatedToNodes:(id)arg0 withRelation:(id)arg1 ;
+(id)sourceNodesOfEdges:(id)arg0 ;
+(id)targetNodesOfEdges:(id)arg0 ;
-(BOOL)containsNode:(id)arg0 ;
-(id)anyNode;
-(id)debugDescription;
-(id)initWithNode:(id)arg0 ;
-(id)randomNode;
-(void)_enumerateUsingBlock:(id)arg0 ;
-(void)enumerateDoublePropertyValuesForKey:(id)arg0 withBlock:(id)arg1 ;
-(void)enumerateIntegerPropertyValuesForKey:(id)arg0 withBlock:(id)arg1 ;
-(void)enumerateNodesUsingBlock:(id)arg0 ;
-(void)enumerateStringPropertyValuesForKey:(id)arg0 withBlock:(id)arg1 ;
-(void)enumerateUnsignedIntegerPropertyValuesForKey:(id)arg0 withBlock:(id)arg1 ;


@end


#endif