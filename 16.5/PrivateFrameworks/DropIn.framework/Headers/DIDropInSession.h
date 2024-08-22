// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIDROPINSESSION_H
#define DIDROPINSESSION_H

@class NSUUID, NSRecursiveLock;
@protocol NSSecureCoding, DIDropInSessionDelegate;

#import <Foundation/Foundation.h>

#import "DIXPCConnectionManager.h"
#import "DIDropInRequest.h"

@interface DIDropInSession : NSObject <NSSecureCoding>



@property (weak, nonatomic) DIXPCConnectionManager *connectionManager; // ivar: _connectionManager
@property (weak, nonatomic) NSObject<DIDropInSessionDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSRecursiveLock *lock; // ivar: _lock
@property (nonatomic) BOOL needsInitialUplinkMuteStatus; // ivar: _needsInitialUplinkMuteStatus
@property (readonly, nonatomic) DIDropInRequest *request; // ivar: _request
@property (nonatomic) NSUInteger state; // ivar: _state
@property (nonatomic) NSUInteger stateReason; // ivar: _stateReason
@property (nonatomic, getter=isUplinkMuted) BOOL uplinkMuted; // ivar: _uplinkMuted


+(BOOL)supportsSecureCoding;
+(id)stringForDropInSessionState:(NSUInteger)arg0 ;
+(id)stringForDropInSessionStateReason:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNullableRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 ;
-(void)cancelWithCompletionHandler:(id)arg0 ;
-(void)cancelWithError:(id)arg0 completionHandler:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endWithCompletionHandler:(id)arg0 ;
-(void)failWithError:(id)arg0 ;
-(void)startWithCompletionHandler:(id)arg0 ;
-(void)updateUplinkMuteStatus:(BOOL)arg0 ;
-(void)updateWithSession:(id)arg0 ;


@end


#endif