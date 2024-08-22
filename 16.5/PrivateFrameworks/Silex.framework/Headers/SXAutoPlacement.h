// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXAUTOPLACEMENT_H
#define SXAUTOPLACEMENT_H

@class NSString;
@protocol SXAutoPlacement, SXAdvertisementPlacementType, SXSuggestedArticlesPlacementType;


#import "SXJSONObject.h"

@interface SXAutoPlacement : SXJSONObject <SXAutoPlacement>



@property (readonly, nonatomic) NSObject<SXAdvertisementPlacementType> *advertisement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXSuggestedArticlesPlacementType> *suggestedArticles;
@property (readonly) Class superclass;


+(Class)classForProtocolProperty:(id)arg0 withValue:(id)arg1 ;


@end


#endif