// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLNOTIFICATIONCENTER_H
#define QLNOTIFICATIONCENTER_H

@class NSPointerArray, NSMutableArray, NSString;
@protocol QLNotificationCenterProtocol;

#import <Foundation/Foundation.h>


@interface QLNotificationCenter : NSObject <QLNotificationCenterProtocol>

 {
    id<QLNotificationCenterProtocol> *_remoteNotificationCenter;
    NSPointerArray *_observers;
    NSMutableArray *_bufferedNotifications;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_tryPostingNotificationName:(id)arg0 userInfo:(id)arg1 ;
-(NSInteger)_indexOfObserver:(id)arg0 ;
-(id)init;
-(void)_bufferNotificationName:(id)arg0 userInfo:(id)arg1 ;
-(void)_sendEnqueuedNotifications;
-(void)postNotificationName:(id)arg0 userInfo:(id)arg1 ;
-(void)registerObserver:(id)arg0 ;
-(void)setRemoteNotificationCenter:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif