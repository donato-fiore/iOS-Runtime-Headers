// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCFEEDTRANSFORMATIONPERSONALIZEDSORT_H
#define FCFEEDTRANSFORMATIONPERSONALIZEDSORT_H

@class NSString;
@protocol FCFeedTransforming, FCFeedPersonalizing;

#import <Foundation/Foundation.h>

#import "FCMapTable.h"

@interface FCFeedTransformationPersonalizedSort : NSObject <FCFeedTransforming>



@property (nonatomic) NSInteger configurationSet; // ivar: _configurationSet
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) FCMapTable *feedItemScores; // ivar: _feedItemScores
@property (retain, nonatomic) NSObject<FCFeedPersonalizing> *feedPersonalizer; // ivar: _feedPersonalizer
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger sortOptions; // ivar: _sortOptions
@property (readonly) Class superclass;


+(id)transformationWithPersonalizer:(id)arg0 ;
+(id)transformationWithPersonalizer:(id)arg0 configurationSet:(NSInteger)arg1 ;
+(id)transformationWithPersonalizer:(id)arg0 feedItemScores:(id)arg1 ;
+(id)transformationWithPersonalizer:(id)arg0 feedItemScores:(id)arg1 sortOptions:(NSInteger)arg2 ;
+(id)transformationWithPersonalizer:(id)arg0 feedItemScores:(id)arg1 sortOptions:(NSInteger)arg2 configurationSet:(NSInteger)arg3 ;
+(id)transformationWithPersonalizer:(id)arg0 sortOptions:(NSInteger)arg1 ;
-(id)personalizedHeadlines:(id)arg0 ;
-(id)transformFeedItems:(id)arg0 ;
-(id)transformHeadlines:(id)arg0 ;


@end


#endif