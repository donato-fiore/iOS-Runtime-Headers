// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKDOMDOCUMENTPARSERYIELDTOKEN_H
#define WKDOMDOCUMENTPARSERYIELDTOKEN_H


#import <Foundation/Foundation.h>


@interface WKDOMDocumentParserYieldToken : NSObject {
    unique_ptr<WebCore::DocumentParserYieldToken, std::default_delete<WebCore::DocumentParserYieldToken>> _token;
}




-(id)initWithDocument:(struct NakedRef<WebCore::Document> )arg0 ;


@end


#endif