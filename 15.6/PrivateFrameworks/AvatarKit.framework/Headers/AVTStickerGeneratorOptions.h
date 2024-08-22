// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTSTICKERGENERATOROPTIONS_H
#define AVTSTICKERGENERATOROPTIONS_H


#import <Foundation/Foundation.h>


@interface AVTStickerGeneratorOptions : NSObject

@property (nonatomic) BOOL correctClipping; // ivar: _correctClipping
@property (nonatomic) CGFloat scaleFactor; // ivar: _scaleFactor
@property (nonatomic) CGFloat sizeMultiplier; // ivar: _sizeMultiplier


+(id)defaultOptions;
+(id)optionsWithCorrectClipping:(BOOL)arg0 ;
-(id)init;


@end


#endif