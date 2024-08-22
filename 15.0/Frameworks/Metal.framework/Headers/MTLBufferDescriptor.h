// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLBUFFERDESCRIPTOR_H
#define MTLBUFFERDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTLBufferDescriptor : NSObject <NSCopying>



@property (nonatomic) *void contents; // ivar: _contents
@property (nonatomic) NSUInteger cpuCacheMode;
@property (nonatomic) id *deallocator; // ivar: _deallocator
@property (nonatomic) NSUInteger hazardTrackingMode;
@property (nonatomic) NSUInteger length; // ivar: _length
@property (nonatomic) BOOL noCopy; // ivar: _noCopy
@property (nonatomic) NSUInteger parentGPUAddress; // ivar: _parentGPUAddress
@property (nonatomic) NSUInteger parentGPUSize; // ivar: _parentGPUSize
@property (nonatomic) NSUInteger pinnedGPUAddress; // ivar: _pinnedGPUAddress
@property (nonatomic) NSUInteger resourceOptions; // ivar: _resourceOptions
@property (nonatomic) NSUInteger storageMode;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif