// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAUISIGNINOPERATIONMANAGER_H
#define AAUISIGNINOPERATIONMANAGER_H

@class ACUIAccountOperationsHelper, NSString, UIViewController;
@protocol ACUIAccountOperationsDelegate, AAUISignInOperationDelegate;

#import <Foundation/Foundation.h>


@interface AAUISignInOperationManager : NSObject <ACUIAccountOperationsDelegate>

 {
    ACUIAccountOperationsHelper *_accountOperationsHelper;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUISignInOperationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (readonly) Class superclass;


-(id)_alertControllerForPicker:(id)arg0 ;
-(id)_dataclassMergeActionPickerFromPicker:(id)arg0 ;
-(id)init;
-(id)initWithPresentingViewController:(id)arg0 ;
-(id)operationsHelper:(id)arg0 desiredDataclassActionFromPicker:(id)arg1 ;
-(void)_delegate_signInOperationManagerDidSaveAccount:(id)arg0 error:(id)arg1 ;
-(void)_disableDataclasses:(id)arg0 forAccount:(id)arg1 completion:(id)arg2 ;
-(void)_mainQueue_dataclassActionsForPicker:(id)arg0 completion:(id)arg1 ;
-(void)_refreshEnabledDataclassesForAccount:(id)arg0 ;
-(void)enableDataclasses:(id)arg0 forAccount:(id)arg1 ;
-(void)operationsHelper:(id)arg0 didRemoveAccount:(id)arg1 withSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)operationsHelper:(id)arg0 didSaveAccount:(id)arg1 withSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)operationsHelper:(id)arg0 willRemoveAccount:(id)arg1 ;
-(void)operationsHelper:(id)arg0 willSaveAccount:(id)arg1 ;
-(void)signInAccount:(id)arg0 enablingDataclasses:(BOOL)arg1 ;


@end


#endif