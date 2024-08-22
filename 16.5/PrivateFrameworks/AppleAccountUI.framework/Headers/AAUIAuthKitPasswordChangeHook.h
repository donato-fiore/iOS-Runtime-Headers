// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAUIAUTHKITPASSWORDCHANGEHOOK_H
#define AAUIAUTHKITPASSWORDCHANGEHOOK_H

@class RUITableViewRow, NSString, ACAccount, RUIObjectModel, RUIServerHookResponse;
@protocol RUITextFieldChangeObserver, RUIServerHook, RUIServerHookDelegate;

#import <Foundation/Foundation.h>


@interface AAUIAuthKitPasswordChangeHook : NSObject <RUITextFieldChangeObserver, RUIServerHook>

 {
    RUITableViewRow *_newPasswordRow;
    NSString *_newPassword;
    RUITableViewRow *_oldPasswordRow;
    NSString *_oldPassword;
}


@property (retain, nonatomic) ACAccount *appleAccount; // ivar: _appleAccount
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RUIServerHookDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) RUIObjectModel *objectModel;
@property (retain, nonatomic) RUIServerHookResponse *serverHookResponse;
@property (readonly) Class superclass;


-(BOOL)shouldMatchElement:(id)arg0 ;
-(BOOL)shouldMatchModel:(id)arg0 ;
-(id)_tableViewRowWithID:(id)arg0 inObjectModel:(id)arg1 ;
-(id)initWithAltDSID:(id)arg0 ;
-(void)_handleChangeForObjectModel:(id)arg0 completion:(id)arg1 ;
-(void)_harvestDataFromServerHTTPResponse:(id)arg0 ;
-(void)_updateiCloudAccountWithCompletion:(id)arg0 ;
-(void)harvestDataFromResponse:(id)arg0 ;
-(void)processElement:(id)arg0 attributes:(id)arg1 objectModel:(id)arg2 completion:(id)arg3 ;
-(void)processObjectModel:(id)arg0 completion:(id)arg1 ;
-(void)textFieldEditingDidEnd:(id)arg0 ;


@end


#endif