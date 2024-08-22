// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBHTMLVIEWPRIVATE_H
#define WEBHTMLVIEWPRIVATE_H

@class WAKView;

#import <Foundation/Foundation.h>


@interface WebHTMLViewPrivate : NSObject {
    BOOL closed;
    BOOL ignoringMouseDraggedEvents;
    BOOL printing;
    BOOL paginateScreenContent;
    WAKView *layerHostingView;
    RetainPtr<WebEvent> mouseDownEvent;
    BOOL handlingMouseDownEvent;
    RetainPtr<WebEvent> keyDownEvent;
    BOOL exposeInputContext;
    CGPoint lastScrollPosition;
    BOOL inScrollPositionChanged;
    RetainPtr<WebPluginController> pluginController;
    RetainPtr<NSArray> pageRects;
    *WebHTMLViewInterpretKeyEventsParameters interpretKeyEventsParameters;
    RetainPtr<WebDataSource> dataSource;
    SEL selectorForDoCommandBySelector;
}




-(void)clear;
-(void)dealloc;


@end


#endif