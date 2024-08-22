// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIPREVIEWCONTROLVIEWELEMENT_H
#define SKUIPREVIEWCONTROLVIEWELEMENT_H

@class NSString;


#import "SKUIViewElement.h"

@interface SKUIPreviewControlViewElement : SKUIViewElement {
    char _enabled;
}


@property (readonly, nonatomic) NSInteger itemIdentifier; // ivar: _itemIdentifier
@property (readonly, nonatomic) NSString *mediaURLString; // ivar: _mediaURLString


-(BOOL)isEnabled;
-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif