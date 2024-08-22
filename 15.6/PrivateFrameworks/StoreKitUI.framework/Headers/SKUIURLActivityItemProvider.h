// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIURLACTIVITYITEMPROVIDER_H
#define SKUIURLACTIVITYITEMPROVIDER_H



#import "SKUIDeferredActivityItemProvider.h"
#import "SKUIResourceLoader.h"

@interface SKUIURLActivityItemProvider : SKUIDeferredActivityItemProvider {
    SKUIResourceLoader *_resourceLoader;
}




+(id)placeholderItem;
-(id)activityViewController:(id)arg0 subjectForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 thumbnailImageForActivityType:(id)arg1 suggestedSize:(struct CGSize )arg2 ;
-(id)activityViewControllerLinkMetadata:(id)arg0 ;
-(id)initWithProductPageItem:(id)arg0 clientContext:(id)arg1 ;
// -(id)initWithProductPageItemProvider:(id)arg0 clientContext:(unk)arg1  ;
-(id)item;
-(id)linkPresentationImageFor:(id)arg0 ;


@end


#endif