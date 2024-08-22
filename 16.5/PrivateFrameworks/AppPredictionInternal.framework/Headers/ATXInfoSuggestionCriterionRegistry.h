// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXINFOSUGGESTIONCRITERIONREGISTRY_H
#define ATXINFOSUGGESTIONCRITERIONREGISTRY_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface ATXInfoSuggestionCriterionRegistry : NSObject {
    NSDictionary *_registry;
}




-(BOOL)isSourceIdentifierRegistered:(id)arg0 ;
-(NSInteger)confidenceLevelForCriterion:(id)arg0 sourceIdentifier:(id)arg1 ;
-(id)availableCriterionIdentifiersForSourceIdentifier:(id)arg0 ;
-(id)init;


@end


#endif