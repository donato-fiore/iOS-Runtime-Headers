// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCUIFOCUSENABLEMENTINDICATORMANAGER_H
#define FCUIFOCUSENABLEMENTINDICATORMANAGER_H

@class FCActivityManager, NSString;
@protocol FCActivityManagerObserving, FCActivityDescribing;

#import <Foundation/Foundation.h>


@interface FCUIFocusEnablementIndicatorManager : NSObject <FCActivityManagerObserving>

 {
    FCActivityManager *_activityManager;
    id<FCActivityDescribing> *_lastActiveActivity;
    os_unfair_lock_s _lastActiveActivityLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)managerWithBannerPoster:(id)arg0 systemApertureElementRegistrar:(id)arg1 ;
-(BOOL)shouldKeepPresentingAfterActiveActivityDidChange:(id)arg0 ;
-(id)init;
-(void)activeActivityDidChangeForManager:(id)arg0 ;
-(void)postActivity:(id)arg0 enabled:(BOOL)arg1 ;
-(void)revokeWithReason:(id)arg0 ;


@end


#endif