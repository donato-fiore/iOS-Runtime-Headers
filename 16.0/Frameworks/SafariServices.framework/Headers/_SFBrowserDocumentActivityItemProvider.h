// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFBROWSERDOCUMENTACTIVITYITEMPROVIDER_H
#define _SFBROWSERDOCUMENTACTIVITYITEMPROVIDER_H

@class SFActivityItemProvider;
@protocol _SFBrowserDocument;



@interface _SFBrowserDocumentActivityItemProvider : SFActivityItemProvider {
    id<_SFBrowserDocument> *_browserDocument;
}




-(id)initWithBrowserDocument:(id)arg0 ;
-(id)item;


@end


#endif