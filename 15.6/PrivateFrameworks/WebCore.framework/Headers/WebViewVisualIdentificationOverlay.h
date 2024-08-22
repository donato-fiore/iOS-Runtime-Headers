// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBVIEWVISUALIDENTIFICATIONOVERLAY_H
#define WEBVIEWVISUALIDENTIFICATIONOVERLAY_H

@class NSString;
@protocol CALayerDelegate;

#import <Foundation/Foundation.h>


@interface WebViewVisualIdentificationOverlay : NSObject <CALayerDelegate>

 {
    RetainPtr<UIView> _view;
    RetainPtr<CALayer> _layer;
    RetainPtr<NSString> _kind;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)shouldIdentifyWebViews;
+(void)installForWebViewIfNeeded:(id)arg0 kind:(id)arg1 deprecated:(BOOL)arg2 ;
-(id)initWithWebView:(id)arg0 kind:(id)arg1 deprecated:(BOOL)arg2 ;
-(void)dealloc;
-(void)drawLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif