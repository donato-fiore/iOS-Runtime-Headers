// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALDATABASEWRITELOCK_H
#define CALDATABASEWRITELOCK_H


#import <Foundation/Foundation.h>


@interface CalDatabaseWriteLock : NSObject {
    os_unfair_lock_s _lock;
}




+(id)canonicalizePath:(id)arg0 ;
+(id)writeLockForDatabasePath:(id)arg0 ;
-(id)init;
-(void)lock;
-(void)performWithWriteLock:(id)arg0 ;
-(void)unlock;


@end


#endif