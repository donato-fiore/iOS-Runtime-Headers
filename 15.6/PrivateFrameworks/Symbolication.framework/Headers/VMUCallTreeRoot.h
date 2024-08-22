// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VMUCALLTREEROOT_H
#define VMUCALLTREEROOT_H

@class NSArray, NSMutableSet, NSMapTable, NSString;
@protocol VMUStackLogReader;


#import "VMUCallTreeNode.h"
#import "VMUSampler.h"

@interface VMUCallTreeRoot : VMUCallTreeNode {
    _CSTypeRef _symbolicator;
    id<VMUStackLogReader> *_stackLogReader;
    NSArray *_vmRegions;
    NSUInteger _cambriaRuntimeObjectID;
    VMUSampler *_sampler;
    NSUInteger _options;
    NSMutableSet *_uniqueNodeNames;
    NSMapTable *_addressToSymbolNameMap;
    NSMapTable *_addressToLeafSymbolNameMap;
    NSMapTable *_threadPortToNameMap;
    NSArray *_binaryImages;
}


@property (copy, nonatomic) NSString *binaryImagesDescription; // ivar: _binaryImagesDescription


-(id)addBacktrace:(id)arg0 ;
-(id)addBacktrace:(id)arg0 count:(unsigned int)arg1 numBytes:(NSUInteger)arg2 ;
-(id)addChildWithName:(id)arg0 address:(NSUInteger)arg1 count:(unsigned int)arg2 numBytes:(NSUInteger)arg3 toNode:(id)arg4 ;
-(id)addUniqueChildWithName:(id)arg0 address:(NSUInteger)arg1 count:(unsigned int)arg2 numBytes:(NSUInteger)arg3 toNode:(id)arg4 ;
-(id)addUniqueChildWithName:(id)arg0 address:(NSUInteger)arg1 count:(unsigned int)arg2 numBytes:(NSUInteger)arg3 toNode:(id)arg4 isLeafNode:(BOOL)arg5 ;
-(id)chargeSystemLibrariesToCallersAndKeepBoundaries:(BOOL)arg0 ;
-(id)descriptionStringForAddress:(NSUInteger)arg0 atTime:(NSUInteger)arg1 leafFrame:(BOOL)arg2 startOfRecursion:(BOOL)arg3 ;
-(id)initWithCallGraphFile:(id)arg0 fileHeader:(*id)arg1 topFunctionsList:(*id)arg2 binaryImagesList:(*id)arg3 ;
-(id)initWithSymbolicator:(struct _CSTypeRef )arg0 sampler:(id)arg1 options:(NSUInteger)arg2 ;
-(void)addChildCountsIntoNode;
-(void)allBacktracesHaveBeenAdded;
-(void)dealloc;
-(void)setCambriaRuntimeVMObjectID:(NSUInteger)arg0 ;
-(void)setStackLogReader:(id)arg0 ;
-(void)setVMRegions:(id)arg0 ;


@end


#endif