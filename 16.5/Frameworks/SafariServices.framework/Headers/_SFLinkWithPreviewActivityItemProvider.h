// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFLINKWITHPREVIEWACTIVITYITEMPROVIDER_H
#define _SFLINKWITHPREVIEWACTIVITYITEMPROVIDER_H

@class SFActivityItemProvider, LPLinkMetadata;



@interface _SFLinkWithPreviewActivityItemProvider : SFActivityItemProvider {
    LPLinkMetadata *_cachedLinkMetadata;
}




-(id)activityViewControllerLinkMetadata:(id)arg0 ;
-(id)initWithPlaceholderItem:(id)arg0 URL:(id)arg1 pageTitle:(id)arg2 webView:(id)arg3 ;


@end


#endif