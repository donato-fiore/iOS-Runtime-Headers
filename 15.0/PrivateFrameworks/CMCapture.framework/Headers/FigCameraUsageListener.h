// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGCAMERAUSAGELISTENER_H
#define FIGCAMERAUSAGELISTENER_H

@class NSString;
@protocol MCProfileConnectionObserver;

#import <Foundation/Foundation.h>


@interface FigCameraUsageListener : NSObject <MCProfileConnectionObserver>

 {
    BOOL _isProhibited;
    *OpaqueFigSimpleMutex _isProhibitedLock;
    id *_changeHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(id)initWithChangeHandler:(id)arg0 ;
-(void)dealloc;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg0 userInfo:(id)arg1 ;


@end


#endif