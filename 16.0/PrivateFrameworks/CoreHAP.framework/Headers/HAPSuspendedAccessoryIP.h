// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAPSUSPENDEDACCESSORYIP_H
#define HAPSUSPENDEDACCESSORYIP_H

@class NSString, NSArray;


#import "HAPSuspendedAccessory.h"

@interface HAPSuspendedAccessoryIP : HAPSuspendedAccessory {
    *AsyncConnection _connection;
}


@property (retain, nonatomic) NSString *dnsName; // ivar: _dnsName
@property (nonatomic) NSUInteger timeout; // ivar: _timeout
@property (readonly, nonatomic) NSArray *wakeTuples; // ivar: _wakeTuples


+(id)logCategory;
-(id)_wakeWithTuple:(id)arg0 dnsName:(id)arg1 ;
-(id)initWithName:(id)arg0 identifier:(id)arg1 wakeTuples:(id)arg2 queue:(id)arg3 ;
-(void)_closeConnection;
-(void)dealloc;
-(void)wakeWithCompletion:(id)arg0 ;


@end


#endif