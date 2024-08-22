// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCOFFERBACKGROUNDSTYLE_H
#define ASCOFFERBACKGROUNDSTYLE_H


#import <Foundation/Foundation.h>


@interface ASCOfferBackgroundStyle : NSObject



+(id)defaultStyle;
+(id)fixedCornerRadiusStyle:(CGFloat)arg0 ;
-(CGFloat)cornerRadiusForImageSize:(struct CGSize )arg0 stretchableArea:(CGFloat)arg1 ;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif