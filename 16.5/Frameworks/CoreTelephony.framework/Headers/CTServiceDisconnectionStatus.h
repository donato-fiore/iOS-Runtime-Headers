// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTSERVICEDISCONNECTIONSTATUS_H
#define CTSERVICEDISCONNECTIONSTATUS_H

@class NSString, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTServiceDisconnectionStatus : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL activationFailure; // ivar: _activationFailure
@property (retain, nonatomic) NSString *apnName; // ivar: _apnName
@property (retain, nonatomic) NSNumber *connectionMask; // ivar: _connectionMask
@property (nonatomic) int contextType; // ivar: _contextType
@property (nonatomic) int error; // ivar: _error
@property (retain, nonatomic) NSNumber *pdp; // ivar: _pdp
@property (retain, nonatomic) NSNumber *rawCauseCode; // ivar: _rawCauseCode


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif