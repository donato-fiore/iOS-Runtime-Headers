// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTSTICKERGENERATOROPTIONS_H
#define AVTSTICKERGENERATOROPTIONS_H


#import <Foundation/Foundation.h>


@interface AVTStickerGeneratorOptions : NSObject

@property (nonatomic) BOOL correctClipping; // ivar: _correctClipping
@property (nonatomic) CGFloat scaleFactor; // ivar: _scaleFactor
@property (nonatomic) CGFloat sizeMultiplier; // ivar: _sizeMultiplier
@property (nonatomic) BOOL useLegacyCorrectClippingImplementation; // ivar: _useLegacyCorrectClippingImplementation


+(id)defaultOptions;
+(id)optionsWithCorrectClipping:(BOOL)arg0 ;
-(id)init;


@end


#endif