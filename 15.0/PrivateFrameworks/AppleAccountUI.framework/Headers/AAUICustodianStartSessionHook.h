// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAUICUSTODIANSTARTSESSIONHOOK_H
#define AAUICUSTODIANSTARTSESSIONHOOK_H

@class NSString, RUIObjectModel;
@protocol AAUIServerHook, AAUIServerHookDelegate;

#import <Foundation/Foundation.h>

#import "AAUIServerHookResponse.h"

@interface AAUICustodianStartSessionHook : NSObject <AAUIServerHook>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUIServerHookDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) RUIObjectModel *objectModel;
@property (retain, nonatomic) AAUIServerHookResponse *serverHookResponse;
@property (readonly) Class superclass;


-(BOOL)shouldMatchElement:(id)arg0 ;
-(BOOL)shouldMatchModel:(id)arg0 ;
-(void)_startSessionWithServerAttributes:(id)arg0 completion:(id)arg1 ;
-(void)processElement:(id)arg0 attributes:(id)arg1 objectModel:(id)arg2 completion:(id)arg3 ;
-(void)processObjectModel:(id)arg0 completion:(id)arg1 ;


@end


#endif