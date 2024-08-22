// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIREPORTACONCERNTEMPLATEVIEWELEMENT_H
#define SKUIREPORTACONCERNTEMPLATEVIEWELEMENT_H

@class NSArray, NSString, NSURL;


#import "SKUIViewElement.h"

@interface SKUIReportAConcernTemplateViewElement : SKUIViewElement

@property (readonly, nonatomic) NSInteger itemIdentifier; // ivar: _itemIdentifier
@property (readonly, copy, nonatomic) NSArray *reasonElements;
@property (readonly, copy, nonatomic) NSString *reportConcernExplanation; // ivar: _reportConcernExplanation
@property (readonly, copy, nonatomic) NSURL *reportConcernURL; // ivar: _reportConcernURL


-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif