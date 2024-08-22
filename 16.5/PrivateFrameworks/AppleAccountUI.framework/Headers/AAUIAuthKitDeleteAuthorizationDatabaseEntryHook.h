// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAUIAUTHKITDELETEAUTHORIZATIONDATABASEENTRYHOOK_H
#define AAUIAUTHKITDELETEAUTHORIZATIONDATABASEENTRYHOOK_H

@class NSString, RUIObjectModel, RUIServerHookResponse;
@protocol RUIServerHook, RUIServerHookDelegate;

#import <Foundation/Foundation.h>


@interface AAUIAuthKitDeleteAuthorizationDatabaseEntryHook : NSObject <RUIServerHook>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RUIServerHookDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) RUIObjectModel *objectModel;
@property (retain, nonatomic) RUIServerHookResponse *serverHookResponse;
@property (readonly) Class superclass;


-(BOOL)shouldMatchElement:(id)arg0 ;
-(BOOL)shouldMatchModel:(id)arg0 ;
-(void)_revokeAuthorizationForClientID:(id)arg0 completion:(id)arg1 ;
-(void)processElement:(id)arg0 attributes:(id)arg1 objectModel:(id)arg2 completion:(id)arg3 ;
-(void)processObjectModel:(id)arg0 completion:(id)arg1 ;


@end


#endif