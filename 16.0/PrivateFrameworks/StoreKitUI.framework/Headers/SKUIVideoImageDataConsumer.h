// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIVIDEOIMAGEDATACONSUMER_H
#define SKUIVIDEOIMAGEDATACONSUMER_H

@class UIColor;


#import "SKUIImageDataConsumer.h"
#import "SKUIColorScheme.h"

@interface SKUIVideoImageDataConsumer : SKUIImageDataConsumer

@property (nonatomic) NSUInteger allowedOrientations; // ivar: _allowedOrientations
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) SKUIColorScheme *colorScheme; // ivar: _colorScheme
@property (nonatomic) CGSize landscapeSize; // ivar: _landscapeSize
@property (nonatomic) CGSize portraitSize; // ivar: _portraitSize


-(id)imageForColor:(id)arg0 orientation:(NSUInteger)arg1 ;
-(id)imageForImage:(id)arg0 ;


@end


#endif