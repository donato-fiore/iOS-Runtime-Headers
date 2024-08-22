// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TCVEGACGCANVAS_H
#define TCVEGACGCANVAS_H

@protocol TCVegaCGCanvasInterface;


#import "TCVegaHTMLElement.h"
#import "TCVegaCGContext.h"

@interface TCVegaCGCanvas : TCVegaHTMLElement <TCVegaCGCanvasInterface>



@property (retain, nonatomic) TCVegaCGContext *context; // ivar: context
@property CGFloat height;
@property CGFloat width;


-(id)getContext:(id)arg0 ;
-(id)init;


@end


#endif