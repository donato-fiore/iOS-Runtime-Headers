// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQUIREMOTEUIPRESENTER_H
#define ICQUIREMOTEUIPRESENTER_H

@class ACAccount, UIViewController, RemoteUIController, RUIServerHookHandler, NSString, NSSet;
@protocol RemoteUIControllerDelegate, ICQUIRemoteUIPresenterDelegate;

#import <Foundation/Foundation.h>


@interface ICQUIRemoteUIPresenter : NSObject <RemoteUIControllerDelegate>

 {
    ACAccount *_account;
    UIViewController *_presenter;
    RemoteUIController *_ruiController;
    RUIServerHookHandler *_serverHookHandler;
    NSString *_closeURL;
}


@property (retain, nonatomic) NSSet *dataclasses; // ivar: _dataclasses
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ICQUIRemoteUIPresenterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)remoteUIController:(id)arg0 shouldLoadRequest:(id)arg1 redirectResponse:(id)arg2 ;
-(id)initWithAccount:(id)arg0 presenter:(id)arg1 ;
-(void)_attachServerHooks;
-(void)_configureTableRow:(id)arg0 withDataclass:(id)arg1 ;
-(void)_processObjectModel:(id)arg0 ;
-(void)_processTableRow:(id)arg0 ;
-(void)beginRUIFlowWithURL:(id)arg0 ;
-(void)objectModel:(id)arg0 configureTableRow:(id)arg1 page:(id)arg2 ;
-(void)objectModelDidChange:(id)arg0 ;
-(void)remoteUIController:(id)arg0 didDismissModalNavigationWithObjectModels:(id)arg1 ;
-(void)remoteUIController:(id)arg0 didFinishLoadWithError:(id)arg1 forRequest:(id)arg2 ;
-(void)remoteUIController:(id)arg0 didReceiveObjectModel:(id)arg1 actionSignal:(*NSUInteger)arg2 ;


@end


#endif