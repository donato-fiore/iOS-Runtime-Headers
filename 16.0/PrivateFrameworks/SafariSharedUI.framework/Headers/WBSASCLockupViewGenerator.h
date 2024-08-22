// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSASCLOCKUPVIEWGENERATOR_H
#define WBSASCLOCKUPVIEWGENERATOR_H

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol ASCLockupViewDelegate;

#import <Foundation/Foundation.h>


@interface WBSASCLockupViewGenerator : NSObject <ASCLockupViewDelegate>

 {
    id *_pendingGenerateLockupViewsCompletionHandler;
    NSMutableArray *_lockupViewsPendingLoad;
    NSMutableArray *_succesfullyLoadedLockupViews;
    NSMutableDictionary *_lockupRequestToRequiredTeamIDMap;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)lockupViewGroup;
+(id)sharedGenerator;
-(id)presentingViewControllerForLockupView:(id)arg0 ;
-(void)_allLockupViewRequestsCompleted;
-(void)_lockupViewRequestedCompleted:(id)arg0 loadedSuccessfully:(BOOL)arg1 ;
-(void)generateLockupViewsForAvailableApps:(id)arg0 completionHandler:(id)arg1 ;
-(void)lockupView:(id)arg0 didFailRequestWithError:(id)arg1 ;
-(void)lockupViewDidBeginRequest:(id)arg0 ;
-(void)lockupViewDidFinishRequest:(id)arg0 ;


@end


#endif