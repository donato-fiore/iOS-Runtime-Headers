// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUCOLORSPACE_H
#define NUCOLORSPACE_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface NUColorSpace : NSObject

@property (readonly, nonatomic) *CGColorSpace CGColorSpace; // ivar: _CGColorSpace
@property (readonly, nonatomic) NSDictionary *cvPixelBufferAttachments;
@property (readonly, nonatomic) NSString *descriptionName; // ivar: _descriptionName
@property (readonly, nonatomic) NSString *name;


+(id)_loadICCProfileDataWithIdentifier:(id)arg0 ;
+(id)adobeRGBColorSpace;
+(id)colorSpaceFromColorPrimaries:(id)arg0 transferFunction:(id)arg1 yccMatrix:(id)arg2 ;
+(id)colorSpaceFromVideoColorProperties:(id)arg0 ;
+(id)displayP3ColorSpace;
+(id)displayP3LinearColorSpace;
+(id)extendedSRGBLinearColorSpace;
+(id)genericGrayColorSpace;
+(id)genericGrayGamma2_2ColorSpace;
+(id)genericRGBColorSpace;
+(id)genericRGBLinearColorSpace;
+(id)itur2100HLGColorSpace;
+(id)rec709ColorSpace;
+(id)sRGBColorSpace;
+(id)sRGBLinearColorSpace;
+(id)workingColorSpace;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isHDR;
-(BOOL)isWideGamut;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCGColorSpace:(struct CGColorSpace *)arg0 ;
-(id)initWithCGColorSpace:(struct CGColorSpace *)arg0 descriptionName:(id)arg1 ;
-(id)initWithICCProfileData:(id)arg0 descriptionName:(id)arg1 ;
-(void)applyAttachmentsToCVPixelBuffer:(struct __CVBuffer *)arg0 ;
-(void)dealloc;
-(void)nu_updateDigest:(id)arg0 ;


@end


#endif