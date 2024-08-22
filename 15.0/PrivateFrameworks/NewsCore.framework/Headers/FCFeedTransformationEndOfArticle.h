// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCFEEDTRANSFORMATIONENDOFARTICLE_H
#define FCFEEDTRANSFORMATIONENDOFARTICLE_H

@class NSString;
@protocol FCFeedTransforming, FCPurchaseProviderType;

#import <Foundation/Foundation.h>


@interface FCFeedTransformationEndOfArticle : NSObject <FCFeedTransforming>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger expireArticlesAfter; // ivar: _expireArticlesAfter
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isPaywallAvailable; // ivar: _isPaywallAvailable
@property (nonatomic) NSUInteger maxiumInaccessibleHeadlineCount; // ivar: _maxiumInaccessibleHeadlineCount
@property (nonatomic) NSUInteger minimumResultHeadlineCount; // ivar: _minimumResultHeadlineCount
@property (nonatomic) CGFloat paidHeadlineRatio; // ivar: _paidHeadlineRatio
@property (retain, nonatomic) NSObject<FCPurchaseProviderType> *purchaseProvider; // ivar: _purchaseProvider
@property (readonly) Class superclass;


+(id)transformationWithConfiguration:(id)arg0 context:(id)arg1 isPaywallAvailable:(BOOL)arg2 ;
-(id)transformFeedItems:(id)arg0 ;
-(id)transformHeadlines:(id)arg0 ;
// -(id)transformItems:(id)arg0 isPaidBlock:(id)arg1 sourceChannelIDProvider:(unk)arg2  ;


@end


#endif