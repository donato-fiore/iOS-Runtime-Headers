// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAUICDPRECOVERYKEYHOOK_H
#define AAUICDPRECOVERYKEYHOOK_H

@class NSString, RUIObjectModel;
@protocol AAUIServerHook, AAUIServerHookDelegate;

#import <Foundation/Foundation.h>

#import "AAUIServerHookResponse.h"

@interface AAUICDPRecoveryKeyHook : NSObject <AAUIServerHook>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUIServerHookDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) RUIObjectModel *objectModel;
@property (retain, nonatomic) AAUIServerHookResponse *serverHookResponse;
@property (readonly) Class superclass;


+(id)helperWithPresenter:(id)arg0 forceInline:(BOOL)arg1 ;
-(BOOL)_shouldMatchAction:(id)arg0 ;
-(BOOL)shouldMatchElement:(id)arg0 ;
-(BOOL)shouldMatchModel:(id)arg0 ;
-(void)_deleteRecoveryKey:(id)arg0 ;
-(void)_generateRecoveryKeyWithType:(NSInteger)arg0 attributes:(id)arg1 completion:(id)arg2 ;
-(void)processElement:(id)arg0 attributes:(id)arg1 objectModel:(id)arg2 completion:(id)arg3 ;
-(void)processObjectModel:(id)arg0 completion:(id)arg1 ;


@end


#endif