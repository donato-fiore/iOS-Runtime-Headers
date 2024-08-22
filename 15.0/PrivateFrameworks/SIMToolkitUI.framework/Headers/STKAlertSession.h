// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STKALERTSESSION_H
#define STKALERTSESSION_H

@class SBSRemoteAlertHandle, NSString, NSDictionary;
@protocol SBSRemoteAlertHandleObserver, STKAlertSessionResponseProvider, OS_os_log, STKSound;

#import <Foundation/Foundation.h>

#import "STKSessionAction.h"

@interface STKAlertSession : NSObject <SBSRemoteAlertHandleObserver>

 {
    os_unfair_lock_s _lock;
    id<STKAlertSessionResponseProvider> *_responseProvider;
    SBSRemoteAlertHandle *_alertHandle;
    BOOL _needsResponse;
    BOOL _invalidated;
    NSObject<OS_os_log> *_logger;
}


@property (readonly, nonatomic) STKSessionAction *alertAction; // ivar: _alertAction
@property (readonly, nonatomic) SBSRemoteAlertHandle *alertHandle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasSentResponse;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *options; // ivar: _options
@property (retain, nonatomic) NSObject<STKSound> *sound; // ivar: _sound
@property (readonly) Class superclass;


+(BOOL)_requiresResponseProvider;
-(id)initWithLogger:(id)arg0 responseProvider:(id)arg1 options:(id)arg2 sound:(id)arg3 ;
-(void)_lock_sendResponse:(NSInteger)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)presentRemoteAlertHandle:(id)arg0 withAction:(id)arg1 ;
-(void)remoteAlertHandleDidActivate:(id)arg0 ;
-(void)sendResponse:(NSInteger)arg0 ;
-(void)sendResponse:(NSInteger)arg0 withStringResult:(id)arg1 ;


@end


#endif