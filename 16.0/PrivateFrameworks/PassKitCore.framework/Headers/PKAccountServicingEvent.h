// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTSERVICINGEVENT_H
#define PKACCOUNTSERVICINGEVENT_H

@class NSString, NSDate;
@protocol NSSecureCoding, PKRecordObject;

#import <Foundation/Foundation.h>

#import "PKCurrencyAmount.h"

@interface PKAccountServicingEvent : NSObject <NSSecureCoding, PKRecordObject>



@property (copy, nonatomic) NSString *activityIdentifier; // ivar: _activityIdentifier
@property (nonatomic) NSUInteger activityType; // ivar: _activityType
@property (copy, nonatomic) PKCurrencyAmount *amount; // ivar: _amount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSDate *lastUpdatedDate; // ivar: _lastUpdatedDate
@property (copy, nonatomic) NSDate *openDate; // ivar: _openDate
@property (copy, nonatomic) NSString *reasonCode; // ivar: _reasonCode
@property (nonatomic) NSUInteger status; // ivar: _status
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)recordNamePrefix;
+(id)recordType;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithRecord:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithRecord:(id)arg0 ;


@end


#endif