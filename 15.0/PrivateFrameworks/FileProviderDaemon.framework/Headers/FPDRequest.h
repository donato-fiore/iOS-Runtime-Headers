// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPDREQUEST_H
#define FPDREQUEST_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface FPDRequest : NSObject

@property (nonatomic) BOOL allowsResurrection; // ivar: _allowsResurrection
@property (readonly, nonatomic) ? audit_token; // ivar: _audit_token
@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSString *executablePath; // ivar: _executablePath
@property (readonly, nonatomic, getter=isFromPOSIX) BOOL fromPOSIX; // ivar: _fromPOSIX
@property (readonly, nonatomic) int pid; // ivar: _pid
@property (readonly, nonatomic) NSString *processName; // ivar: _processName
@property (nonatomic, getter=isProviderInitiated) BOOL providerInitiated; // ivar: _providerInitiated
@property (readonly, nonatomic) unsigned int qos; // ivar: _qos
@property (readonly, nonatomic) NSString *shortDescription;
@property (readonly, nonatomic) NSString *userProcessName; // ivar: _userProcessName


+(id)UUIDForExecutablePath:(id)arg0 ;
+(id)fixupProcessName:(id)arg0 ;
+(id)requestForPID:(int)arg0 ;
+(id)requestForPID:(int)arg0 fromPOSIX:(BOOL)arg1 ;
+(id)requestForSelf;
+(id)requestForXPCConnection:(id)arg0 ;
-(BOOL)isPermittedToAttributeRequestingExecutable:(id)arg0 ;
-(id)description;
-(id)initWithPID:(int)arg0 fromPOSIX:(BOOL)arg1 ;
-(id)nsfpRequestForSession:(id)arg0 ;


@end


#endif