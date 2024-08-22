// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUISUBMITINPUTVIEWELEMENT_H
#define SKUISUBMITINPUTVIEWELEMENT_H

@class NSString;


#import "SKUIInputViewElement.h"

@interface SKUISubmitInputViewElement : SKUIInputViewElement {
    NSString *_label;
}


@property (readonly, nonatomic) NSString *label;


-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif