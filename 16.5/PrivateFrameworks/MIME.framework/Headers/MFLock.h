// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFLOCK_H
#define MFLOCK_H

@class NSLock, NSString;
@protocol MFLockObject;



@interface MFLock : NSLock <MFLockObject>

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