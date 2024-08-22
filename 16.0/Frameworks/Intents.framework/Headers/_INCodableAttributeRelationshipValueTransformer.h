// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INCODABLEATTRIBUTERELATIONSHIPVALUETRANSFORMER_H
#define _INCODABLEATTRIBUTERELATIONSHIPVALUETRANSFORMER_H

@class NSValueTransformer;


#import "INCodableAttribute.h"

@interface _INCodableAttributeRelationshipValueTransformer : NSValueTransformer

@property (readonly, weak, nonatomic) INCodableAttribute *codableAttribute; // ivar: _codableAttribute


-(id)initWithCodableAttribute:(id)arg0 ;
-(id)transformedValue:(id)arg0 ;


@end


#endif