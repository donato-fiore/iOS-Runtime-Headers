// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFRECURSIVELOCK_H
#define MFRECURSIVELOCK_H

@class NSRecursiveLock, NSString;
@protocol MFLockObject;



@interface MFRecursiveLock : NSRecursiveLock <MFLockObject>

 {
    NSString *_name;
    id *_delegate;
}




+(void)initialize;
-(BOOL)isLockedByMe;
-(BOOL)lockBeforeDate:(id)arg0 ;
-(BOOL)tryLock;
-(id)description;
-(id)init;
-(id)initWithName:(id)arg0 andDelegate:(id)arg1 ;
-(void)dealloc;
-(void)lock;
-(void)unlock;


@end


#endif