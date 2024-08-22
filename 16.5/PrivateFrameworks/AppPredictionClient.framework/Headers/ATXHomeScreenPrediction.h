// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXHOMESCREENPREDICTION_H
#define ATXHOMESCREENPREDICTION_H

@class NSDictionary, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface ATXHomeScreenPrediction : NSObject {
    NSDictionary *_suggestions;
}


@property (readonly, nonatomic) NSString *blendingCacheId; // ivar: _blendingCacheId
@property (readonly, nonatomic) NSArray *stacksAffectedByDebugRotation; // ivar: _stacksAffectedByDebugRotation


-(id)init;
-(id)initWithBlendingCacheIdentifier:(id)arg0 widgetSuggestions:(id)arg1 stacksAffectedByDebugRotation:(id)arg2 ;
-(id)suggestionForStackIdentifier:(id)arg0 ;
-(id)suggestionsForAllStacks;


@end


#endif