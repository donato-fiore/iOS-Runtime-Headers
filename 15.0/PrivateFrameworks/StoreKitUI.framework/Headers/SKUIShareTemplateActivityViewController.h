// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISHARETEMPLATEACTIVITYVIEWCONTROLLER_H
#define SKUISHARETEMPLATEACTIVITYVIEWCONTROLLER_H

@class UIActivityViewController;


#import "SKUIClientContext.h"
#import "SKUIShareTemplateViewElement.h"

@interface SKUIShareTemplateActivityViewController : UIActivityViewController {
    SKUIClientContext *_clientContext;
    SKUIShareTemplateViewElement *_templateElement;
}




-(id)_activityItemsWithTemplateElement:(id)arg0 clientContext:(id)arg1 ;
-(id)_applicationActivitiesWithTemplateElement:(id)arg0 clientContext:(id)arg1 ;
-(id)_titleForActivity:(id)arg0 ;
-(id)initWithTemplateElement:(id)arg0 clientContext:(id)arg1 ;


@end


#endif