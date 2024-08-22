// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXPASSCODEACCESSOR_H
#define AXPASSCODEACCESSOR_H

@class NSString;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface AXPasscodeAccessor : NSObject

@property (readonly, nonatomic) NSString *accountName; // ivar: _accountName
@property (readonly, nonatomic) NSString *groupName; // ivar: _groupName
@property (readonly, nonatomic) NSObject<OS_os_log> *logFacility; // ivar: _logFacility
@property (readonly, nonatomic) NSString *passcode;
@property (readonly, nonatomic) NSString *serviceName; // ivar: _serviceName


-(BOOL)attemptToSetPasscode:(id)arg0 ;
-(id)initWithServiceName:(id)arg0 accountName:(id)arg1 groupName:(id)arg2 logFacility:(id)arg3 ;
-(struct __CFDictionary *)_newQuery;


@end


#endif