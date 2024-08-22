// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSIKITEMGROUPELEMENT_H
#define VSIKITEMGROUPELEMENT_H

@class IKViewElement;


#import "VSIKItemGroup.h"

@interface VSIKItemGroupElement : IKViewElement

@property (readonly, nonatomic) VSIKItemGroup *itemGroup; // ivar: _itemGroup


+(id)supportedFeaturesForElementName:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif