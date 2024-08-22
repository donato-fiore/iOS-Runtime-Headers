// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EFRESOURCE_H
#define EFRESOURCE_H

@protocol NSLocking;

#import <Foundation/Foundation.h>


@interface EFResource : NSObject <NSLocking>

 {
    os_unfair_lock_s _unfair_lock;
    uint8_t _lockCount;
}




-(BOOL)returnResource;
-(id)init;
-(void)holdResource;
-(void)lock;
-(void)unlock;


@end


#endif