// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFWEBARCHIVEACTIVITYITEMPROVIDER_H
#define _SFWEBARCHIVEACTIVITYITEMPROVIDER_H

@class SFActivityItemProvider, LPFileMetadata;


#import "_SFWebArchiveProvider.h"

@interface _SFWebArchiveActivityItemProvider : SFActivityItemProvider {
    _SFWebArchiveProvider *_webArchiveProvider;
    LPFileMetadata *_linkPreviewFileMetadata;
}




-(id)_webArchiveItemProvider;
-(id)activityViewController:(id)arg0 dataTypeIdentifierForActivityType:(id)arg1 ;
-(id)activityViewControllerLinkMetadata:(id)arg0 ;
-(id)initWithWebArchiveProvider:(id)arg0 ;
-(id)item;


@end


#endif