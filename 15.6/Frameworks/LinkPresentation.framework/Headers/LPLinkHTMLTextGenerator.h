// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPLINKHTMLTEXTGENERATOR_H
#define LPLINKHTMLTEXTGENERATOR_H

@class WebView, NSString, NSURL;
@protocol LPLinkHTMLGeneratorDelegate, LPLinkHTMLTextGeneratorDelegate;

#import <Foundation/Foundation.h>

#import "LPLinkHTMLGenerator.h"
#import "LPLinkMetadata.h"

@interface LPLinkHTMLTextGenerator : NSObject <LPLinkHTMLGeneratorDelegate>

 {
    WebView *_webView;
    LPLinkHTMLGenerator *_DOMGenerator;
    NSString *_generatedFragmentText;
}


@property (readonly, copy, nonatomic) NSString *HTMLFragmentString;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<LPLinkHTMLTextGeneratorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL generateEmailCompatibleMarkup;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) LPLinkMetadata *metadata;
@property (readonly) Class superclass;


+(void)initialize;
-(id)init;
-(id)initWithPresentationProperties:(id)arg0 URL:(id)arg1 ;
-(id)initWithURL:(id)arg0 ;
-(id)linkHTMLGenerator:(id)arg0 URLForResource:(id)arg1 withMIMEType:(id)arg2 ;
-(void)_commonInitWithPresentationProperties:(id)arg0 URL:(id)arg1 ;


@end


#endif