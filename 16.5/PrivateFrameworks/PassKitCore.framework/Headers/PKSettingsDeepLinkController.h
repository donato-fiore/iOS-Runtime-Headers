// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSETTINGSDEEPLINKCONTROLLER_H
#define PKSETTINGSDEEPLINKCONTROLLER_H

@protocol PKSettingsDeepLinkControllerDataSource, PKSettingsDeepLinkControllerDelegate;

#import <Foundation/Foundation.h>


@interface PKSettingsDeepLinkController : NSObject {
    id<PKSettingsDeepLinkControllerDataSource> *_dataSource;
    id<PKSettingsDeepLinkControllerDelegate> *_delegate;
}




-(id)_percentEncodeReferrerIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithDataSource:(id)arg0 delegate:(id)arg1 ;
-(void)_presentPayLaterPassOrFinancingPlanWithIdenifier:(id)arg0 dataSource:(id)arg1 delegate:(id)arg2 ;
-(void)_presentTransactionDetailsForTransactionWithIdentifier:(id)arg0 ;
-(void)_presentTransactionDetailsForTransactionWithServiceIdentifier:(id)arg0 transactionSourceIdentifier:(id)arg1 ;
-(void)handleDeepLinkResourceDictionary:(id)arg0 ;


@end


#endif