// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HRESTANDARDASYNCRECOMMENDATIONGENERATIONPROCESS_H
#define HRESTANDARDASYNCRECOMMENDATIONGENERATIONPROCESS_H

@class HMHome, NSSet;

#import <Foundation/Foundation.h>


@interface HREStandardAsyncRecommendationGenerationProcess : NSObject

@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) NSSet *homeRecommendableObjects; // ivar: _homeRecommendableObjects
@property (nonatomic) NSUInteger options; // ivar: _options
@property (retain, nonatomic) NSSet *sourceItems; // ivar: _sourceItems
@property (retain, nonatomic) NSSet *sourceRecommendableObjects; // ivar: _sourceRecommendableObjects


-(BOOL)shouldGenerateRecommendations;
-(id)generateRecommendations;
-(id)initWithHome:(id)arg0 sourceItems:(id)arg1 options:(NSUInteger)arg2 ;


@end


#endif