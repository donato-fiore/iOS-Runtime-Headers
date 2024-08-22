// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNMPCLUSTERINGTREENODEWRAPPER_H
#define VNMPCLUSTERINGTREENODEWRAPPER_H


#import <Foundation/Foundation.h>


@interface VNMPClusteringTreeNodeWrapper : NSObject

@property BOOL freeNodeOnDealloc; // ivar: _freeNodeOnDealloc
@property *void node; // ivar: _node


-(float)avgDistance;
-(float)distance;
-(id)descriptor;
-(id)getLeafNodes;
-(id)initWithNode:(*void)arg0 freeNodeOnDealloc:(BOOL)arg1 ;
-(id)left;
-(id)right;
-(int)leafsCount;
-(void)dealloc;


@end


#endif