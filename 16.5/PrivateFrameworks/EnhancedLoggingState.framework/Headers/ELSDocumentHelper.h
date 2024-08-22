// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ELSDOCUMENTHELPER_H
#define ELSDOCUMENTHELPER_H

@class NSArray, NSString, UIImage, NSMutableData, NSURL, WKWebView;
@protocol WKNavigationDelegate;

#import <Foundation/Foundation.h>


@interface ELSDocumentHelper : NSObject <WKNavigationDelegate>



@property (copy, nonatomic) NSArray *contentsText; // ivar: _contentsText
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *fullName; // ivar: _fullName
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) UIImage *imageSignature; // ivar: _imageSignature
@property (retain, nonatomic) NSMutableData *pdfData; // ivar: _pdfData
@property (readonly) Class superclass;
@property (retain, nonatomic) NSURL *tempURL; // ivar: _tempURL
@property (retain, nonatomic) WKWebView *webView; // ivar: _webView


+(id)sharedHelper;
-(id)initSingleton;
-(id)saveData:(id)arg0 toFilePath:(id)arg1 ;


@end


#endif