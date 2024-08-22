// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IOACCESSORYLDCMHEALTHCLASS_H
#define IOACCESSORYLDCMHEALTHCLASS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface IOAccessoryLdcmHealthClass : NSObject <NSSecureCoding>



@property NSUInteger dryCount; // ivar: _dryCount
@property BOOL isHealthy; // ivar: _isHealthy
@property NSUInteger lastSeenTimestamp; // ivar: _lastSeenTimestamp
@property NSUInteger leakagePassedCount; // ivar: _leakagePassedCount
@property NSUInteger outOfProfileCount; // ivar: _outOfProfileCount
@property NSUInteger overVoltageCount; // ivar: _overVoltageCount
@property NSUInteger overVoltageTimestamp; // ivar: _overVoltageTimestamp
@property NSUInteger rsvd0; // ivar: _rsvd0
@property NSUInteger rsvd1; // ivar: _rsvd1
@property NSUInteger rsvd2; // ivar: _rsvd2
@property NSUInteger rsvd3; // ivar: _rsvd3
@property unsigned int version; // ivar: _version
@property NSUInteger wetCount; // ivar: _wetCount


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif