// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIMESSAGEGROUP_H
#define AMSUIMESSAGEGROUP_H

@class IAMMessageGroup, NSDictionary, NSString;
@protocol AMSUIWebDelegate, AMSUIDynamicViewControllerDelegate, AMSBagProtocol, AMSUIMessageGroupDelegate;



@interface AMSUIMessageGroup : IAMMessageGroup <AMSUIWebDelegate, AMSUIDynamicViewControllerDelegate>



@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (retain, nonatomic) NSDictionary *clientData; // ivar: _clientData
@property (retain, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (retain, nonatomic) NSDictionary *clientMetricsOverlay; // ivar: _clientMetricsOverlay
@property (retain, nonatomic) NSString *clientVersion; // ivar: _clientVersion
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AMSUIMessageGroupDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_dictionaryForParamObject:(id)arg0 error:(*id)arg1 ;
-(id)_viewControllerForServiceType:(id)arg0 placement:(id)arg1 clientIdentifier:(id)arg2 clientVersion:(id)arg3 params:(id)arg4 account:(id)arg5 sidepack:(id)arg6 metrics:(id)arg7 ;
-(id)_viewControllerForURL:(id)arg0 account:(id)arg1 sidepack:(id)arg2 metrics:(id)arg3 ;
-(id)init;
-(id)initWithBag:(id)arg0 ;
-(void)dynamicViewController:(id)arg0 didFinishCarrierLinkingWithResult:(id)arg1 error:(id)arg2 ;
-(void)dynamicViewController:(id)arg0 didFinishPurchaseWithResult:(id)arg1 error:(id)arg2 ;
-(void)viewControllerForModalMessagePresentation:(id)arg0 completion:(id)arg1 ;
-(void)webViewController:(id)arg0 didFinishPurchaseWithResult:(id)arg1 error:(id)arg2 ;


@end


#endif