// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXRESOLVEDAUTOPLACEMENT_H
#define SXRESOLVEDAUTOPLACEMENT_H

@class NSString;
@protocol SXAutoPlacement, SXAdvertisementPlacementType, SXSuggestedArticlesPlacementType;

#import <Foundation/Foundation.h>


@interface SXResolvedAutoPlacement : NSObject <SXAutoPlacement>



@property (readonly, nonatomic) NSObject<SXAdvertisementPlacementType> *advertisement; // ivar: _advertisement
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXSuggestedArticlesPlacementType> *suggestedArticles; // ivar: _suggestedArticles
@property (readonly) Class superclass;


-(id)initWithAdvertisement:(id)arg0 suggestedArticles:(id)arg1 ;


@end


#endif