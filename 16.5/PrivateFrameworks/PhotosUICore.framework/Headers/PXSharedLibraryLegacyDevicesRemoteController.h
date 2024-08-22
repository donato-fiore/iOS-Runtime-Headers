// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYLEGACYDEVICESREMOTECONTROLLER_H
#define PXSHAREDLIBRARYLEGACYDEVICESREMOTECONTROLLER_H

@class AIDAAccountManager, ACAccount, AAUIGrandSlamRemoteUIPresenter, NSString;
@protocol AAUIGrandSlamRemoteUIPresenterDelegate, AIDAAccountManagerDelegate;


#import "PXObservable.h"

@interface PXSharedLibraryLegacyDevicesRemoteController : PXObservable <AAUIGrandSlamRemoteUIPresenterDelegate, AIDAAccountManagerDelegate>

 {
    AIDAAccountManager *_accountManager;
    ACAccount *_currentAccount;
    AAUIGrandSlamRemoteUIPresenter *_remoteUIPresenter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


+(id)legacyDevicesRemoteControllerIfEnabledWithSharedLibraryOrPreviewPresent:(BOOL)arg0 ;
-(id)_init;
-(id)accountsForAccountManager:(id)arg0 ;
-(id)init;
-(void)_updateStateOnMainQueue:(NSInteger)arg0 ;
-(void)beginRemoteUIRequestWithPresenter:(id)arg0 ;
-(void)remoteUIDidEndFlow:(id)arg0 ;
-(void)remoteUIRequestComplete:(id)arg0 error:(id)arg1 ;
-(void)remoteUIWillLoadRequest:(id)arg0 ;
-(void)remoteUIWillPresentObjectModel:(id)arg0 modally:(BOOL)arg1 ;


@end


#endif