// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTXPCCONTEXTINFO_H
#define CTXPCCONTEXTINFO_H

@class NSString, NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTXPCContextInfo : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *accountID; // ivar: _accountID
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) NSString *labelID; // ivar: _labelID
@property (retain, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (readonly, nonatomic) NSInteger slotID; // ivar: _slotID
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
+(id)contextWithUUID:(id)arg0 andAccountID:(id)arg1 andSlot:(NSInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)context;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 andAccountID:(id)arg1 andSlot:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif