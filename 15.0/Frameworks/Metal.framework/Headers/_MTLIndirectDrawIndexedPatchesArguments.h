// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MTLINDIRECTDRAWINDEXEDPATCHESARGUMENTS_H
#define _MTLINDIRECTDRAWINDEXEDPATCHESARGUMENTS_H


#import <Foundation/Foundation.h>


@interface _MTLIndirectDrawIndexedPatchesArguments : NSObject {
    NSUInteger _patchIndexBufferOffset;
    NSUInteger _controlPointIndexBufferOffset;
}


@property (nonatomic) NSUInteger baseInstance; // ivar: _baseInstance
@property (nonatomic) *void controlPointIndexBufferVirtualAddress; // ivar: _controlPointIndexBufferVirtualAddress
@property (nonatomic) NSUInteger instanceCount; // ivar: _instanceCount
@property (nonatomic) NSUInteger numberOfPatchControlPoints; // ivar: _numberOfPatchControlPoints
@property (nonatomic) NSUInteger patchCount; // ivar: _patchCount
@property (nonatomic) *void patchIndexBufferVirtualAddress; // ivar: _patchIndexBufferVirtualAddress
@property (nonatomic) NSUInteger patchStart; // ivar: _patchStart




@end


#endif