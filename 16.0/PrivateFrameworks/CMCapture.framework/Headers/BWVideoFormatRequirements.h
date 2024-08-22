// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWVIDEOFORMATREQUIREMENTS_H
#define BWVIDEOFORMATREQUIREMENTS_H

@class NSDictionary, NSArray;
@protocol NSSecureCoding;


#import "BWFormatRequirements.h"

@interface BWVideoFormatRequirements : BWFormatRequirements <NSSecureCoding>



@property (nonatomic) NSUInteger bytesPerRowAlignment; // ivar: _bytesPerRowAlignment
@property (nonatomic) NSUInteger height; // ivar: _height
@property (nonatomic) NSUInteger heightAlignment; // ivar: _heightAlignment
@property (nonatomic) BOOL memoryPoolUseAllowed; // ivar: _memoryPoolUseAllowed
@property (readonly, nonatomic) NSDictionary *pixelBufferAttributes;
@property (nonatomic) NSUInteger planeAlignment; // ivar: _planeAlignment
@property (copy, nonatomic) NSArray *preferredPixelFormats; // ivar: _preferredPixelFormats
@property (nonatomic) BOOL prewireBuffers; // ivar: _prewireBuffers
@property (copy, nonatomic) NSArray *supportedCacheModes; // ivar: _supportedCacheModes
@property (copy, nonatomic) NSArray *supportedColorSpaceProperties; // ivar: _supportedColorSpaceProperties
@property (copy, nonatomic) NSArray *supportedPixelFormats; // ivar: _supportedPixelFormats
@property (nonatomic) NSUInteger width; // ivar: _width
@property (nonatomic) NSUInteger widthAlignment; // ivar: _widthAlignment


+(BOOL)supportsSecureCoding;
+(id)cacheModesForCacheProfile:(int)arg0 ;
+(id)cacheModesForOptimizedCPUAccess;
+(id)cacheModesForOptimizedDisplayAccess;
+(id)cacheModesForOptimizedHWAccess;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(Class)formatClass;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPixelBufferAttributes:(id)arg0 ;
-(unsigned int)mediaType;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif