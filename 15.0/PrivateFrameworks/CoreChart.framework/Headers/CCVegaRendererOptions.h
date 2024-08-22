// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CCVEGARENDEREROPTIONS_H
#define CCVEGARENDEREROPTIONS_H

@class NSString, CALayer, NSCalendar, NSLocale, UITraitCollection;
@protocol CCVegaRendererDelegate;

#import <Foundation/Foundation.h>


@interface CCVegaRendererOptions : NSObject

@property (retain) NSString *baseConfig; // ivar: baseConfig
@property (retain) CALayer *caLayer; // ivar: caLayer
@property BOOL caUpdateFromBackground; // ivar: caUpdateFromBackground
@property (retain) NSCalendar *calendar; // ivar: calendar
@property (weak) NSObject<CCVegaRendererDelegate> *delegate; // ivar: delegate
@property (retain) NSLocale *locale; // ivar: locale
@property unsigned int renderer; // ivar: renderer
@property CGFloat scaleFactor; // ivar: scaleFactor
@property CGSize size; // ivar: size
@property (retain) UITraitCollection *traitCollection; // ivar: traitCollection
@property CGFloat zoomFactor; // ivar: zoomFactor


-(id)init;


@end


#endif