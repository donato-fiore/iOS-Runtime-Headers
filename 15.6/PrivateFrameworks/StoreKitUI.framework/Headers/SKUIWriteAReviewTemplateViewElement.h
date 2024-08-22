// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIWRITEAREVIEWTEMPLATEVIEWELEMENT_H
#define SKUIWRITEAREVIEWTEMPLATEVIEWELEMENT_H

@class NSString;


#import "SKUIViewElement.h"

@interface SKUIWriteAReviewTemplateViewElement : SKUIViewElement

@property (readonly, nonatomic) NSInteger itemIdentifier; // ivar: _itemIdentifier
@property (readonly, nonatomic) NSString *reviewMetadataURLString; // ivar: _reviewMetadataURLString


-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif