// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQUIPREFERENCESLIFTUIDELEGATE_H
#define ICQUIPREFERENCESLIFTUIDELEGATE_H

@class ACAccount, NSString, UINavigationController;
@protocol PreferencesRemoteUIDelegateProtocol, DelayedPushDelegate;

#import <Foundation/Foundation.h>

#import "ICQLiftUIPresenter.h"

@interface ICQUIPreferencesLiftUIDelegate : NSObject <PreferencesRemoteUIDelegateProtocol>



@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DelayedPushDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UINavigationController *navigation; // ivar: _navigation
@property (retain, nonatomic) ICQLiftUIPresenter *presenter; // ivar: _presenter
@property (readonly) Class superclass;


-(id)initWithNavigationController:(id)arg0 ;
-(id)initWithNavigationController:(id)arg0 account:(id)arg1 ;
-(id)initWithNavigationController:(id)arg0 buyStorageFlow:(BOOL)arg1 ;
-(id)initWithNavigationController:(id)arg0 initialAction:(id)arg1 ;
-(id)initWithNavigationController:(id)arg0 initialAction:(id)arg1 account:(id)arg2 ;
-(void)cancelRemoteUI;
-(void)cleanupLoader;
-(void)loadURL:(id)arg0 postBody:(id)arg1 ;
-(void)loadURL:(id)arg0 postBody:(id)arg1 additionalHeaders:(id)arg2 ;
-(void)popAndReloadFromRemoteUI:(BOOL)arg0 additionalHeaders:(id)arg1 ;
-(void)reloadTopControllerWithAdditionalHeaders:(id)arg0 ;


@end


#endif