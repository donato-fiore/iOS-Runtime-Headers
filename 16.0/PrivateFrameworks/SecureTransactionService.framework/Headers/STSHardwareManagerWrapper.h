// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSHARDWAREMANAGERWRAPPER_H
#define STSHARDWAREMANAGERWRAPPER_H

@class NSString;
@protocol NFHardwareEventListener, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface STSHardwareManagerWrapper : NSObject <NFHardwareEventListener>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL resolvedHwManagerState; // ivar: _resolvedHwManagerState
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem; // ivar: _sem
@property (readonly) Class superclass;


-(id)manager;
-(void)hardwareStateDidChange;


@end


#endif