// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDMAINTENANCEOPERATION_H
#define HDMAINTENANCEOPERATION_H

@class NSString;
@protocol HDMaintenanceOperationDelegate;

#import <Foundation/Foundation.h>


@interface HDMaintenanceOperation : NSObject {
    os_unfair_lock_s _lock;
    CGFloat _startedTime;
    NSString *_name;
    id<HDMaintenanceOperationDelegate> *_delegate;
    BOOL _hasStarted;
    BOOL _hasFinished;
}


@property (readonly, nonatomic) CGFloat elapsedTime;
@property (nonatomic) CGFloat enqueuedTime; // ivar: _enqueuedTime
@property (nonatomic) BOOL faultOnTimeout; // ivar: _faultOnTimeout
@property (readonly, copy, nonatomic) NSString *name;
@property (nonatomic) CGFloat timeout; // ivar: _timeout


+(id)maintenanceOperationWithName:(id)arg0 asynchronousBlock:(id)arg1 ;
+(id)maintenanceOperationWithName:(id)arg0 queue:(id)arg1 synchronousBlock:(id)arg2 ;
-(id)description;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(void)main;
-(void)startWithCompletionDelegate:(id)arg0 ;


@end


#endif