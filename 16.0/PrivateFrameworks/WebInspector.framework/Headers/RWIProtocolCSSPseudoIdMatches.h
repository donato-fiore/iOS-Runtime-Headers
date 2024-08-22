// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RWIPROTOCOLCSSPSEUDOIDMATCHES_H
#define RWIPROTOCOLCSSPSEUDOIDMATCHES_H

@class NSArray;


#import "RWIProtocolJSONObject.h"

@interface RWIProtocolCSSPseudoIdMatches : RWIProtocolJSONObject

@property (copy, nonatomic) NSArray *matches;
@property (nonatomic) NSInteger pseudoId;


-(id)initWithPseudoId:(NSInteger)arg0 matches:(id)arg1 ;


@end


#endif