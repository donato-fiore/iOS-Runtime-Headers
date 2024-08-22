// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UARPPOWERLOGPENDINGREACHABILITYEVENT_H
#define UARPPOWERLOGPENDINGREACHABILITYEVENT_H

@class NSString, NSUUID;

#import <Foundation/Foundation.h>


@interface UARPPowerLogPendingReachabilityEvent : NSObject

@property (copy) NSString *activeFirmwareVersion; // ivar: _activeFirmwareVersion
@property (readonly) BOOL allDataPresent;
@property (readonly) NSString *modelNumber; // ivar: _modelNumber
@property (copy) NSString *stagedFirmwareVersion; // ivar: _stagedFirmwareVersion
@property (readonly) NSUUID *uuid; // ivar: _uuid


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initModelNumber:(id)arg0 uuid:(id)arg1 ;


@end


#endif