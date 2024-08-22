// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFWEBARCHIVEPROVIDER_H
#define _SFWEBARCHIVEPROVIDER_H

@class SFQuickLookDocument, NSData, NSString, NSURL, WKWebView;
@protocol SFQuickLookDocumentSource;

#import <Foundation/Foundation.h>


@interface _SFWebArchiveProvider : NSObject <SFQuickLookDocumentSource>

 {
    SFQuickLookDocument *_quickLookDocument;
    NSData *_webArchiveData;
    NSString *_cachedWebViewTitle;
    NSURL *_cachedWebViewURL;
}


@property (readonly, nonatomic) BOOL canGenerateWebArchive;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *suggestedFilenameWithExtension;
@property (readonly, nonatomic) NSString *suggestedFilenameWithoutExtension;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) WKWebView *webView; // ivar: _webView


-(id)_quickLookDocument;
-(id)dataForQuickLookDocument:(id)arg0 ;
-(id)initWithWebView:(id)arg0 ;
-(id)suggestedFileExtensionForQuickLookDocument:(id)arg0 ;
-(id)suggestedFileNameForQuickLookDocument:(id)arg0 ;
-(void)generateWebArchiveWithCompletionHandler:(id)arg0 ;


@end


#endif