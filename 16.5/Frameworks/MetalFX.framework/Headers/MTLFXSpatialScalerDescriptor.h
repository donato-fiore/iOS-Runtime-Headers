// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLFXSPATIALSCALERDESCRIPTOR_H
#define MTLFXSPATIALSCALERDESCRIPTOR_H


#import <Foundation/Foundation.h>


@interface MTLFXSpatialScalerDescriptor : NSObject

@property (nonatomic) NSInteger colorProcessingMode; // ivar: colorProcessingMode
@property (nonatomic) NSUInteger colorTextureFormat; // ivar: _colorTextureFormat
@property (nonatomic) NSUInteger inputHeight; // ivar: inputHeight
@property (nonatomic) NSUInteger inputWidth; // ivar: inputWidth
@property (nonatomic) NSUInteger outputHeight; // ivar: outputHeight
@property (nonatomic) NSUInteger outputTextureFormat; // ivar: outputTextureFormat
@property (nonatomic) NSUInteger outputWidth; // ivar: outputWidth
@property NSUInteger version; // ivar: version


+(BOOL)supportsDevice:(id)arg0 ;
+(NSUInteger)colorTextureUsage;
+(NSUInteger)inputTextureUsage;
+(NSUInteger)outputTextureUsage;
-(NSUInteger)getInputTextureFormat;
-(id)newSpatialScalerWithDevice:(id)arg0 ;
-(void)setInputTextureFormat:(NSUInteger)arg0 ;


@end


#endif