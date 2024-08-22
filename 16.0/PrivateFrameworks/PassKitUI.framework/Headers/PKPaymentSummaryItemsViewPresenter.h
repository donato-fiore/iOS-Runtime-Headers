// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSUMMARYITEMSVIEWPRESENTER_H
#define PKPAYMENTSUMMARYITEMSVIEWPRESENTER_H

@class NSString;
@protocol PKPaymentAuthorizationViewPresenting;

#import <Foundation/Foundation.h>


@interface PKPaymentSummaryItemsViewPresenter : NSObject <PKPaymentAuthorizationViewPresenting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)presentCell:(id)arg0 withDataItem:(id)arg1 shouldShowSeperator:(BOOL)arg2 forPaymentRequest:(id)arg3 cellProvider:(id)arg4 ;
+(void)presentView:(id)arg0 withDataItem:(id)arg1 forPaymentRequest:(id)arg2 ;


@end


#endif