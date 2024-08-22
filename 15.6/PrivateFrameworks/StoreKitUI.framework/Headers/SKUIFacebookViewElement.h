// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIFACEBOOKVIEWELEMENT_H
#define SKUIFACEBOOKVIEWELEMENT_H

@class NSString;


#import "SKUIViewElement.h"

@interface SKUIFacebookViewElement : SKUIViewElement

@property (readonly, nonatomic) NSString *URLString; // ivar: _urlString
@property (readonly, nonatomic) NSInteger facebookType; // ivar: _facebookType


-(NSInteger)pageComponentType;
-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif