// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTVARYINGCOLOR_H
#define AVTVARYINGCOLOR_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface AVTVaryingColor : NSObject {
    UIColor *_baseColor;
    UIColor *_variationMinColor;
    UIColor *_variationMaxColor;
}




-(id)colorByApplyingVariation:(float)arg0 ;


@end


#endif