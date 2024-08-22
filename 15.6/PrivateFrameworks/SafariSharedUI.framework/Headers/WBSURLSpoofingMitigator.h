// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSURLSPOOFINGMITIGATOR_H
#define WBSURLSPOOFINGMITIGATOR_H

@class NSDate, _WKUserInitiatedAction, NSTimer;

#import <Foundation/Foundation.h>


@interface WBSURLSpoofingMitigator : NSObject {
    NSDate *_dateOfLastSuspiciousProvisionalNavigationInterruption;
    NSUInteger _recentlyInterruptedNavigationCount;
    _WKUserInitiatedAction *_userInitiatedAction;
    NSTimer *_timerForRevertingToCommittedURL;
    BOOL _hasCommittedChromeInitiatedLoad;
}


@property (readonly, nonatomic) BOOL UIShouldReflectCommittedURLInsteadOfCurrentURL; // ivar: _UIShouldReflectCommittedURLInsteadOfCurrentURL
@property (nonatomic) NSInteger navigationSource; // ivar: _navigationSource


-(void)_determineIfPageIsTryingToSpoofAddressFieldWhenInterruptingProvisionalNavigation;
-(void)_stopTrackingInterruptedProvisionalNavigations;
-(void)didCommitNavigation;
-(void)didFailProvisionalNavigationWithError:(id)arg0 ;
-(void)didStartProvisionalNavigationWithUserInitiatedAction:(id)arg0 ;
-(void)willStartNewBrowserChromeInitiatedNavigation;


@end


#endif