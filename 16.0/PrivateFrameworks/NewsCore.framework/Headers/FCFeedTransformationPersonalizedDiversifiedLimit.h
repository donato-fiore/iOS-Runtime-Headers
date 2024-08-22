// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCFEEDTRANSFORMATIONPERSONALIZEDDIVERSIFIEDLIMIT_H
#define FCFEEDTRANSFORMATIONPERSONALIZEDDIVERSIFIEDLIMIT_H

@class NSString;
@protocol FCLimitAwareFeedTransforming, FCPersonalizationFunctionProviding;

#import <Foundation/Foundation.h>


@interface FCFeedTransformationPersonalizedDiversifiedLimit : NSObject <FCLimitAwareFeedTransforming>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<FCPersonalizationFunctionProviding> *functionProvider; // ivar: _functionProvider
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger limit; // ivar: _limit
@property (readonly) Class superclass;


+(id)transformationWithFunctionProvider:(id)arg0 ;
+(id)transformationWithFunctionProvider:(id)arg0 limit:(NSUInteger)arg1 ;
-(id)transformFeedItems:(id)arg0 ;
-(id)transformFeedItems:(id)arg0 withRespectToLimit:(NSUInteger)arg1 ;


@end


#endif