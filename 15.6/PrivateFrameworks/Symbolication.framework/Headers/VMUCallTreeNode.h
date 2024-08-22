// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VMUCALLTREENODE_H
#define VMUCALLTREENODE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "VMUCallTreeNode.h"

@interface VMUCallTreeNode : NSObject {
    VMUCallTreeNode *_parent;
    NSString *_name;
    NSUInteger _address;
    NSUInteger _numBytes;
    unsigned int _count;
    unsigned int _numChildren;
    *void _children;
}




+(id)makeFakeRootForNode:(id)arg0 ;
+(id)nodeWithName:(id)arg0 address:(NSUInteger)arg1 count:(unsigned int)arg2 numBytes:(NSUInteger)arg3 ;
+(id)rootForSamples:(id)arg0 symbolicator:(struct _CSTypeRef )arg1 ;
+(id)rootForSamples:(id)arg0 symbolicator:(struct _CSTypeRef )arg1 sampler:(id)arg2 options:(NSUInteger)arg3 ;
-(BOOL)callTreeHasBranches;
-(BOOL)isMallocBlockContentNode;
-(BOOL)isPseudo;
-(BOOL)symbolNameIsUnknown;
-(NSInteger)compare:(id)arg0 ;
-(NSInteger)comparePuttingMainThreadFirst:(id)arg0 ;
-(NSInteger)comparePuttingRetainCycleNodesAtTop:(id)arg0 ;
-(NSInteger)compareSizeAndCount:(id)arg0 ;
-(NSUInteger)address;
-(NSUInteger)numBytes;
-(id)allChildren;
-(id)browserName;
-(id)chargeLibrariesInSet:(id)arg0 toCaller:(id)arg1 parentLibrary:(id)arg2 ;
-(id)chargeLibrariesToCallers:(id)arg0 keepBoundaries:(BOOL)arg1 ;
-(id)chargeSystemLibrariesToCallersAndKeepBoundaries:(BOOL)arg0 ;
-(id)childAtIndex:(unsigned int)arg0 ;
-(id)description;
-(id)filterOutSymbols:(id)arg0 ;
-(id)filterOutSymbols:(id)arg0 required:(id)arg1 ;
-(id)findOrAddChildWithName:(id)arg0 address:(NSUInteger)arg1 ;
-(id)findOrAddChildWithName:(id)arg0 address:(NSUInteger)arg1 nodeSearchType:(int)arg2 isLeafNode:(BOOL)arg3 ;
-(id)fullOutputWithThreshold:(unsigned int)arg0 ;
-(id)fullOutputWithThreshold:(unsigned int)arg0 showPseudoNodes:(BOOL)arg1 ;
-(id)initWithName:(id)arg0 address:(NSUInteger)arg1 count:(unsigned int)arg2 numBytes:(NSUInteger)arg3 ;
-(id)invertedNode;
-(id)largestTopOfStackPath;
-(id)name;
-(id)nameWithStringsForSymbol:(id)arg0 library:(id)arg1 loadAddress:(id)arg2 offset:(id)arg3 address:(id)arg4 suffix:(id)arg5 ;
-(id)nameWithoutOffset;
-(id)parent;
-(id)pruneCount:(unsigned int)arg0 ;
-(id)pruneMallocSize:(NSUInteger)arg0 ;
-(id)pseudoName;
-(id)pseudoNodeTopOfStackChild;
-(id)sortedChildren;
-(id)sortedChildrenWithPseudoNode;
-(id)sortedChildrenWithPseudoNode:(id)arg0 withCompare:(SEL)arg1 ;
-(id)stringFromCallTreeIndentIfNoBranches:(BOOL)arg0 ;
-(id)stringFromCallTreeIndentIfNoBranches:(BOOL)arg0 showPseudoNodes:(BOOL)arg1 ;
-(id)stringFromCallTreeWithOptions:(NSUInteger)arg0 ;
-(unsigned int)count;
-(unsigned int)numChildren;
-(unsigned int)sumOfChildCounts;
-(void)_printCallTreeToFile:(struct __sFILE *)arg0 cumulativeOutput:(id)arg1 indentString:(id)arg2 branchPointCount:(unsigned int)arg3 topFunctions:(id)arg4 options:(NSUInteger)arg5 ;
-(void)addChild:(id)arg0 ;
-(void)countFunctionOccurrencesInTree:(id)arg0 ;
-(void)dealloc;
-(void)getBrowserName:(id)arg0 ;
-(void)parseNameIntoSymbol:(*id)arg0 library:(*id)arg1 loadAddress:(*NSUInteger)arg2 offset:(*NSUInteger)arg3 address:(*NSUInteger)arg4 suffix:(*id)arg5 ;
-(void)printCallTree;
-(void)printCallTreeToFile:(struct __sFILE *)arg0 ;
-(void)printCallTreeToFile:(struct __sFILE *)arg0 cumulativeOutput:(id)arg1 options:(NSUInteger)arg2 ;
-(void)setChildren:(id)arg0 ;


@end


#endif