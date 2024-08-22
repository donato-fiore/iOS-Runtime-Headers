// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDLBUFFERVIEWALLOCATOR_H
#define MDLBUFFERVIEWALLOCATOR_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MDLBufferViewAllocator : NSObject <NSSecureCoding>

 {
    vector<__IOSurface *, std::allocator<__IOSurface *>> _sharedRegions;
    vector<bool, std::allocator<bool>> _owned;
    vector<long, std::allocator<long>> _regionIndices;
}




+(BOOL)supportsSecureCoding;
-(id)decodeBufferWithCoder:(id)arg0 forKey:(id)arg1 ;
-(id)decodeBuffersWithCoder:(id)arg0 forKey:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSharedRegionsNoCopy:(id)arg0 ;
-(id)newBufferViewAtRegionIndex:(NSInteger)arg0 ;
-(id)newBufferViewAtRegionIndex:(NSInteger)arg0 length:(NSInteger)arg1 offset:(NSInteger)arg2 ;
-(void)dealloc;
-(void)encodeBuffer:(id)arg0 withCoder:(id)arg1 forKey:(id)arg2 ;
-(void)encodeBuffers:(id)arg0 withCoder:(id)arg1 forKey:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif