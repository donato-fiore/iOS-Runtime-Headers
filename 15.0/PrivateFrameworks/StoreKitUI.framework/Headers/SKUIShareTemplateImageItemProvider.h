// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISHARETEMPLATEIMAGEITEMPROVIDER_H
#define SKUISHARETEMPLATEIMAGEITEMPROVIDER_H

@class UIActivityItemProvider;


#import "SKUIShareTemplateViewElement.h"

@interface SKUIShareTemplateImageItemProvider : UIActivityItemProvider {
    SKUIShareTemplateViewElement *_templateElement;
}




-(id)initWithTemplateElement:(id)arg0 ;
-(id)item;


@end


#endif