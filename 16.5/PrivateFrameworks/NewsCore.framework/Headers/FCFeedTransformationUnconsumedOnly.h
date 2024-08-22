// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCFEEDTRANSFORMATIONUNCONSUMEDONLY_H
#define FCFEEDTRANSFORMATIONUNCONSUMEDONLY_H

@class NSString;
@protocol FCFeedTransforming;

#import <Foundation/Foundation.h>


@interface FCFeedTransformationUnconsumedOnly : NSObject <FCFeedTransforming>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<FCFeedTransforming> *innerFilter; // ivar: _innerFilter
@property (readonly) Class superclass;


-(id)init;
// -(id)initWithFilterMethod:(NSUInteger)arg0 consumedArticleItems:(id)arg1 minimumTimeSinceFirstConsumedToFilter:(CGFloat)arg2 filterDate:(id)arg3 articleIDProvider:(id)arg4 dateOfArticleIDConsumptionProvider:(unk)arg5 maxVersionConsumedProvider:(id)arg6 dateOfMaxVersionConsumptionProvider:(unk)arg7  ;
-(id)transformFeedItems:(id)arg0 ;


@end


#endif