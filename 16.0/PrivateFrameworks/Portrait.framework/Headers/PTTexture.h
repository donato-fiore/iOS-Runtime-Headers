// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTTEXTURE_H
#define PTTEXTURE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PTTexture : NSObject

@property (nonatomic) NSInteger YCbCrColorDepth; // ivar: _YCbCrColorDepth
@property (nonatomic) BOOL YCbCrFullRange; // ivar: _YCbCrFullRange
@property (retain, nonatomic) NSString *YCbCrMatrix; // ivar: _YCbCrMatrix
@property (retain, nonatomic) NSString *colorPrimaries; // ivar: _colorPrimaries
@property (retain, nonatomic) NSString *transferFunction; // ivar: _transferFunction


+(id)createRGBA:(id)arg0 ;
+(id)createYUV420:(id)arg0 chroma:(id)arg1 ;
-(NSUInteger)height;
-(NSUInteger)width;


@end


#endif