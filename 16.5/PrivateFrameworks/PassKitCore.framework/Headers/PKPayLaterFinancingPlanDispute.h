// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERFINANCINGPLANDISPUTE_H
#define PKPAYLATERFINANCINGPLANDISPUTE_H

@class NSArray, NSDate, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPayLaterFinancingPlanDispute : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSArray *appliedPayments; // ivar: _appliedPayments
@property (copy, nonatomic) NSDate *deadlineDate; // ivar: _deadlineDate
@property (copy, nonatomic) NSString *emailAddress; // ivar: _emailAddress
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSDate *lastUpdated; // ivar: _lastUpdated
@property (copy, nonatomic) NSDate *openDate; // ivar: _openDate
@property (nonatomic) NSUInteger requiredDocuments; // ivar: _requiredDocuments
@property (nonatomic) NSUInteger state; // ivar: _state


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPayLaterFinancingPlanDispute:(id)arg0 ;
-(BOOL)isTerminal;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif