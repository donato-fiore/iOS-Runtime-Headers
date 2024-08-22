// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSUICARRIERSPACEPLANSCONTROLLER_H
#define PSUICARRIERSPACEPLANSCONTROLLER_H

@class PSListController, RemoteUIController, CTCarrierSpaceClient, NSString;
@protocol CTCarrierSpaceClientDelegate, RemoteUIControllerDelegate, OS_dispatch_queue;



@interface PSUICarrierSpacePlansController : PSListController <CTCarrierSpaceClientDelegate, RemoteUIControllerDelegate>

 {
    NSObject<OS_dispatch_queue> *_carrierSpaceQueue;
    RemoteUIController *_remoteUIController;
}


@property (retain, nonatomic) CTCarrierSpaceClient *carrierSpaceClient; // ivar: _carrierSpaceClient
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)detailForPlanOption:(id)arg0 ;
-(id)getLogger;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)specifiers;
-(id)stringFromGroupCategory:(NSInteger)arg0 ;
-(void)carrierSpaceChanged;
-(void)dismissPlanDetail;
-(void)moreDetailsButtonTapped:(id)arg0 ;
-(void)remoteUIController:(id)arg0 willPresentModalNavigationController:(id)arg1 ;
-(void)simStatusChanged;
-(void)tableView:(id)arg0 accessoryButtonTappedForRowWithIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif