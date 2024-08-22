// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIBADGEVIEWELEMENT_H
#define SKUIBADGEVIEWELEMENT_H

@class NSString, NSURL, NSAttributedString, UIImage;


#import "SKUIViewElement.h"

@interface SKUIBadgeViewElement : SKUIViewElement {
    BOOL _hasValidFallbackImage;
    NSString *_text;
}


@property (readonly, nonatomic) NSURL *URL; // ivar: _url
@property (readonly, nonatomic) NSAttributedString *attributedString;
@property (readonly, nonatomic) NSInteger badgeType;
@property (readonly, nonatomic) UIImage *fallbackImage; // ivar: _fallbackImage
@property (readonly, nonatomic) NSString *resourceName; // ivar: _resourceName
@property (readonly, nonatomic) CGSize size; // ivar: _size


-(id)accessibilityText;
-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif