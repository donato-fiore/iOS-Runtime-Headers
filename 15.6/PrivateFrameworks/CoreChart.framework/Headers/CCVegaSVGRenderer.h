// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CCVEGASVGRENDERER_H
#define CCVEGASVGRENDERER_H


#import <Foundation/Foundation.h>

#import "CCVegaCGContext.h"

@interface CCVegaSVGRenderer : NSObject

@property (retain) CCVegaCGContext *cgCanvas; // ivar: cgCanvas


+(id)getInstance;
-(id)parseString:(id)arg0 rendererContext:(id)arg1 ;
-(struct CGPath *)newPathFromJSFunction:(id)arg0 item:(id)arg1 ;
-(struct CGPath *)newPathFromParsedPath:(id)arg0 size:(CGFloat)arg1 rendererContext:(id)arg2 ;


@end


#endif