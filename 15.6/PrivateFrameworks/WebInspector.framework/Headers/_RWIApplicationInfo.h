// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _RWIAPPLICATIONINFO_H
#define _RWIAPPLICATIONINFO_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_RWIRelayConnectionToApplication.h"

@interface _RWIApplicationInfo : NSObject

@property (readonly, nonatomic) NSInteger automationAvailability; // ivar: _automationAvailability
@property (copy, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (nonatomic) _RWIRelayConnectionToApplication *connection; // ivar: _connection
@property (nonatomic) NSUInteger debuggerAvailability; // ivar: _debuggerAvailability
@property (copy, nonatomic) NSString *debuggerConnectionIdentifier; // ivar: _debuggerConnectionIdentifier
@property (readonly, nonatomic) BOOL hasRemoteDebugSession; // ivar: _hasRemoteDebugSession
@property (readonly, nonatomic) BOOL hasUpdatedFromListing; // ivar: _hasUpdatedFromListing
@property (nonatomic) int hostApplicationPID; // ivar: _hostApplicationPID
@property (readonly, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) int pid; // ivar: _pid
@property (nonatomic, getter=isProxy) BOOL proxy; // ivar: _proxy


+(id)identifierForPID:(int)arg0 ;
-(BOOL)updateFromListing:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithPID:(int)arg0 bundleId:(id)arg1 name:(id)arg2 isProxy:(BOOL)arg3 connection:(id)arg4 debuggerAvailability:(NSUInteger)arg5 ;


@end


#endif