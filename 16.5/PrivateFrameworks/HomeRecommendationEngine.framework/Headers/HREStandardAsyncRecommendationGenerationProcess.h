// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HRESTANDARDASYNCRECOMMENDATIONGENERATIONPROCESS_H
#define HRESTANDARDASYNCRECOMMENDATIONGENERATIONPROCESS_H

@class HMHome, NSSet, HFAccessoryTypeGroup;

#import <Foundation/Foundation.h>


@interface HREStandardAsyncRecommendationGenerationProcess : NSObject

@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) NSSet *homeRecommendableObjects; // ivar: _homeRecommendableObjects
@property (nonatomic) NSUInteger options; // ivar: _options
@property (retain, nonatomic) NSSet *sourceItems; // ivar: _sourceItems
@property (retain, nonatomic) NSSet *sourceRecommendableObjects; // ivar: _sourceRecommendableObjects
@property (retain, nonatomic) HFAccessoryTypeGroup *typeGroup; // ivar: _typeGroup


-(BOOL)shouldGenerateRecommendations;
-(id)generateRecommendations;
-(id)initWithHome:(id)arg0 sourceItems:(id)arg1 accessoryTypeGroup:(id)arg2 options:(NSUInteger)arg3 ;


@end


#endif