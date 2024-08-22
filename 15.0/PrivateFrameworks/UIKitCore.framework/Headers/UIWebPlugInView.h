// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIWEBPLUGINVIEW_H
#define UIWEBPLUGINVIEW_H

@class WAKView, CALayer;


#import "UIWebDocumentView.h"
#import "UIView.h"

@interface UIWebPlugInView : WAKView {
    UIWebDocumentView *_webView;
    CALayer *_hostingLayer;
    UIView *_uiView;
    *__CFRunLoopObserver _mainRunLoopDrawObserver;
    BOOL _isFullScreen;
}


@property (nonatomic) BOOL isMapViewPlugIn; // ivar: _isMapViewPlugIn
@property (nonatomic) BOOL isQuickTimePlugIn; // ivar: _isQuickTimePlugIn
@property (nonatomic) BOOL isiAdPlugIn; // ivar: _isiAdPlugIn
@property (nonatomic, getter=isParentedInLayer) BOOL parentedInLayer; // ivar: _parentedInLayer


-(BOOL)isParented;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(BOOL)willProvidePluginLayer;
-(id)initWithWebView:(id)arg0 plugInView:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)objectForWebScript;
-(id)plugInView;
-(id)pluginLayer;
-(void)_attachPluginLayerOnMainThread;
-(void)_connectPluginLayers;
-(void)_detachPluginLayerOnMainThread;
-(void)_disconnectPluginLayers;
-(void)_reshapeOnMainThread;
-(void)_viewDidMoveToWindowOnMainThread;
-(void)attachPluginLayer;
-(void)dealloc;
-(void)detachPluginLayer;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)forwardInvocation:(id)arg0 ;
-(void)invalidateGState;
-(void)layout;
-(void)mouseDown:(id)arg0 ;
-(void)mouseUp:(id)arg0 ;
-(void)reshape;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setFrameSize:(struct CGSize )arg0 ;
-(void)setWebView:(id)arg0 ;
-(void)viewDidMoveToWindow;
-(void)webPlugInDestroy;
-(void)webPlugInInitialize;
-(void)webPlugInStart;
-(void)webPlugInStop;


@end


#endif