// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKTRANSITCOMMUTEPLAN_H
#define PKTRANSITCOMMUTEPLAN_H

@class NSMutableDictionary, NSArray, NSDate, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKPassField.h"

@interface PKTransitCommutePlan : NSObject <NSSecureCoding, NSCopying>

 {
    NSMutableDictionary *_fieldsByKey;
}


@property (copy, nonatomic) NSArray *details; // ivar: _details
@property (copy, nonatomic) NSArray *deviceAccountIdentifiers; // ivar: _deviceAccountIdentifiers
@property (copy, nonatomic) NSDate *expiryDate; // ivar: _expiryDate
@property (copy, nonatomic) NSString *expiryDateString; // ivar: _expiryDateString
@property (readonly, copy, nonatomic) NSString *formattedDateString;
@property (readonly, nonatomic) BOOL hasDisplayableInformation;
@property (readonly, nonatomic) BOOL hasExpiredPlanDate;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isPlanAvailable;
@property (readonly, nonatomic) BOOL isPlanDisplayable;
@property (nonatomic) NSUInteger properties; // ivar: _properties
@property (nonatomic) BOOL requiresAppletSourceOfTruth; // ivar: _requiresAppletSourceOfTruth
@property (copy, nonatomic) NSDate *startDate; // ivar: _startDate
@property (copy, nonatomic) NSString *startDateString; // ivar: _startDateString
@property (copy, nonatomic) PKPassField *title; // ivar: _title
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) PKPassField *usage; // ivar: _usage


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_expiryField;
-(id)_startField;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)passFieldForKey:(id)arg0 ;
-(void)_updateFieldsByKey;
-(void)_updateProperties;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif