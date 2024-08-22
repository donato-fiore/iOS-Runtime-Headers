// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSFOCUSACTIVITYMANAGER_H
#define CSFOCUSACTIVITYMANAGER_H

@class FCActivityManager, NSString;
@protocol FCActivityManagerObserving, CSFocusActivityViewControllerDelegate, CSItemDestination, FCActivityDescribing, OS_dispatch_queue, CSFocusActivityDelegate;

#import <Foundation/Foundation.h>

#import "CSFocusActivityViewController.h"
#import "CSAdjunctListItem.h"

@interface CSFocusActivityManager : NSObject <FCActivityManagerObserving, CSFocusActivityViewControllerDelegate>

 {
    id<CSItemDestination> *_itemDestination;
    id<FCActivityDescribing> *_currentActivity;
    NSObject<OS_dispatch_queue> *_activityManagerQueue;
    FCActivityManager *_activityManager;
    CSFocusActivityViewController *_focusActivityViewController;
    CSAdjunctListItem *_focusActivityItem;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSFocusActivityDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isFocusActivityIndicatorVisible;
@property (readonly) Class superclass;


-(BOOL)_shouldHideFocusActivityIndicator;
-(id)_activityForDisplayInIndicator;
-(id)initWithItemDestination:(id)arg0 ;
-(void)_addOrUpdateFocusActivityIndicatorItemIfNecessary;
-(void)_updateFocusActivityIndicator;
-(void)activeActivityDidChangeForManager:(id)arg0 ;
-(void)availableActivitiesDidChangeForManager:(id)arg0 ;
-(void)dealloc;
-(void)focusActivityViewIndicatorDidChangeToVisible:(BOOL)arg0 ;
-(void)presentFocusActivityPickerViewControllerFromView:(id)arg0 coverSheetViewPresenting:(id)arg1 ;


@end


#endif