// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ADIMAGEDESCRIPTOR_H
#define ADIMAGEDESCRIPTOR_H


#import <Foundation/Foundation.h>


@interface ADImageDescriptor : NSObject {
    unordered_map<ADLayout, CGSize, std::hash<ADLayout>, std::equal_to<ADLayout>, std::allocator<std::pair<const ADLayout, CGSize>>> _sizeForLayout;
}


@property (readonly, nonatomic) unsigned int pixelFormat; // ivar: _pixelFormat


+(id)descriptorForSupportedSizes:(id)arg0 pixelFormat:(unsigned int)arg1 ;
+(id)descriptorWithDefaultSize:(struct CGSize )arg0 pixelFormat:(unsigned int)arg1 ;
-(BOOL)supportsLayout:(NSUInteger)arg0 ;
-(NSUInteger)layoutForSize:(struct CGSize )arg0 ;
-(id)cloneWithDifferentFormat:(unsigned int)arg0 ;
-(id)initWithSupportedSizes:(id)arg0 pixelFormat:(unsigned int)arg1 ;
-(struct CGSize )sizeForLayout:(NSUInteger)arg0 ;


@end


#endif