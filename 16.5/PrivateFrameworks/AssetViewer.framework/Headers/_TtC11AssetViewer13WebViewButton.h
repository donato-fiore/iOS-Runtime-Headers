// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11ASSETVIEWER13WEBVIEWBUTTON_H
#define _TTC11ASSETVIEWER13WEBVIEWBUTTON_H

@class UIControl;



@interface _TtC11AssetViewer13WebViewButton : UIControl {
    ? completionHandler;
    ? webView;
    ? highlightedOverlayView;
}


@property (nonatomic) BOOL highlighted;


-(BOOL)isHighlighted;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif