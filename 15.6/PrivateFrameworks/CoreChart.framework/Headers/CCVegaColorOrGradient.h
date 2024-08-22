// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CCVEGACOLORORGRADIENT_H
#define CCVEGACOLORORGRADIENT_H

@class NSString, NSDictionary;
@protocol CCVegaColorOrGradientInterface;

#import <Foundation/Foundation.h>


@interface CCVegaColorOrGradient : NSObject <CCVegaColorOrGradientInterface>



@property (retain) NSString *color; // ivar: color
@property (retain) NSDictionary *gradient; // ivar: gradient
@property (readonly) BOOL isColor;
@property (readonly) BOOL isGradient;


-(id)initWithJSValue:(id)arg0 ;


@end


#endif