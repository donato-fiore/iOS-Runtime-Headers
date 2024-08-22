// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQUILEGACYPURCHASEFLOWCONTROLLER_H
#define ICQUILEGACYPURCHASEFLOWCONTROLLER_H

@class PSCloudStorageOffersManager, UINavigationController, NSString;
@protocol PSCloudStorageOffersManagerDelegate;

#import <Foundation/Foundation.h>


@interface ICQUILegacyPurchaseFlowController : NSObject <PSCloudStorageOffersManagerDelegate>

 {
    PSCloudStorageOffersManager *_offerManager;
    UINavigationController *_navController;
    id *_flowCompletion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)beginFlowWithPresenter:(id)arg0 action:(id)arg1 completion:(id)arg2 ;
-(void)manager:(id)arg0 didCompleteWithError:(id)arg1 ;
-(void)managerDidCancel:(id)arg0 ;


@end


#endif