// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCVEGACGCANVAS_H
#define CCVEGACGCANVAS_H

@protocol CCVegaCGCanvasInterface;


#import "CCVegaHTMLElement.h"
#import "CCVegaCGContext.h"

@interface CCVegaCGCanvas : CCVegaHTMLElement <CCVegaCGCanvasInterface>



@property (retain, nonatomic) CCVegaCGContext *context; // ivar: context
@property CGFloat height;
@property CGFloat width;


-(id)getContext:(id)arg0 ;
-(id)init;


@end


#endif