// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIPRODUCTPAGEACTIVITYVIEWCONTROLLER_H
#define SKUIPRODUCTPAGEACTIVITYVIEWCONTROLLER_H

@class UIActivityViewController;


#import "SKUIClientContext.h"

@interface SKUIProductPageActivityViewController : UIActivityViewController {
    SKUIClientContext *_clientContext;
}




-(id)_activityItemsForProductPageItem:(id)arg0 clientContext:(id)arg1 ;
// -(id)_activityItemsForProductPageItemProvider:(id)arg0 clientContext:(unk)arg1  ;
-(id)_applicationActivitiesForProductPageItem:(id)arg0 clientContext:(id)arg1 ;
-(id)_titleForActivity:(id)arg0 ;
-(id)initWithProductPageItem:(id)arg0 clientContext:(id)arg1 ;


@end


#endif