// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMSHAREDLOCK_H
#define RMSHAREDLOCK_H

@class NSConditionLock, NSString;

#import <Foundation/Foundation.h>


@interface RMSharedLock : NSObject {
    NSConditionLock *_lock;
}


@property (copy, nonatomic) NSString *lockTitle; // ivar: _lockTitle


+(id)newSharedLockWithDescription:(id)arg0 ;
-(id)initWithDescription:(id)arg0 ;
-(void)lock;
-(void)performBlockUnderLock:(id)arg0 ;
-(void)unlock;


@end


#endif