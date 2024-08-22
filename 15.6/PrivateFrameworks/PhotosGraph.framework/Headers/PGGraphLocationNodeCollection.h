// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHLOCATIONNODECOLLECTION_H
#define PGGRAPHLOCATIONNODECOLLECTION_H

@class NSString;
@protocol PGGraphLocationOrAreaNodeCollection;


#import "PGGraphNodeCollection.h"
#import "PGGraphAddressNodeCollection.h"
#import "PGGraphFeatureNodeCollection.h"

@interface PGGraphLocationNodeCollection : PGGraphNodeCollection <PGGraphLocationOrAreaNodeCollection>



@property (readonly, nonatomic) PGGraphAddressNodeCollection *addressNodes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)nodeClass;
-(id)childLocationNodes;
-(id)deepChildLocationNodes;
-(id)deepChildLocationNodesWithLabel:(id)arg0 ;
-(id)deepParentLocationNodes;
-(id)deepParentLocationNodesWithLabel:(id)arg0 ;
-(id)nearestDeepChildLocationNodesWithLabel:(id)arg0 ;
-(id)nearestDeepNeighborWithLabel:(id)arg0 usingOutEdges:(BOOL)arg1 ;
-(id)nearestDeepParentLocationNodesWithLabel:(id)arg0 ;
-(id)parentLocationNodes;


@end


#endif