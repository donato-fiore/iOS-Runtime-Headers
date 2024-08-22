// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VMUDOMINATORGRAPH_H
#define VMUDOMINATORGRAPH_H

@class NSData;

#import <Foundation/Foundation.h>

#import "VMUGraphEnumerator.h"

@interface VMUDominatorGraph : NSObject {
    VMUGraphEnumerator *_reverseGraphEnumerator;
}


@property (nonatomic) *unsigned int dominators; // ivar: _dominators
@property (retain, nonatomic) NSData *dominators_data; // ivar: _dominators_data
@property (nonatomic) *unsigned int firstDominates; // ivar: _firstDominates
@property (retain, nonatomic) NSData *firstDominates_data; // ivar: _firstDominates_data
@property (nonatomic) *unsigned int nextDominates; // ivar: _nextDominates
@property (retain, nonatomic) NSData *nextDominates_data; // ivar: _nextDominates_data
@property (nonatomic) unsigned int nodeNamespaceSize; // ivar: _nodeNamespaceSize


+(id)callTreeWithGraph:(id)arg0 groupByType:(BOOL)arg1 showRegionVirtualSize:(BOOL)arg2 desiredAddress:(id)arg3 debugTimer:(id)arg4 ;
+(id)callTreeWithGraph:(id)arg0 groupByType:(BOOL)arg1 showRegionVirtualSize:(BOOL)arg2 desiredClassesPattern:(id)arg3 debugTimer:(id)arg4 ;
+(id)consolidate:(id)arg0 ;
-(BOOL)hasAnyDirectDomineesForNodeName:(unsigned int)arg0 ;
-(id)_computeDominators:(id)arg0 roots:(*void)arg1 reversePostOrder:(*unsigned int)arg2 debugTimer:(id)arg3 ;
-(id)copyDict;
-(id)export:(id)arg0 ;
// -(id)fastDFS:(id)arg0 graph:(unk)arg1  ;
-(id)initWithDict:(id)arg0 ;
-(id)initWithGraph:(id)arg0 ;
-(id)initWithGraph:(id)arg0 debugTimer:(id)arg1 ;
-(id)iterDirectDomineesForNodeName:(unsigned int)arg0 ;
-(id)iterDominatorRoots;
-(unsigned int)dominator:(unsigned int)arg0 ;
-(void)_computeDominees:(id)arg0 ;
-(void)enumerateDirectDomineesForNodeName:(unsigned int)arg0 withBlock:(id)arg1 ;
-(void)enumerateDominatorRootsWithBlock:(id)arg0 ;
-(void)enumerateDomineesForNodeName:(unsigned int)arg0 withBlock:(id)arg1 ;


@end


#endif