// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCEREGIONALLOCATOR_H
#define TSCEREGIONALLOCATOR_H


#import <Foundation/Foundation.h>


@interface TSCERegionAllocator : NSObject {
    *TSCERegionNode _head;
    *TSCERegionNode _curBlock;
    unsigned int _blockOffset;
    vector<TSCEASTNodeArray *, std::allocator<TSCEASTNodeArray *>> _managedNodeArrays;
}




-(*void)malloc:(NSUInteger)arg0 ;
-(id)initWithInitialCapacity:(NSUInteger)arg0 ;
-(struct TSCEASTNodeArray *)managedNodeArrayWithCapacity:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)reset;


@end


#endif