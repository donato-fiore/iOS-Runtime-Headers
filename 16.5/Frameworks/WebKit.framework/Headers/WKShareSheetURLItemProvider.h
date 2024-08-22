// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKSHARESHEETURLITEMPROVIDER_H
#define WKSHARESHEETURLITEMPROVIDER_H

@class UIActivityItemProvider;



@interface WKShareSheetURLItemProvider : UIActivityItemProvider {
    RetainPtr<NSURL> _url;
    RetainPtr<LPLinkMetadata> _metadata;
}




-(id)activityViewControllerLinkMetadata:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)item;


@end


#endif