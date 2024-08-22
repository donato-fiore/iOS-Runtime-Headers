// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUNIASTRONOMYVISTACONFIGURATION_H
#define NUNIASTRONOMYVISTACONFIGURATION_H

@class CLKDevice, NSString;

#import <Foundation/Foundation.h>


@interface NUNIAstronomyVistaConfiguration : NSObject

@property (nonatomic) NSInteger colorSpace; // ivar: _colorSpace
@property (retain, nonatomic) CLKDevice *device; // ivar: _device
@property (copy, nonatomic) id *initialSetupOperation; // ivar: _initialSetupOperation
@property (nonatomic) BOOL isGPUEnabled; // ivar: _isGPUEnabled
@property (nonatomic) BOOL isRTLLayout; // ivar: _isRTLLayout
@property (nonatomic) float maxAPL; // ivar: _maxAPL
@property (nonatomic) NSUInteger quadViewOptions; // ivar: _quadViewOptions
@property (nonatomic) NSUInteger rendererStyle; // ivar: _rendererStyle
@property (nonatomic) CGFloat screenScale; // ivar: _screenScale
@property (copy, nonatomic) NSString *textureSuffix; // ivar: _textureSuffix


-(id)initWithDevice:(id)arg0 ;


@end


#endif