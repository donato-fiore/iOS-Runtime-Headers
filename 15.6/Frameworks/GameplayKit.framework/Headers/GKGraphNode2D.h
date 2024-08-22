// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKGRAPHNODE2D_H
#define GKGRAPHNODE2D_H



#import "GKGraphNode.h"

@interface GKGraphNode2D : GKGraphNode {
    *void _cGraphNode2D;
}


@property ? position;


+(id)nodeWithPoint;
-(float)costToNode:(id)arg0 ;
-(float)estimatedCostToNode:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPoint;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif