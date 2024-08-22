// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSREMOTEUILOADER_H
#define DSREMOTEUILOADER_H

@class AIDAAccountManager, ACAccount, AAUIGrandSlamRemoteUIPresenter, NSString;
@protocol AAUIGrandSlamRemoteUIPresenterDelegate, AIDAAccountManagerDelegate, DSController, DSNavigationDelegate;

#import <Foundation/Foundation.h>


@interface DSRemoteUILoader : NSObject <AAUIGrandSlamRemoteUIPresenterDelegate, AIDAAccountManagerDelegate, DSController>

 {
    AIDAAccountManager *_accountManager;
    ACAccount *_currentAccount;
    AAUIGrandSlamRemoteUIPresenter *_privacyRepairPresenter;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DSNavigationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(id)accountsForAccountManager:(id)arg0 ;
-(id)initWithAccountManager:(id)arg0 presenter:(id)arg1 delegate:(id)arg2 ;
-(id)initWithPresenter:(id)arg0 delegate:(id)arg1 ;
-(void)loadRemoteUI;
-(void)remoteUIDidEndFlow:(id)arg0 ;
-(void)remoteUIDidReceiveHTTPResponse:(id)arg0 ;
-(void)remoteUIRequestComplete:(id)arg0 error:(id)arg1 ;
-(void)remoteUIWillLoadRequest:(id)arg0 ;
-(void)remoteUIWillPresentObjectModel:(id)arg0 modally:(BOOL)arg1 ;


@end


#endif