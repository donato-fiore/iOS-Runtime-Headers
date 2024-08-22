// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIDEVICE_H
#define DIDEVICE_H

@class NSUUID, NSRecursiveLock, NSString, NSDate;
@protocol NSSecureCoding, DIDeviceDelegate;

#import <Foundation/Foundation.h>

#import "DIXPCConnectionManager.h"
#import "DIOneshotTimer.h"

@interface DIDevice : NSObject <NSSecureCoding>



@property (weak, nonatomic) DIXPCConnectionManager *connectionManager; // ivar: _connectionManager
@property (weak, nonatomic) NSObject<DIDeviceDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSUUID *homeKitHomeIdentifier; // ivar: _homeKitHomeIdentifier
@property (copy, nonatomic) NSUUID *homeKitIdentifier; // ivar: _homeKitIdentifier
@property (copy, nonatomic) NSUUID *idsIdentifier; // ivar: _idsIdentifier
@property (nonatomic) BOOL isCurrentDevice; // ivar: _isCurrentDevice
@property (readonly) NSRecursiveLock *lock; // ivar: _lock
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger state; // ivar: _state
@property (copy, nonatomic) NSDate *stateExpiration; // ivar: _stateExpiration
@property (copy, nonatomic) NSString *stateReason; // ivar: _stateReason
@property (retain) DIOneshotTimer *timer; // ivar: _timer


+(BOOL)supportsSecureCoding;
+(id)stringForDeviceState:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)notifyDeviceDidChange;
-(void)notifyDidUpdateState;
-(void)refreshStateWithCompletionHandler:(id)arg0 ;
-(void)updateState:(NSInteger)arg0 reason:(id)arg1 completionHandler:(id)arg2 ;
-(void)updateWithDevice:(id)arg0 updateState:(BOOL)arg1 ;


@end


#endif