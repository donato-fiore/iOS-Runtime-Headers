// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPWALRUSNOTIFICATIONHANDLER_H
#define CDPWALRUSNOTIFICATIONHANDLER_H


#import <Foundation/Foundation.h>


@interface CDPWalrusNotificationHandler : NSObject {
    os_unfair_lock_s _observerLock;
    BOOL _isObservingWalrusStatus;
}


@property (readonly, nonatomic) BOOL isObservingWalrusStatus;


+(id)sharedInstance;
-(id)init;
-(void)_stopObservingWalrusStateChangeNotification;
-(void)dealloc;
-(void)startObservingWalrusStateChangeNotification;


@end


#endif