// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTXPCSERVICESUBSCRIPTIONCONTEXT_H
#define CTXPCSERVICESUBSCRIPTIONCONTEXT_H

@class NSString, NSNumber, NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTXPCServiceSubscriptionContext : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL isSimGood; // ivar: _isSimGood
@property (nonatomic) BOOL isSimPresent; // ivar: _isSimPresent
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) NSString *labelID; // ivar: _labelID
@property (retain, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (readonly, nonatomic) NSInteger slotID; // ivar: _slotID
@property (retain, nonatomic) NSNumber *userDataPreferred; // ivar: _userDataPreferred
@property (retain, nonatomic) NSNumber *userDefaultVoice; // ivar: _userDefaultVoice
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
+(id)contextWithServiceDescriptor:(id)arg0 ;
+(id)contextWithSlot:(NSInteger)arg0 ;
+(id)contextWithUUID:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)context;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSlot:(NSInteger)arg0 ;
-(id)initWithUUID:(id)arg0 ;
-(id)initWithUUID:(id)arg0 andSlot:(NSInteger)arg1 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif