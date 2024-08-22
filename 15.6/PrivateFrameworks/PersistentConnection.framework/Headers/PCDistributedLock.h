// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PCDISTRIBUTEDLOCK_H
#define PCDISTRIBUTEDLOCK_H

@class NSString;
@protocol NSLocking;

#import <Foundation/Foundation.h>


@interface PCDistributedLock : NSObject <NSLocking>

 {
    NSString *_path;
    int _fd;
}




-(BOOL)_lockBlocking:(BOOL)arg0 ;
-(BOOL)tryLock;
-(id)initWithName:(id)arg0 ;
-(id)initWithPath:(id)arg0 ;
-(void)dealloc;
-(void)lock;
-(void)unlock;


@end


#endif