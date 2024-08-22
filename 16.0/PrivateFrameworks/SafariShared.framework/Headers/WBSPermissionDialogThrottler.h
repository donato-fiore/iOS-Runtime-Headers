// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSPERMISSIONDIALOGTHROTTLER_H
#define WBSPERMISSIONDIALOGTHROTTLER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface WBSPermissionDialogThrottler : NSObject {
    NSInteger _denyCount;
    NSMutableArray *_requestedPresentations;
    BOOL _isShowingDialog;
    BOOL _invalidated;
    BOOL _callingPresentationHandler;
}




-(BOOL)_canShowPermissionDialog;
-(id)init;
-(void)_callNextPresentationHandlerIfNeeded;
-(void)didCompletePermissionDialog:(BOOL)arg0 ;
-(void)invalidate;
-(void)requestPermissionDialogPresentation:(id)arg0 ;
-(void)willPerformUserInitiatedNavigation;


@end


#endif