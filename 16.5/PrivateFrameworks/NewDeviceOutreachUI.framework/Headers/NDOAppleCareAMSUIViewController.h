// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NDOAPPLECAREAMSUIVIEWCONTROLLER_H
#define NDOAPPLECAREAMSUIVIEWCONTROLLER_H

@class AMSUIWebViewController, NSString, UINavigationController, NSDictionary, NDOWarranty;
@protocol UINavigationBarDelegate, AMSUIWebDelegate, NDOAppleCareAMSUIViewPresenterProtocol;



@interface NDOAppleCareAMSUIViewController : AMSUIWebViewController <UINavigationBarDelegate, AMSUIWebDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (retain) NSString *deeplinkParams; // ivar: _deeplinkParams
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL initialLoadCompleted; // ivar: _initialLoadCompleted
@property BOOL isMultipleDevicePurchaseCall; // ivar: _isMultipleDevicePurchaseCall
@property UINavigationController *navController; // ivar: _navController
@property (weak) NSObject<NDOAppleCareAMSUIViewPresenterProtocol> *presenter; // ivar: _presenter
@property (retain) NSDictionary *purchaseAPIBody; // ivar: _purchaseAPIBody
@property (retain) NSString *serialNumber; // ivar: _serialNumber
@property (retain) NSString *source; // ivar: _source
@property (readonly) Class superclass;
@property (retain) NDOWarranty *warranty; // ivar: _warranty


-(BOOL)navigationBar:(id)arg0 shouldPopItem:(id)arg1 ;
-(BOOL)webViewController:(id)arg0 handleDelegateAction:(id)arg1 completion:(id)arg2 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_initWithWarranty:(id)arg0 serialNumber:(id)arg1 source:(id)arg2 isMultiCall:(BOOL)arg3 deeplinkParams:(id)arg4 purchaseBody:(id)arg5 ;
-(id)initWithWarranty:(id)arg0 serialNumber:(id)arg1 source:(id)arg2 deeplinkParams:(id)arg3 ;
-(id)initWithWarranty:(id)arg0 serialNumber:(id)arg1 source:(id)arg2 purchaseBody:(id)arg3 ;
-(void)cancelTapped:(id)arg0 ;
-(void)loadAMSUIView;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif