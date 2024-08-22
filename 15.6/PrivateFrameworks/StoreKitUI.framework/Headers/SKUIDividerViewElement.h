// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIDIVIDERVIEWELEMENT_H
#define SKUIDIVIDERVIEWELEMENT_H



#import "SKUIViewElement.h"
#import "SKUIButtonViewElement.h"
#import "SKUIViewElementText.h"

@interface SKUIDividerViewElement : SKUIViewElement {
    SKUIButtonViewElement *_button;
    NSInteger _dividerType;
    BOOL _dividerTypeWasInitialized;
}


@property (readonly, nonatomic) SKUIButtonViewElement *button;
@property (readonly, nonatomic) NSInteger dividerType;
@property (readonly, nonatomic) SKUIViewElementText *text; // ivar: _text


-(BOOL)isEnabled;
-(NSInteger)pageComponentType;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif