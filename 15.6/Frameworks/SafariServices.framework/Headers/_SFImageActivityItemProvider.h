// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFIMAGEACTIVITYITEMPROVIDER_H
#define _SFIMAGEACTIVITYITEMPROVIDER_H

@class SFActivityItemProvider, NSData, NSString;



@interface _SFImageActivityItemProvider : SFActivityItemProvider {
    NSData *_imageOnlyDocumentData;
    NSString *_documentUTI;
}




-(id)_imageData;
-(id)activityViewController:(id)arg0 dataTypeIdentifierForActivityType:(id)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;
-(id)initWithWebView:(id)arg0 ;
-(id)item;


@end


#endif