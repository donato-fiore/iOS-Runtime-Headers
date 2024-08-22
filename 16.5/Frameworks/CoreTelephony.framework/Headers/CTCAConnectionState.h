// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTCACONNECTIONSTATE_H
#define CTCACONNECTIONSTATE_H

@class NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CTCATransmissionProgress.h"

@interface CTCAConnectionState : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSInteger congestionStatus; // ivar: _congestionStatus
@property (nonatomic) NSInteger connectionStatus; // ivar: _connectionStatus
@property (retain, nonatomic) CTCATransmissionProgress *currentTransmissionProgress; // ivar: _currentTransmissionProgress
@property (nonatomic) NSInteger registrationStatus; // ivar: _registrationStatus
@property (retain, nonatomic) NSNumber *rssi; // ivar: _rssi
@property (nonatomic) NSInteger syncStatus; // ivar: _syncStatus


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif