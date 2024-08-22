// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACDACCOUNTSYNC_H
#define ACDACCOUNTSYNC_H

@class NSTimer, ACAccountStore;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ACDAccountSync : NSObject {
    int _circleToken;
    int _keychainToken;
    NSTimer *_timer;
    NSObject<OS_dispatch_queue> *_syncQueue;
    BOOL _enabled;
    BOOL _duchessEnabled;
    ACAccountStore *_store;
}




+(id)accountSyncPropertiesForAccount:(id)arg0 ;
+(id)accountSyncSupportedTypes;
+(id)accountSyncUnsupportedTypes;
+(id)sharedAccountSyncServer;
-(BOOL)checkCircleState;
-(id)init;
-(void)dealloc;
-(void)setupAccountSync;


@end


#endif