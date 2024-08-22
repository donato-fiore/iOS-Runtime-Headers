// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIPREVIEWTEMPLATEVIEWELEMENT_H
#define SKUIPREVIEWTEMPLATEVIEWELEMENT_H

@class NSString;


#import "SKUIViewElement.h"
#import "SKUILockupViewElement.h"

@interface SKUIPreviewTemplateViewElement : SKUIViewElement

@property (readonly, nonatomic) NSInteger itemIdentifier; // ivar: _itemIdentifier
@property (readonly, nonatomic) SKUILockupViewElement *previewLockup;
@property (readonly, nonatomic) NSString *previewURLString; // ivar: _previewURLString


-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif