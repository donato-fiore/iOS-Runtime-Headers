// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FHPAYMENTRINGSUGGESTIONREQUEST_H
#define FHPAYMENTRINGSUGGESTIONREQUEST_H


#import <Foundation/Foundation.h>

#import "FHStatementDetails.h"

@interface FHPaymentRingSuggestionRequest : NSObject

@property (retain, nonatomic) FHStatementDetails *currentStatement; // ivar: _currentStatement
@property (retain, nonatomic) FHStatementDetails *previousStatement; // ivar: _previousStatement


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithcurrentStatement:(id)arg0 previousStatement:(id)arg1 ;


@end


#endif