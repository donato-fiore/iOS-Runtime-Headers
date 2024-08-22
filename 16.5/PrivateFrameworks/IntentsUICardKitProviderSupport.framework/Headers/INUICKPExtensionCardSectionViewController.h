// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INUICKPEXTENSIONCARDSECTIONVIEWCONTROLLER_H
#define INUICKPEXTENSIONCARDSECTIONVIEWCONTROLLER_H

@class NSString;
@protocol CRKCardSectionViewControlling, CRKCardSectionViewControllingDelegate;


#import "INUICKPSynchronousRemoteViewController.h"

@interface INUICKPExtensionCardSectionViewController : INUICKPSynchronousRemoteViewController <CRKCardSectionViewControlling>

 {
    id *_touchDeliveryPolicyAssertion;
}


@property (weak, nonatomic) NSObject<CRKCardSectionViewControllingDelegate> *cardSectionViewControllingDelegate; // ivar: _cardSectionViewControllingDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)cardEventDidOccur:(NSUInteger)arg0 withIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(void)desiresInteractivity:(id)arg0 ;
-(void)remoteViewController:(id)arg0 requestsHandlingOfIntent:(id)arg1 ;
-(void)remoteViewControllerWillBeginEditing:(id)arg0 ;


@end


#endif