// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCOMPLICATIONSUGGESTIONPARAMETERS_H
#define ATXCOMPLICATIONSUGGESTIONPARAMETERS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface ATXComplicationSuggestionParameters : NSObject {
    NSDictionary *_parameters;
}




+(id)sharedInstance;
-(BOOL)alwaysUseFallbackSets;
-(id)appsToPriorsMapping;
-(id)fallbackSetsForSet1;
-(id)fallbackSetsForSet2;
-(id)fallbackSetsForSet3;
-(id)init;
-(id)inlineComplicationsToPriorsMapping;
-(id)modularComplicationsToPriorsMapping;


@end


#endif