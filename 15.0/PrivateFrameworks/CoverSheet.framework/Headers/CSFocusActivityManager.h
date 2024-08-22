// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSFOCUSACTIVITYMANAGER_H
#define CSFOCUSACTIVITYMANAGER_H

@class FCActivityManager, NSString;
@protocol FCActivityManagerObserving, CSFocusActivityViewControllerDelegate, CSItemDestination, FCActivityDescribing, OS_dispatch_queue, CSFocusActivityDelegate;

#import <Foundation/Foundation.h>

#import "CSFocusActivityViewController.h"

@interface CSFocusActivityManager : NSObject <FCActivityManagerObserving, CSFocusActivityViewControllerDelegate>

 {
    id<CSItemDestination> *_itemDestination;
    id<FCActivityDescribing> *_currentActivity;
    NSObject<OS_dispatch_queue> *_activityManagerQueue;
    FCActivityManager *_activityManager;
    CSFocusActivityViewController *_focusActivityViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSFocusActivityDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithItemDestination:(id)arg0 ;
-(void)_updateFocusActivityIndicator;
-(void)activeActivityDidChangeForManager:(id)arg0 ;
-(void)availableActivitiesDidChangeForManager:(id)arg0 ;
-(void)dealloc;
-(void)focusActivityViewIndicatorDidChangeToVisible:(BOOL)arg0 ;


@end


#endif