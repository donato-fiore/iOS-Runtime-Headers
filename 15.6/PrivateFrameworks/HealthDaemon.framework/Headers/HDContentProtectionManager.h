// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCONTENTPROTECTIONMANAGER_H
#define HDCONTENTPROTECTIONMANAGER_H

@class NSMapTable, NSString;
@protocol HDDiagnosticObject, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HDContentProtectionManager : NSObject <HDDiagnosticObject>

 {
    uint8_t _contentProtectionState;
    uint8_t _shouldIgnoreUnlockedState;
    uint8_t _unlockedSinceBoot;
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_observationQueue;
    NSMapTable *_observers;
    CGFloat _beganObservingTime;
    CGFloat _lastNotificationTime;
    CGFloat _lastRecheckTime;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldIgnoreUnlockedState;
@property (readonly) Class superclass;


+(BOOL)isProtectedDataAvailableWithState:(NSInteger)arg0 ;
-(BOOL)deviceUnlockedSinceBoot;
-(BOOL)isProtectedDataAvailable;
-(NSInteger)observedState;
-(id)diagnosticDescription;
-(id)init;
-(id)initWithNotifications:(BOOL)arg0 initialState:(NSInteger)arg1 unlockedSinceBoot:(BOOL)arg2 ;
-(void)addContentProtectionObserver:(id)arg0 withQueue:(id)arg1 ;
-(void)dealloc;
-(void)recheckContentProtectionState;
-(void)removeContentProtectionObserver:(id)arg0 ;
-(void)setContentProtectionState:(NSInteger)arg0 ;


@end


#endif