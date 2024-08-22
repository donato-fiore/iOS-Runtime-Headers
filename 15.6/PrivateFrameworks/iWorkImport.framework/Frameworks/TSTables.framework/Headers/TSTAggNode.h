// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTAGGNODE_H
#define TSTAGGNODE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "TSTAccumulator.h"
#import "TSTAggregator.h"
#import "TSTGroupNode.h"

@interface TSTAggNode : NSObject {
    TSCECellCoordSet _childrenCoordSet;
}


@property (retain, nonatomic) TSTAccumulator *accumulator; // ivar: _accumulator
@property (readonly, weak, nonatomic) TSTAggregator *aggregator; // ivar: _aggregator
@property (retain, nonatomic) NSMutableArray *children; // ivar: _children
@property (readonly, nonatomic) TSUCellCoord formulaCoord; // ivar: _formulaCoord
@property (readonly, nonatomic) unsigned char groupLevel; // ivar: _groupLevel
@property (weak, nonatomic) TSTGroupNode *groupNode; // ivar: _groupNode


-(id)description;
-(id)descriptionWithGroupBy:(id)arg0 ;
-(id)initWithArchive:(*void)arg0 aggregator:(id)arg1 ;
-(id)initWithFormulaCoord:(struct TSUCellCoord )arg0 groupNode:(id)arg1 aggregator:(id)arg2 ;
-(void)addChild:(id)arg0 ;
-(void)addChild:(id)arg0 skipWillModify:(BOOL)arg1 ;
-(void)clearAggFormulas:(id)arg0 inOwner:(struct TSKUIDStruct *)arg1 ;
-(void)encodeToArchive:(*void)arg0 ;
-(void)enumerateDirectChildren:(id)arg0 ;
-(void)unpackAfterUnarchiveForGroupBy:(id)arg0 ;
-(void)upgradeForNewAggregateTypes:(id)arg0 inOwner:(struct TSKUIDStruct *)arg1 ;


@end


#endif