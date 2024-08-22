// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNVCARDMUTABLEIMAGE_H
#define CNVCARDMUTABLEIMAGE_H

@class NSNumber, NSDictionary, NSData, NSValue;


#import "CNVCardImage.h"

@interface CNVCardMutableImage : CNVCardImage

@property (readonly, nonatomic) *CGImage CGImage; // ivar: _CGImage
@property (readonly, nonatomic) BOOL attemptedCGImage; // ivar: _attemptedCGImage
@property (copy, nonatomic) NSNumber *compressionQuality; // ivar: _compressionQuality
@property (readonly, nonatomic) NSDictionary *originalCropRects; // ivar: _originalCropRects
@property (readonly, copy, nonatomic) NSData *originalData; // ivar: _originalData
@property (readonly, nonatomic) CGSize originalSize; // ivar: _originalSize
@property (nonatomic) CGSize size;
@property (nonatomic) *__CFString sourceImageFormatUTI; // ivar: _sourceImageFormatUTI
@property (copy, nonatomic) NSValue *targetSizeValue; // ivar: _targetSizeValue


+(id)CGImageCreateWithData:(id)arg0 maxSizeValue:(id)arg1 ;
+(id)scaleCropRects:(id)arg0 factor:(CGFloat)arg1 ;
+(struct CGRect )scaleRect:(struct CGRect )arg0 byFactor:(CGFloat)arg1 ;
-(BOOL)hasAlphaChannel;
-(BOOL)isSourceLossless;
-(BOOL)shouldReturnPNG;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)cropRects;
-(id)data;
-(id)initWithData:(id)arg0 cropRects:(id)arg1 size:(struct CGSize )arg2 ;
-(id)renderCGImage:(struct CGImage *)arg0 ;
-(void)dealloc;
-(void)describePropertiesWithBuilder:(id)arg0 ;
-(void)nts_invalidateImageQuality;
-(void)nts_invalidateImageSize;
-(void)nts_updateRepresentation;


@end


#endif