// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BGSYSTEMTASK_H
#define BGSYSTEMTASK_H

@class NSString;
@protocol OS_os_transaction;

#import <Foundation/Foundation.h>


@interface BGSystemTask : NSObject

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (copy) id *expirationHandler; // ivar: _expirationHandler
@property (readonly, copy) NSString *identifier; // ivar: _identifier
@property (nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (nonatomic) BOOL suspending; // ivar: _suspending
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction; // ivar: _transaction


-(BOOL)suspendTaskForDuration:(CGFloat)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)setTaskCompleted;


@end


#endif