// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUICDPSTATUSUPDATEHOOK_H
#define AAUICDPSTATUSUPDATEHOOK_H

@class NSDictionary, NSString, RUIObjectModel, RUIServerHookResponse;
@protocol RUIServerHook, RUIServerHookDelegate;

#import <Foundation/Foundation.h>


@interface AAUICDPStatusUpdateHook : NSObject <RUIServerHook>

 {
    NSDictionary *_actionControllers;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RUIServerHookDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) RUIObjectModel *objectModel;
@property (retain, nonatomic) RUIServerHookResponse *serverHookResponse; // ivar: _serverHookResponse
@property (readonly) Class superclass;


-(BOOL)shouldMatchElement:(id)arg0 ;
-(BOOL)shouldMatchModel:(id)arg0 ;
-(id)additionalPayloadForAction:(id)arg0 error:(id)arg1 ;
-(id)changeControllerForAction:(id)arg0 ;
// -(void)_handleCompletionWithCallback:(id)arg0 onModel:(unk)arg1 forHookAction:(id)arg2 userAction:(id)arg3 error:(NSUInteger)arg4  ;
// -(void)_handleUserInteractionWithCallback:(id)arg0 onModel:(unk)arg1 forHookAction:(id)arg2 userAction:(id)arg3  ;
-(void)_invokeJSCallback:(id)arg0 onModel:(id)arg1 ;
-(void)_invokeJSCallback:(id)arg0 onModel:(id)arg1 withArguments:(id)arg2 ;
-(void)_updateStatusWithAction:(id)arg0 forObjectModel:(id)arg1 completion:(id)arg2 ;
-(void)postCompletionProcessingForAction:(id)arg0 error:(id)arg1 ;
-(void)processElement:(id)arg0 attributes:(id)arg1 objectModel:(id)arg2 completion:(id)arg3 ;
-(void)processObjectModel:(id)arg0 completion:(id)arg1 ;


@end


#endif