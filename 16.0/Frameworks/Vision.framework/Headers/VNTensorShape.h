// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNTENSORSHAPE_H
#define VNTENSORSHAPE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VNTensorShape : NSObject <NSCopying, NSSecureCoding>

 {
    vector<unsigned long, std::allocator<unsigned long>> _sizes;
}


@property (readonly, nonatomic) NSUInteger elementCount;
@property (readonly, nonatomic) NSUInteger rank;
@property (readonly, nonatomic) *NSUInteger sizes;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBatchNumber:(NSUInteger)arg0 channels:(NSUInteger)arg1 width:(NSUInteger)arg2 height:(NSUInteger)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImageChannels:(NSUInteger)arg0 width:(NSUInteger)arg1 height:(NSUInteger)arg2 ;
-(id)initWithPixelFormatType:(unsigned int)arg0 width:(NSUInteger)arg1 height:(NSUInteger)arg2 ;
-(id)initWithSizes:(*NSUInteger)arg0 count:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif