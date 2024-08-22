// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKAPPDYNAMICUIRESULT_H
#define IKAPPDYNAMICUIRESULT_H

@class AMSCarrierLinkResult, AMSPurchaseResult;

#import <Foundation/Foundation.h>


@interface IKAppDynamicUIResult : NSObject

@property (retain, nonatomic) AMSCarrierLinkResult *carrierLinkResult; // ivar: _carrierLinkResult
@property (retain, nonatomic) AMSPurchaseResult *purchaseResult; // ivar: _purchaseResult


+(id)_rawResultWithDynamicUIResult:(id)arg0 ;
+(id)_responseDictionaryWithCarrierLinkResult:(id)arg0 ;
-(id)initWithCarrierLinkResult:(id)arg0 ;
-(id)initWithPurchaseResult:(id)arg0 ;
-(id)rawResponse;


@end


#endif