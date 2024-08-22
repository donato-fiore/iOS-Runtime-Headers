// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDCAPABILITIES_H
#define TSDCAPABILITIES_H


#import <Foundation/Foundation.h>


@interface TSDCapabilities : NSObject

@property (readonly, nonatomic) NSInteger device; // ivar: _device
@property (readonly, nonatomic) NSInteger deviceType; // ivar: _deviceType
@property (readonly, nonatomic) BOOL hasHEVCHardwareEncoding;
@property (readonly, nonatomic) BOOL hasLightningPort;
@property (readonly, nonatomic) BOOL isMetalCapable;
@property (readonly, nonatomic) BOOL isRendererH3OrBelow;
@property (readonly, nonatomic) BOOL isRendererH4OrBelow;
@property (readonly, nonatomic) BOOL isRendererH5OrBelow;
@property (readonly, nonatomic) CGSize maximumHardcodedTextureSize;
@property (readonly, nonatomic) CGSize maximumImageSize;
@property (readonly, nonatomic) NSUInteger physicalMemory;
@property (readonly, nonatomic) NSInteger platform; // ivar: _platform
@property (readonly, nonatomic) NSInteger renderer; // ivar: _renderer


+(id)currentCapabilities;
-(id)init;
-(struct CGSize )maximumMetalTextureSizeForDevice:(id)arg0 ;
-(struct CGSize )maximumTextureSizeWithGLContext:(id)arg0 ;
-(void)p_setupDevice;
-(void)p_setupPlatform;


@end


#endif