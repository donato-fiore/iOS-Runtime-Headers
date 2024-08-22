// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKINKTOOLMINIMIZEDIMAGEFACTORY_H
#define PKINKTOOLMINIMIZEDIMAGEFACTORY_H


#import <Foundation/Foundation.h>


@interface PKInkToolMinimizedImageFactory : NSObject



+(id)_baseNameForInkIdentifier:(id)arg0 imageType:(id)arg1 ;
+(id)_iPadImageForEraserWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
+(id)_iPadImageForToolWithInk:(id)arg0 size:(struct CGSize )arg1 scale:(CGFloat)arg2 ;
+(id)_imageForInk:(id)arg0 size:(struct CGSize )arg1 scale:(CGFloat)arg2 inkPickerSizeState:(NSUInteger)arg3 ;
+(id)_imageNameWithBaseName:(id)arg0 sizeState:(NSUInteger)arg1 ;
+(id)_maskImageForSizeState:(NSUInteger)arg0 ;
+(id)_minimizedToolImageForInk:(id)arg0 size:(struct CGSize )arg1 scale:(CGFloat)arg2 sizeState:(NSUInteger)arg3 ;
+(id)_ringImageForSizeState:(NSUInteger)arg0 ;
+(id)imageForInk:(id)arg0 sizeState:(NSUInteger)arg1 ;


@end


#endif