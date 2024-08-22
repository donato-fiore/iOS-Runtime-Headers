// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TCSCALL_H
#define TCSCALL_H

@class NSString, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TCSCallCenter.h"

@interface TCSCall : NSObject <NSSecureCoding>

 {
    TCSCallCenter *_callCenter;
    BOOL _isNilCall;
}


@property (readonly, copy, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (readonly, copy, nonatomic) NSDate *dateAnsweredOrDialed; // ivar: _dateAnsweredOrDialed
@property (readonly, copy, nonatomic) NSDate *dateConnected; // ivar: _dateConnected
@property (readonly, nonatomic) int disconnectedReason; // ivar: _disconnectedReason
@property (readonly, copy, nonatomic) NSString *handleValue; // ivar: _handleValue
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL isConnected; // ivar: _isConnected
@property (readonly, nonatomic) BOOL isIncoming;
@property (readonly, nonatomic) BOOL isOutgoing; // ivar: _isOutgoing
@property (readonly, nonatomic) BOOL isRemoteUplinkMuted; // ivar: _isRemoteUplinkMuted
@property (readonly, nonatomic) int status; // ivar: _status
@property (readonly, copy, nonatomic) NSString *uniqueProxyIdentifier; // ivar: _uniqueProxyIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCall:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCall:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setCallCenter:(id)arg0 ;
-(void)setUplinkMuted:(BOOL)arg0 completion:(id)arg1 ;


@end


#endif