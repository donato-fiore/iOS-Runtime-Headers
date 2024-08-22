// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPEXCLUSIVELOCK_H
#define CPEXCLUSIVELOCK_H

@class NSString;
@protocol NSLocking;

#import <Foundation/Foundation.h>


@interface CPExclusiveLock : NSObject <NSLocking>

 {
    int _fd;
    NSString *_name;
}




-(BOOL)tryLock;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(id)name;
-(void)dealloc;
-(void)lock;
-(void)setName:(id)arg0 ;
-(void)unlock;


@end


#endif