// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLHEAPDESCRIPTOR_H
#define MTLHEAPDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTLHeapDescriptor : NSObject <NSCopying>



@property (nonatomic) NSUInteger cpuCacheMode;
@property (nonatomic) NSUInteger hazardTrackingMode;
@property (nonatomic) NSUInteger resourceOptions;
@property (nonatomic) NSUInteger size;
@property (nonatomic) NSInteger sparsePageSize; // ivar: _sparsePageSize
@property (nonatomic) NSUInteger storageMode;
@property (nonatomic) NSInteger type;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif