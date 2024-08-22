// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CCVEGACARENDERERWRAPPER_H
#define CCVEGACARENDERERWRAPPER_H

@class NSString;
@protocol CCVegaCARendererJSExport;

#import <Foundation/Foundation.h>

#import "CCVegaCARenderer.h"

@interface CCVegaCARendererWrapper : NSObject <CCVegaCARendererJSExport>



@property (retain) NSString *backgroundColor;
@property (weak) CCVegaCARenderer *renderer; // ivar: _renderer


-(id)initWithRenderer:(id)arg0 ;
-(void)dirty;
-(void)dirtyAll;
-(void)render:(id)arg0 ;
-(void)resizeWidth:(CGFloat)arg0 height:(CGFloat)arg1 originX:(CGFloat)arg2 originY:(CGFloat)arg3 ;


@end


#endif