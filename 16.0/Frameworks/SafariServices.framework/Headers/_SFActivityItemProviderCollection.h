// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFACTIVITYITEMPROVIDERCOLLECTION_H
#define _SFACTIVITYITEMPROVIDERCOLLECTION_H

@class WKWebView;

#import <Foundation/Foundation.h>

#import "_SFActivityItemProvider.h"
#import "_SFPrintActivityItemProvider.h"

@interface _SFActivityItemProviderCollection : NSObject

@property (nonatomic) BOOL displayingDigitalHealthLockoutView; // ivar: _displayingDigitalHealthLockoutView
@property (nonatomic) BOOL displayingStandaloneImage; // ivar: _displayingStandaloneImage
@property (nonatomic) BOOL displayingStandaloneMedia; // ivar: _displayingStandaloneMedia
@property (retain, nonatomic) _SFActivityItemProvider *documentProvider; // ivar: _documentProvider
@property (retain, nonatomic) _SFActivityItemProvider *downloadProvider; // ivar: _downloadProvider
@property (retain, nonatomic) _SFActivityItemProvider *javaScriptExtensionProvider; // ivar: _javaScriptExtensionProvider
@property (retain, nonatomic) _SFActivityItemProvider *linkProvider; // ivar: _linkProvider
@property (retain, nonatomic) _SFPrintActivityItemProvider *printProvider; // ivar: _printProvider
@property (readonly, nonatomic) _SFActivityItemProvider *standaloneImageProvider; // ivar: _standaloneImageProvider
@property (readonly, nonatomic) _SFActivityItemProvider *webArchiveProvider; // ivar: _webArchiveProvider
@property (readonly, nonatomic) WKWebView *webView; // ivar: _webView


-(id)activityItemProvidersWithCustomizationController:(id)arg0 ;
-(id)initWithWebView:(id)arg0 ;


@end


#endif