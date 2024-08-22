// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIREPORTACONCERNREASONVIEWELEMENT_H
#define SKUIREPORTACONCERNREASONVIEWELEMENT_H

@class NSString, NSNumber;


#import "SKUIViewElement.h"

@interface SKUIReportAConcernReasonViewElement : SKUIViewElement

@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSNumber *reasonID; // ivar: _reasonID
@property (readonly, copy, nonatomic) NSString *uppercaseName; // ivar: _uppercaseName


-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif