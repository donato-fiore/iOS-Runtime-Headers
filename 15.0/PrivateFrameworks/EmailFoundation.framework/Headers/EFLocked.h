// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EFLOCKED_H
#define EFLOCKED_H


#import <Foundation/Foundation.h>


@interface EFLocked : NSObject {
    os_unfair_lock_s _lock;
    id *_object;
}


@property (readonly, nonatomic) *os_unfair_lock_s unfairLockForTesting;


-(id)debugDescription;
-(id)description;
-(id)getObject;
-(id)initWithObject:(id)arg0 ;
-(void)performWhileLocked:(id)arg0 ;
-(void)setObject:(id)arg0 ;


@end


#endif