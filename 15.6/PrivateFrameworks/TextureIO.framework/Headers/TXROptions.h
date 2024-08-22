// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TXROPTIONS_H
#define TXROPTIONS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TXROptions : NSObject <NSCopying>



@property (nonatomic) NSUInteger colorSpaceHandling; // ivar: _colorSpaceHandling
@property (nonatomic) BOOL cubemapFromVerticallyStackedImage; // ivar: _cubemapFromVerticallyStackedImage
@property (nonatomic) BOOL multiplyAlpha; // ivar: _multiplyAlpha
@property (nonatomic) NSUInteger originOperation; // ivar: _originOperation


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif