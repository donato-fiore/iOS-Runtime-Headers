// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKGRAPHNODE_H
#define GKGRAPHNODE_H

@class NSMutableArray, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GKGraphNode : NSObject <NSSecureCoding>

 {
    NSMutableArray *_connectedNodes;
    *void _cGraphNode;
}


@property (readonly, nonatomic) NSArray *connectedNodes;


+(BOOL)supportsSecureCoding;
+(id)node;
-(*void)cGraphNode;
-(*void)makeCGraphNode;
-(float)costToNode:(id)arg0 ;
-(float)estimatedCostToNode:(id)arg0 ;
-(id)findPathFromNode:(id)arg0 ;
-(id)findPathToNode:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)mutConnectedNodes;
-(void)addConnection:(id)arg0 bidirectional:(BOOL)arg1 ;
-(void)addConnectionsToNodes:(id)arg0 bidirectional:(BOOL)arg1 ;
-(void)dealloc;
-(void)deleteCGraphNode;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeConnection:(id)arg0 ;
-(void)removeConnectionsToNodes:(id)arg0 bidirectional:(BOOL)arg1 ;


@end


#endif