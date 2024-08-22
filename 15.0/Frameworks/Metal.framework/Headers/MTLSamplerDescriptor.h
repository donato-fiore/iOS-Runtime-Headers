// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLSAMPLERDESCRIPTOR_H
#define MTLSAMPLERDESCRIPTOR_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTLSamplerDescriptor : NSObject <NSCopying>



@property (nonatomic) NSUInteger borderColor;
@property (nonatomic) NSUInteger compareFunction;
@property (nonatomic) BOOL forceResourceIndex;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) BOOL lodAverage; // ivar: _lodAverage
@property (nonatomic) float lodMaxClamp;
@property (nonatomic) float lodMinClamp;
@property (nonatomic) NSUInteger magFilter;
@property (nonatomic) NSUInteger maxAnisotropy;
@property (nonatomic) NSUInteger minFilter;
@property (nonatomic) NSUInteger mipFilter;
@property (nonatomic) BOOL normalizedCoordinates;
@property (nonatomic) NSUInteger pixelFormat;
@property (nonatomic) NSUInteger rAddressMode;
@property (nonatomic) NSUInteger resourceIndex;
@property (nonatomic) NSUInteger sAddressMode;
@property (nonatomic) BOOL supportArgumentBuffers;
@property (nonatomic) NSUInteger tAddressMode;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif