// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TCVEGARENDERER_H
#define TCVEGARENDERER_H

@class JSContext, NSString;

#import <Foundation/Foundation.h>

#import "TCVegaCGCanvas.h"
#import "TCVegaJSDocument.h"

@interface TCVegaRenderer : NSObject

@property (retain) JSContext *context; // ivar: context
@property (nonatomic) CGFloat scaleFactor; // ivar: scaleFactor
@property (retain, nonatomic) NSString *spec; // ivar: spec
@property (retain, nonatomic) TCVegaCGCanvas *vegaCanvas; // ivar: vegaCanvas
@property (retain, nonatomic) TCVegaJSDocument *vegaJSDocument; // ivar: vegaJSDocument


+(id)vegaJS;
+(id)vegaliteJS;
+(id)vg2canvasJS;
-(NSUInteger)height;
-(NSUInteger)width;
-(id)cursor;
-(id)init;
-(id)initWithSpec:(id)arg0 ;
-(id)initWithSpec:(id)arg0 config:(id)arg1 scaleFactor:(CGFloat)arg2 ;
-(id)vegaContext;
-(struct CGImage *)CGImage;
-(void)triggerEventWithType:(id)arg0 event:(id)arg1 ;


@end


#endif