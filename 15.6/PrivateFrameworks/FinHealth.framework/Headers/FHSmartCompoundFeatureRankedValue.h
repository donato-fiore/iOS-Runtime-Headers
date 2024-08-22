// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FHSMARTCOMPOUNDFEATURERANKEDVALUE_H
#define FHSMARTCOMPOUNDFEATURERANKEDVALUE_H

@class NSDate, NSArray, NSString, NSDecimalNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FHSmartCompoundFeatureRankedValue : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSDate *eventEndDate; // ivar: _eventEndDate
@property (copy, nonatomic) NSArray *eventIdentifiers; // ivar: _eventIdentifiers
@property (copy, nonatomic) NSDate *eventStartDate; // ivar: _eventStartDate
@property (readonly, copy, nonatomic) NSString *featureLabel; // ivar: _featureLabel
@property (readonly, copy, nonatomic) NSDecimalNumber *featureRank; // ivar: _featureRank


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLabelAndRank:(id)arg0 featureRank:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif