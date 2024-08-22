// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKACCOUNTASSISTANCEPROGRAMMESSAGE_H
#define PKACCOUNTASSISTANCEPROGRAMMESSAGE_H

@class NSDecimalNumber, NSString;
@protocol NSSecureCoding, PKRecordObject;

#import <Foundation/Foundation.h>


@interface PKAccountAssistanceProgramMessage : NSObject <NSSecureCoding, PKRecordObject>



@property (retain, nonatomic) NSDecimalNumber *chargeOffPreventionAmount; // ivar: _chargeOffPreventionAmount
@property (retain, nonatomic) NSDecimalNumber *currentBalance; // ivar: _currentBalance
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDecimalNumber *pastDue; // ivar: _pastDue
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)recordNamePrefix;
+(id)recordType;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecord:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithRecord:(id)arg0 ;


@end


#endif