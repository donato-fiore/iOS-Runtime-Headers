// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKWIDGETWEBVIEW_H
#define OKWIDGETWEBVIEW_H

@class NSString, NSDictionary, UIWebView;
@protocol OKCollectionProxyDataSource, OKWidgetWebViewProxyExports;


#import "OKWidgetView.h"

@interface OKWidgetWebView : OKWidgetView <OKCollectionProxyDataSource, OKWidgetWebViewProxyExports>

 {
    BOOL _scaleToFit;
    NSString *_webDidLoadActionScript;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isFrameLoaded; // ivar: _isFrameLoaded
@property (copy, nonatomic) NSDictionary *options; // ivar: _options
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *urlText; // ivar: _urlText
@property (copy, nonatomic) UIWebView *webView; // ivar: _webView


+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg0 ;
-(BOOL)prepareForDisplay:(BOOL)arg0 ;
-(BOOL)prepareForUnload:(BOOL)arg0 ;
-(BOOL)prepareForWarmup:(BOOL)arg0 ;
-(BOOL)settingScaleToFit;
-(NSUInteger)countOfDictionaryProxy:(id)arg0 ;
-(id)allKeysForDictionaryProxy:(id)arg0 ;
-(id)dictionaryProxy:(id)arg0 objectForKey:(id)arg1 ;
-(id)initWithWidget:(id)arg0 ;
-(id)settingObjectForKey:(id)arg0 ;
-(id)settingOptions;
-(id)settingUrlText;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)prepareForRefresh;
-(void)reloadWebView;
-(void)setSettingOptions:(id)arg0 ;
-(void)setSettingScaleToFit:(BOOL)arg0 ;
-(void)setSettingUrlText:(id)arg0 ;
-(void)setSettingWebDidLoadActionScript:(id)arg0 ;
-(void)webViewDidFinishLoad:(id)arg0 ;


@end


#endif