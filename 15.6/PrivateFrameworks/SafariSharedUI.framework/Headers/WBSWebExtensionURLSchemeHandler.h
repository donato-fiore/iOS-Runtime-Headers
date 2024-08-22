// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSWEBEXTENSIONURLSCHEMEHANDLER_H
#define WBSWEBEXTENSIONURLSCHEMEHANDLER_H

@class NSMapTable, NSString;
@protocol WKURLSchemeHandler;

#import <Foundation/Foundation.h>


@interface WBSWebExtensionURLSchemeHandler : NSObject <WKURLSchemeHandler>

 {
    NSMapTable *_fileLoadOperations;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)webView:(id)arg0 startURLSchemeTask:(id)arg1 ;
-(void)webView:(id)arg0 stopURLSchemeTask:(id)arg1 ;


@end


#endif