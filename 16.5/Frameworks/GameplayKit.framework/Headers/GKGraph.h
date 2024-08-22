// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKGRAPH_H
#define GKGRAPH_H

@class NSMutableArray, NSMutableDictionary, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GKGraph : NSObject <NSCopying, NSSecureCoding>

 {
    NSMutableArray *_nodes;
    *void _cGraph;
}


@property (retain, nonatomic) NSMutableDictionary *_info; // ivar: __info
@property (readonly, nonatomic) NSArray *nodes;


+(BOOL)supportsSecureCoding;
+(id)graph;
+(id)graphWithNodes:(id)arg0 ;
-(*void)cGraph;
-(*void)makeCGraph;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)findPathFromNode:(id)arg0 toNode:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNodes:(id)arg0 ;
-(void)addNodes:(id)arg0 ;
-(void)connectNodeToLowestCostNode:(id)arg0 bidirectional:(BOOL)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeNodes:(id)arg0 ;


@end


#endif