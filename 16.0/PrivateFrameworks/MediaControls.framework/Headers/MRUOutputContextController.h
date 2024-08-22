// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUOUTPUTCONTEXTCONTROLLER_H
#define MRUOUTPUTCONTEXTCONTROLLER_H

@class AVOutputContext, AVOutputDevice;
@protocol MRUOutputContextControllerDelegate;

#import <Foundation/Foundation.h>


@interface MRUOutputContextController : NSObject {
    NSInteger _outputContextType;
    os_unfair_lock_s _lock;
}


@property (weak, nonatomic) NSObject<MRUOutputContextControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) AVOutputContext *outputContext; // ivar: _outputContext
@property (readonly, nonatomic) AVOutputDevice *outputDevice;


-(id)associatedOutputContext;
-(id)initWithOutputContextType:(NSInteger)arg0 ;
-(void)initializeOutputContext;
-(void)mediaServicesWereResetNotification:(id)arg0 ;
-(void)outputDeviceChangedNotification:(id)arg0 ;
-(void)registerNotificationsForOutputContext:(id)arg0 ;
-(void)unregisterNotifications;


@end


#endif