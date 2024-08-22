// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIACTIVITYINDICATORVIEWELEMENT_H
#define SKUIACTIVITYINDICATORVIEWELEMENT_H



#import "SKUIViewElement.h"
#import "SKUIImageViewElement.h"
#import "SKUILabelViewElement.h"

@interface SKUIActivityIndicatorViewElement : SKUIViewElement {
    CGFloat _period;
}


@property (readonly, nonatomic) SKUIImageViewElement *image;
@property (readonly, nonatomic) CGFloat period;
@property (readonly, nonatomic) SKUILabelViewElement *text;


-(BOOL)isDisabled;
-(NSInteger)pageComponentType;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif