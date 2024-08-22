// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKTRANSITAPPLETPLAN_H
#define PKTRANSITAPPLETPLAN_H

@class NSString, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKTransitAppletPlan : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *commutePlanIdentifier; // ivar: _commutePlanIdentifier
@property (copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif