// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKGRAPHNODE3D_H
#define GKGRAPHNODE3D_H



#import "GKGraphNode.h"

@interface GKGraphNode3D : GKGraphNode {
    *void _cGraphNode3D;
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