// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVDISPATCHONCE_H
#define AVDISPATCHONCE_H


#import <Foundation/Foundation.h>


@interface AVDispatchOnce : NSObject {
    os_unfair_lock_s _lock;
    BOOL _testFlag;
}




-(id)init;
-(void)runBlockOnce:(id)arg0 ;


@end


#endif