// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIGRAPHICSIMAGERENDERERFORMAT_H
#define UIGRAPHICSIMAGERENDERERFORMAT_H



#import "UIGraphicsRendererFormat.h"

@interface UIGraphicsImageRendererFormat : UIGraphicsRendererFormat {
    *CGColorSpace _overrideColorSpace;
}


@property (readonly, nonatomic, getter=_contextScale) CGFloat _contextScale;
@property (nonatomic, getter=_grayscale, setter=_setGrayscale:) BOOL _grayscale;
@property (nonatomic, getter=_overrideBitsPerComponent, setter=_setOverrideBitsPerComponent:) NSInteger _overrideBitsPerComponent; // ivar: _overrideBitsPerComponent
@property (nonatomic, getter=_overrideColorSpace, setter=_setOverrideColorSpace:) *CGColorSpace _overrideColorSpace;
@property (nonatomic, getter=_wantsAlphaMask, setter=_setWantsAlphaMask:) BOOL _wantsAlphaMask;
@property (nonatomic) BOOL opaque; // ivar: _opaque
@property (nonatomic) NSInteger preferredRange; // ivar: _preferredRange
@property (nonatomic) BOOL prefersExtendedRange;
@property (nonatomic) CGFloat scale; // ivar: _scale


+(id)defaultFormat;
+(id)formatForTraitCollection:(id)arg0 ;
+(id)preferredFormat;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif