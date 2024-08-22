// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPSYSTEMSTATEOBSERVER_H
#define CPSYSTEMSTATEOBSERVER_H

@protocol CPSystemStateObserver;

#import <Foundation/Foundation.h>


@interface CPSystemStateObserver : NSObject <CPSystemStateObserver>

 {
    ? carplayObserver;
    ? managedConfigObserver;
    ? lock;
    ? observers;
    ? audioRoutePolicyManager;
    ? carPlayConnected;
    ? $__lazy_storage_$_screenTimeAllowed;
    ? $__lazy_storage_$__allowSharePlay;
    ? $__lazy_storage_$__allowScreenSharing;
}


@property (nonatomic, readonly) BOOL allowScreenSharing;
@property (nonatomic, readonly) BOOL allowSharePlay;


-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(void)addObserver:(id)arg0 withQueue:(id)arg1 ;


@end


#endif