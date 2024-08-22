// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDMODEASSERTIONINVALIDATION_H
#define DNDMODEASSERTIONINVALIDATION_H

@class NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "DNDModeAssertion.h"
#import "DNDModeAssertionInvalidationDetails.h"
#import "DNDModeAssertionSource.h"

@interface DNDModeAssertionInvalidation : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) DNDModeAssertion *assertion; // ivar: _assertion
@property (readonly, copy, nonatomic) DNDModeAssertionInvalidationDetails *details; // ivar: _details
@property (readonly, copy, nonatomic) NSDate *invalidationDate; // ivar: _invalidationDate
@property (readonly, nonatomic) NSUInteger reason; // ivar: _reason
@property (readonly, nonatomic) NSUInteger reasonOverride; // ivar: _reasonOverride
@property (readonly, copy, nonatomic) DNDModeAssertionSource *source; // ivar: _source


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAssertion:(id)arg0 invalidationDate:(id)arg1 details:(id)arg2 source:(id)arg3 reason:(NSUInteger)arg4 reasonOverride:(NSUInteger)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif