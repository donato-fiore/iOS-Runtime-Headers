// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAUISERVERUIHOOKHANDLER_H
#define AAUISERVERUIHOOKHANDLER_H

@class NSMutableArray, RemoteUIController, NSString, UIViewController, NSArray;
@protocol AAUIServerHookDelegate;

#import <Foundation/Foundation.h>


@interface AAUIServerUIHookHandler : NSObject <AAUIServerHookDelegate>

 {
    NSMutableArray *_hookIdentifiers;
    RemoteUIController *_remoteUIController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIViewController *presentingControllerOverride; // ivar: _presentingControllerOverride
@property (copy, nonatomic) NSArray *serverHooks; // ivar: _serverHooks
@property (readonly) Class superclass;


-(id)_refreshRequestWithInfo:(id)arg0 initiatingObjectModel:(id)arg1 attributes:(id)arg2 ;
-(id)_responseDataForResult:(BOOL)arg0 withError:(id)arg1 ;
-(id)currentPresenter;
-(id)initWithRemoteUIController:(id)arg0 ;
-(id)initWithRemoteUIController:(id)arg0 hooks:(id)arg1 ;
-(id)presentationContextForHook:(id)arg0 ;
-(void)_handleResponseForHook:(id)arg0 success:(BOOL)arg1 error:(id)arg2 attributes:(id)arg3 objectModel:(id)arg4 completion:(id)arg5 ;
-(void)_rebuildServerHookHandlers;
-(void)_reloadUIWithInfo:(id)arg0 attributes:(id)arg1 initiatingObjectModel:(id)arg2 completion:(id)arg3 ;
-(void)dismissObjectModelsAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)processObjectModel:(id)arg0 isModal:(BOOL)arg1 ;
-(void)processObjectModel:(id)arg0 isModal:(BOOL)arg1 completion:(id)arg2 ;
-(void)processServerResponse:(id)arg0 ;
-(void)refreshWithRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif