// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSMULTIREADUNIWRITELOCK_H
#define NSMULTIREADUNIWRITELOCK_H

@protocol NSLocking;

#import <Foundation/Foundation.h>


@interface NSMultiReadUniWriteLock : NSObject <NSLocking>

 {
    *void _priv;
}




+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)lockForReadingBeforeDate:(id)arg0 ;
-(BOOL)lockForWritingBeforeDate:(id)arg0 ;
-(BOOL)tryLockForReading;
-(BOOL)tryLockForWriting;
-(id)description;
-(id)init;
-(id)name;
-(void)dealloc;
-(void)lock;
-(void)lockForReading;
-(void)lockForWriting;
-(void)setName:(id)arg0 ;
-(void)unlock;


@end


#endif