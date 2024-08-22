// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HRESTANDARDASYNCRECOMMENDATIONSOURCE_H
#define HRESTANDARDASYNCRECOMMENDATIONSOURCE_H

@class NSString;
@protocol HRERecommendationSource;

#import <Foundation/Foundation.h>


@interface HREStandardAsyncRecommendationSource : NSObject <HRERecommendationSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger disablingOptions;
@property (readonly, nonatomic) Class generationProcessClass; // ivar: _generationProcessClass
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)dispatchProcess:(id)arg0 options:(NSUInteger)arg1 actionBlock:(id)arg2 ;
-(id)init;
-(id)recommendationsForHome:(id)arg0 withServiceLikeItems:(id)arg1 options:(NSUInteger)arg2 ;
-(void)setupProcess:(id)arg0 ;


@end


#endif