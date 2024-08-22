// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUISHARETEMPLATETEXTITEMPROVIDER_H
#define SKUISHARETEMPLATETEXTITEMPROVIDER_H

@class UIActivityItemProvider;


#import "SKUIClientContext.h"
#import "SKUIShareTemplateViewElement.h"

@interface SKUIShareTemplateTextItemProvider : UIActivityItemProvider {
    SKUIClientContext *_clientContext;
    SKUIShareTemplateViewElement *_templateElement;
}




-(id)activityViewController:(id)arg0 subjectForActivityType:(id)arg1 ;
-(id)initWithTemplateElement:(id)arg0 clientContext:(id)arg1 ;
-(id)item;


@end


#endif