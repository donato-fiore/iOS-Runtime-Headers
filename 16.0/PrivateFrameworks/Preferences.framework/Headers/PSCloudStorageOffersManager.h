// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSCLOUDSTORAGEOFFERSMANAGER_H
#define PSCLOUDSTORAGEOFFERSMANAGER_H

@class CommerceRemoteUIDelegate, NSString;
@protocol CommerceRemoteUIDelegateDelegate, PSCloudStorageOffersManagerDelegate;

#import <Foundation/Foundation.h>


@interface PSCloudStorageOffersManager : NSObject <CommerceRemoteUIDelegateDelegate>

 {
    CommerceRemoteUIDelegate *_commerceDelegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PSCloudStorageOffersManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger requiredStorageThreshold; // ivar: _requiredStorageThreshold
@property (nonatomic) BOOL shouldOfferDeviceOffers; // ivar: _shouldOfferDeviceOffers
@property (nonatomic) BOOL shouldOfferFamilySharePlansOnly; // ivar: _shouldOfferFamilySharePlansOnly
@property (nonatomic) BOOL skipCompletionAlert; // ivar: _skipCompletionAlert
@property (nonatomic) BOOL skipRetryWithoutToken; // ivar: _skipRetryWithoutToken
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsModernAlerts; // ivar: _supportsModernAlerts


-(void)_setupFlowWithNavigationController:(id)arg0 modally:(BOOL)arg1 ;
-(void)beginFlowWithNavigationController:(id)arg0 modally:(BOOL)arg1 ;
-(void)beginFlowWithNavigationController:(id)arg0 purchaseToken:(id)arg1 buyParameters:(id)arg2 requestHeaders:(id)arg3 modally:(BOOL)arg4 ;
-(void)cancelLoad;
-(void)commerceDelegate:(id)arg0 didCompleteWithError:(id)arg1 ;
-(void)commerceDelegate:(id)arg0 loadDidFailWithError:(id)arg1 ;
-(void)commerceDelegate:(id)arg0 willPresentObjectModel:(id)arg1 page:(id)arg2 ;
-(void)commerceDelegateDidCancel:(id)arg0 ;
-(void)dealloc;


@end


#endif