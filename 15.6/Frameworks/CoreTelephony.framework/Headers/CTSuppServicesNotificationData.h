// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTSUPPSERVICESNOTIFICATIONDATA_H
#define CTSUPPSERVICESNOTIFICATIONDATA_H

@class NSNumber, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTSuppServicesNotificationData : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSNumber *active; // ivar: _active
@property (retain, nonatomic) NSNumber *callBarringFacility; // ivar: _callBarringFacility
@property (retain, nonatomic) NSNumber *callClass; // ivar: _callClass
@property (retain, nonatomic) NSNumber *callForwardingNoReplyTime; // ivar: _callForwardingNoReplyTime
@property (retain, nonatomic) NSString *callForwardingNumber; // ivar: _callForwardingNumber
@property (retain, nonatomic) NSNumber *callForwardingReason; // ivar: _callForwardingReason
@property (retain, nonatomic) NSNumber *callingLineIdRestriction; // ivar: _callingLineIdRestriction
@property (retain, nonatomic) NSNumber *callingLineIdRestrictionModification; // ivar: _callingLineIdRestrictionModification
@property (retain, nonatomic) NSNumber *callingLinePresentation; // ivar: _callingLinePresentation
@property (retain, nonatomic) NSNumber *callingNamePresentation; // ivar: _callingNamePresentation
@property (retain, nonatomic) NSNumber *connectedLineIdRestriction; // ivar: _connectedLineIdRestriction
@property (retain, nonatomic) NSNumber *connectedLinePresentation; // ivar: _connectedLinePresentation
@property (retain, nonatomic) NSNumber *enabled; // ivar: _enabled
@property (retain, nonatomic) NSNumber *mmiProcedure; // ivar: _mmiProcedure
@property (retain, nonatomic) NSNumber *supplementaryServiceType; // ivar: _supplementaryServiceType


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif