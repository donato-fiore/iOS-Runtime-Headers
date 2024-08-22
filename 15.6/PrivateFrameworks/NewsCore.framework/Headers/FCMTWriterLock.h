// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCMTWRITERLOCK_H
#define FCMTWRITERLOCK_H

@protocol NFLocking;

#import <Foundation/Foundation.h>


@interface FCMTWriterLock : NSObject <NFLocking>

 {
    id<NFLocking> *_underlyingLock;
}




-(id)init;
-(id)initWithUnderlyingLock:(id)arg0 ;
-(void)lock;
-(void)performReadSync:(id)arg0 ;
-(void)performWriteSync:(id)arg0 ;
-(void)unlock;


@end


#endif