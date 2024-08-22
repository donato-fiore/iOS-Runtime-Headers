// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBLOCKEDMODALALERTITEMPRESENTER_H
#define SBLOCKEDMODALALERTITEMPRESENTER_H

@class NSString;
@protocol SBAlertItemPresenter, SBLockScreenActionProvider;

#import <Foundation/Foundation.h>

#import "SBAlertItemPresenterWindowSceneResolver.h"

@interface SBLockedModalAlertItemPresenter : NSObject <SBAlertItemPresenter, SBLockScreenActionProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) SBAlertItemPresenterWindowSceneResolver *windowSceneResolver; // ivar: _windowSceneResolver


-(BOOL)canPresentMultipleAlertItemsSimultaneously;
-(BOOL)presentsAlertItemsModally;
-(id)initWithSharedModalAlertItemPresenter:(id)arg0 windowSceneManager:(id)arg1 ;
-(id)lockScreenActionContext;
-(void)dismissAlertItem:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)presentAlertItem:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)windowSceneDidConnect:(id)arg0 withSharedModalAlertItemPresenter:(id)arg1 ;
-(void)windowSceneDidDisconnect:(id)arg0 ;


@end


#endif