// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIURLVIEWELEMENT_H
#define SKUIURLVIEWELEMENT_H

@class NSURL;


#import "SKUIViewElement.h"

@interface SKUIURLViewElement : SKUIViewElement

@property (readonly, nonatomic) NSURL *URL; // ivar: _url


-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif