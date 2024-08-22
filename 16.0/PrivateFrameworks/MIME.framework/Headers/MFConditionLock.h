// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFCONDITIONLOCK_H
#define MFCONDITIONLOCK_H

@class NSConditionLock, NSString;
@protocol MFLockObject;



@interface MFConditionLock : NSConditionLock <MFLockObject>

 {
    NSString *_name;
    id *_delegate;
}




+(void)initialize;
-(BOOL)isLockedByMe;
-(BOOL)lockBeforeDate:(id)arg0 ;
-(BOOL)lockWhenCondition:(NSInteger)arg0 beforeDate:(id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithName:(id)arg0 andDelegate:(id)arg1 ;
-(id)initWithName:(id)arg0 condition:(NSInteger)arg1 andDelegate:(id)arg2 ;
-(void)dealloc;
-(void)unlock;
-(void)unlockWithCondition:(NSInteger)arg0 ;


@end


#endif