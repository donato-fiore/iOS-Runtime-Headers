// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAUIAUTHKITAUTHENTICATONHOOK_H
#define AAUIAUTHKITAUTHENTICATONHOOK_H

@class NSString, RUIObjectModel;
@protocol AAUIServerHook, AAUIServerHookDelegate;

#import <Foundation/Foundation.h>

#import "AAUIServerHookResponse.h"

@interface AAUIAuthKitAuthenticatonHook : NSObject <AAUIServerHook>

 {
    NSString *_appleId;
    NSString *_altDSID;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUIServerHookDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) RUIObjectModel *objectModel;
@property (retain, nonatomic) AAUIServerHookResponse *serverHookResponse; // ivar: _serverHookResponse
@property (readonly) Class superclass;


-(BOOL)shouldMatchElement:(id)arg0 ;
-(BOOL)shouldMatchModel:(id)arg0 ;
-(id)authContextFromAttributes:(id)arg0 ;
-(id)initWithUsername:(id)arg0 altDSID:(id)arg1 ;
-(void)_reauthenticateWithServerAttributes:(id)arg0 completion:(id)arg1 ;
-(void)processElement:(id)arg0 attributes:(id)arg1 objectModel:(id)arg2 completion:(id)arg3 ;
-(void)processObjectModel:(id)arg0 completion:(id)arg1 ;
-(void)updateResponseWithAuthResults:(id)arg0 ;


@end


#endif