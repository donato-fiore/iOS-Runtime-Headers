// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACTIONPANELACTIVITYITEMPROVIDER_H
#define ACTIONPANELACTIVITYITEMPROVIDER_H

@class SFLinkWithPreviewActivityItemProvider;


#import "TabDocument.h"

@interface ActionPanelActivityItemProvider : SFLinkWithPreviewActivityItemProvider

@property (readonly, weak, nonatomic) TabDocument *tabDocument; // ivar: _tabDocument


-(id)activityViewController:(id)arg0 thumbnailImageForActivityType:(id)arg1 suggestedSize:(struct CGSize )arg2 ;
-(id)initWithPlaceholderItem:(id)arg0 URL:(id)arg1 pageTitle:(id)arg2 webView:(id)arg3 ;
-(id)initWithPlaceholderItem:(id)arg0 tabDocument:(id)arg1 ;
-(id)initWithTabDocument:(id)arg0 ;


@end


#endif