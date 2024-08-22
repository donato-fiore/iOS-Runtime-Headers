// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISHARETEMPLATEURLITEMPROVIDER_H
#define SKUISHARETEMPLATEURLITEMPROVIDER_H

@class UIActivityItemProvider;


#import "SKUIShareTemplateViewElement.h"

@interface SKUIShareTemplateURLItemProvider : UIActivityItemProvider {
    SKUIShareTemplateViewElement *_templateElement;
}




-(id)activityViewController:(id)arg0 subjectForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 thumbnailImageForActivityType:(id)arg1 suggestedSize:(struct CGSize )arg2 ;
-(id)initWithTemplateElement:(id)arg0 ;
-(id)item;


@end


#endif