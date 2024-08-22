// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIDEFERREDACTIVITYITEMPROVIDER_H
#define SKUIDEFERREDACTIVITYITEMPROVIDER_H

@class UIActivityItemProvider;


#import "SKUIClientContext.h"
#import "SKUIProductPageItem.h"

@interface SKUIDeferredActivityItemProvider : UIActivityItemProvider

@property (retain) SKUIClientContext *clientContext; // ivar: _clientContext
@property (copy) id *itemProvider; // ivar: _itemProvider
@property (readonly, copy) SKUIProductPageItem *productPageItem; // ivar: _productPageItem


+(id)placeholderItem;
-(id)initWithProductPageItem:(id)arg0 clientContext:(id)arg1 ;
// -(id)initWithProductPageItemProvider:(id)arg0 clientContext:(unk)arg1  ;
// -(id)initWithProductPageItemProvider:(id)arg0 clientContext:(unk)arg1 placeholderItem:(id)arg2  ;


@end


#endif