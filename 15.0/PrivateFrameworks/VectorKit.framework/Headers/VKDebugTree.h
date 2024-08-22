// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKDEBUGTREE_H
#define VKDEBUGTREE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface VKDebugTree : NSObject {
    DebugTreeNode _debugTree;
    bitset<4> _options;
    NSArray *_nodes;
}




-(*void)internalData;
-(BOOL)deserializeTree:(id)arg0 ;
-(BOOL)deserializeZippedTree:(id)arg0 ;
-(id)_serializeNode:(*void)arg0 ;
-(id)_serializeProperty:(*void)arg0 ;
-(id)_serializeValue:(*void)arg0 ;
-(id)logTree;
-(id)nodes;
-(id)serializeTree;
-(id)serializeZippedTree;
-(struct optional<gdc::DebugTreeNode> )_deserializeNode:(id)arg0 ;
-(struct optional<gdc::DebugTreeProperty> )_deserializeProperty:(id)arg0 ;
-(struct optional<gdc::DebugTreeValue> )_deserializeValue:(id)arg0 ;
-(void)_outputTree:(*void)arg0 ;
-(void)_populateData;
-(void)dealloc;
-(void)disableAllOptions;
-(void)enableAllOptions;
-(void)populateData:(id)arg0 ;
-(void)printTree;
-(void)replaceInternalData:(*void)arg0 ;
-(void)setOption:(NSUInteger)arg0 value:(BOOL)arg1 ;
-(void)setOptions:(id)arg0 ;


@end


#endif