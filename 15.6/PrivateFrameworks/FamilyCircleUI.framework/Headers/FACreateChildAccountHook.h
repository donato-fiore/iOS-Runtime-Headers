// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FACREATECHILDACCOUNTHOOK_H
#define FACREATECHILDACCOUNTHOOK_H

@class NSString, RUIObjectModel, AAUIServerHookResponse;
@protocol FACreateChildControllerDelegate, AAUIServerHook, AAUIServerHookDelegate;

#import <Foundation/Foundation.h>


@interface FACreateChildAccountHook : NSObject <FACreateChildControllerDelegate, AAUIServerHook>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUIServerHookDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) RUIObjectModel *objectModel; // ivar: _objectModel
@property (retain, nonatomic) AAUIServerHookResponse *serverHookResponse;
@property (readonly) Class superclass;


-(BOOL)shouldMatchElement:(id)arg0 ;
-(BOOL)shouldMatchModel:(id)arg0 ;
-(void)_handleCreateChildAccountWithCompletion:(id)arg0 ;
-(void)createChildControllerDidPresentInitialViewController:(id)arg0 ;
-(void)processElement:(id)arg0 attributes:(id)arg1 objectModel:(id)arg2 completion:(id)arg3 ;
-(void)processObjectModel:(id)arg0 completion:(id)arg1 ;


@end


#endif