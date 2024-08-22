// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBNODEHIGHLIGHT_H
#define WEBNODEHIGHLIGHT_H

@class WAKView;

#import <Foundation/Foundation.h>

#import "WebHighlightLayer.h"
#import "WebNodeHighlightView.h"

@interface WebNodeHighlight : NSObject {
    WAKView *_targetView;
    WebHighlightLayer *_highlightLayer;
    WebNodeHighlightView *_highlightView;
    NakedPtr<WebCore::InspectorController> _inspectorController;
    id *_delegate;
}




-(id)delegate;
-(id)highlightView;
-(id)initWithTargetView:(id)arg0 inspectorController:(struct NakedPtr<WebCore::InspectorController> )arg1 ;
-(id)targetView;
-(struct NakedPtr<WebCore::InspectorController> )inspectorController;
-(void)attach;
-(void)dealloc;
-(void)detach;
-(void)setDelegate:(id)arg0 ;
-(void)setNeedsDisplay;


@end


#endif