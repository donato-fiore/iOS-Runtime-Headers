// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICEXCLUSIVELOCK_H
#define ICEXCLUSIVELOCK_H

@class NSString;
@protocol NSLocking;

#import <Foundation/Foundation.h>


@interface ICExclusiveLock : NSObject <NSLocking>

 {
    int _fd;
    NSString *_name;
    NSString *_cachePath;
    NSString *_fullPath;
}




-(BOOL)tryLock;
-(id)init;
-(id)initWithName:(id)arg0 cachePath:(id)arg1 ;
-(id)name;
-(void)dealloc;
-(void)lock;
-(void)setName:(id)arg0 ;
-(void)unlock;


@end


#endif