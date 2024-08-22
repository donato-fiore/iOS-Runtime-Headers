// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIPURCHASEREQUEST_H
#define VUIPURCHASEREQUEST_H

@class AMSBuyParams, NSString, AMSPurchase;

#import <Foundation/Foundation.h>


@interface VUIPurchaseRequest : NSObject

@property (retain, nonatomic) AMSBuyParams *amsBuyParams; // ivar: _amsBuyParams
@property (retain, nonatomic) NSString *buyParamsString; // ivar: _buyParamsString
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) NSString *enhancedBuyParamsString; // ivar: _enhancedBuyParamsString
@property (retain, nonatomic) AMSPurchase *purchase; // ivar: _purchase
@property (nonatomic) NSInteger purchaseType; // ivar: _purchaseType
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)shouldPlayWhenDoneForActionRef:(id)arg0 ;
+(NSInteger)getPurchaseTypeFromActionRef:(id)arg0 ;
-(id)initWithBuyParams:(id)arg0 ofPurchaseType:(NSInteger)arg1 ;
-(void)_recordErrorLog:(id)arg0 ;
-(void)enqueueWithCompletion:(id)arg0 ;
-(void)handleRequestCompletionWithResult:(id)arg0 andError:(id)arg1 ;


@end


#endif