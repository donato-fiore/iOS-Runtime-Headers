// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NDOAPPLECAREAMSUIVIEWCONTROLLER_H
#define NDOAPPLECAREAMSUIVIEWCONTROLLER_H

@class AMSUIWebViewController, NSString, UINavigationController, NDOWarranty;
@protocol UINavigationBarDelegate, AMSUIWebDelegate, NDOAppleCareAMSUIViewPresenterProtocol;



@interface NDOAppleCareAMSUIViewController : AMSUIWebViewController <UINavigationBarDelegate, AMSUIWebDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL initialLoadCompleted; // ivar: _initialLoadCompleted
@property UINavigationController *navController; // ivar: _navController
@property (weak) NSObject<NDOAppleCareAMSUIViewPresenterProtocol> *presenter; // ivar: _presenter
@property (retain) NSString *serialNumber; // ivar: _serialNumber
@property (readonly) Class superclass;
@property (retain) NDOWarranty *warranty; // ivar: _warranty


-(BOOL)navigationBar:(id)arg0 shouldPopItem:(id)arg1 ;
-(BOOL)webViewController:(id)arg0 handleDelegateAction:(id)arg1 completion:(id)arg2 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithWarranty:(id)arg0 serialNumber:(id)arg1 ;
-(void)cancelTapped:(id)arg0 ;
-(void)loadAMSUIView;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif