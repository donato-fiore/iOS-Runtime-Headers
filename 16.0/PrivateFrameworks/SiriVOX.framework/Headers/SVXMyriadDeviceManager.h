// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVXMYRIADDEVICEMANAGER_H
#define SVXMYRIADDEVICEMANAGER_H

@class NSString;
@protocol SVXMyriadRequestDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SVXMyriadDeviceManager : NSObject <SVXMyriadRequestDelegate>

 {
    id<SVXMyriadRequestDelegate> *_device;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_analyticsQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithInstanceContext:(id)arg0 analytics:(id)arg1 preferences:(id)arg2 delegate:(id)arg3 ;
-(void)_initializeMyriadDeviceWithInstanceContext:(id)arg0 analytics:(id)arg1 preferences:(id)arg2 delegate:(id)arg3 workQueue:(id)arg4 analyticsQueue:(id)arg5 ;
-(void)preheatMyriad;
-(void)resetMyriad;
-(void)setupEnabled:(BOOL)arg0 ;
-(void)startAdvertising:(NSUInteger)arg0 withMyriadGoodnessScoreContext:(id)arg1 withMyriadAudioContext:(id)arg2 completion:(id)arg3 ;


@end


#endif