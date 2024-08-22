// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KGLABELBASEDENTITYFACTORY_H
#define KGLABELBASEDENTITYFACTORY_H

@class NSMutableDictionary;
@protocol KGEntityFactory;

#import <Foundation/Foundation.h>


@interface KGLabelBasedEntityFactory : NSObject <KGEntityFactory>

 {
    NSMutableDictionary *_classByNodeLabels;
    NSMutableDictionary *_classByEdgeLabels;
}


@property (retain, nonatomic) Class defaultEdgeClass; // ivar: _defaultEdgeClass
@property (retain, nonatomic) Class defaultNodeClass; // ivar: _defaultNodeClass


-(Class)_selectClassFromPossibleLabels:(id)arg0 dictionary:(id)arg1 ;
-(Class)classForEdgeLabels:(id)arg0 ;
-(Class)classForNodeLabels:(id)arg0 ;
-(id)_generateAllPossibleLabelSetsForLabels:(id)arg0 labelSetsCache:(id)arg1 ;
-(id)edgeWithIdentifier:(NSUInteger)arg0 labels:(id)arg1 weight:(float)arg2 properties:(id)arg3 sourceNode:(id)arg4 targetNode:(id)arg5 ;
-(id)init;
-(id)nodeWithIdentifier:(NSUInteger)arg0 labels:(id)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(void)registerEdgeClass:(Class)arg0 forLabels:(id)arg1 ;
-(void)registerNodeClass:(Class)arg0 forLabels:(id)arg1 ;


@end


#endif