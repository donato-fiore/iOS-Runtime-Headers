// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICQBUNDLESHOOK_H
#define ICQBUNDLESHOOK_H

@class ICQUpgradeFlowManager<ICQServerHookDelegate>, NSDictionary, NSString, UIViewController, RUIObjectModel, AAUIServerHookResponse;
@protocol AMSUIDynamicViewControllerDelegate, AAUIServerHook, AAUIServerHookDelegate;

#import <Foundation/Foundation.h>


@interface ICQBundlesHook : NSObject <AMSUIDynamicViewControllerDelegate, AAUIServerHook>

 {
    ICQUpgradeFlowManager<ICQServerHookDelegate> *_flowManager;
    NSDictionary *_clientInfo;
    NSInteger _statusCode;
    id *_completionHandler;
    NSInteger _amsErrorCode;
    NSInteger _amsAction;
    NSString *_buyParamsStr;
    UIViewController *_presentingViewController;
}


@property (retain, nonatomic) NSString *buffervar; // ivar: _buffervar
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUIServerHookDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) RUIObjectModel *objectModel;
@property (retain, nonatomic) AAUIServerHookResponse *serverHookResponse;
@property (readonly) Class superclass;


-(BOOL)shouldMatchElement:(id)arg0 ;
-(BOOL)shouldMatchModel:(id)arg0 ;
-(id)dynamicViewController:(id)arg0 contentViewControllerWithDictionary:(id)arg1 ;
-(id)initWithFlowManager:(id)arg0 ;
-(void)dynamicViewController:(id)arg0 didFinishWithPurchaseResult:(id)arg1 error:(id)arg2 ;
-(void)launchBundleOffer;
-(void)processElement:(id)arg0 attributes:(id)arg1 objectModel:(id)arg2 completion:(id)arg3 ;
-(void)processObjectModel:(id)arg0 completion:(id)arg1 ;
-(void)setAdditionalParameters:(id)arg0 ;


@end


#endif