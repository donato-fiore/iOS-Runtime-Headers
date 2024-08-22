// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSUGGESTIONSFEATUREFLAGCONDITION_H
#define MAPSSUGGESTIONSFEATUREFLAGCONDITION_H

@class NSString;


#import "MapsSuggestionsBaseCondition.h"

@interface MapsSuggestionsFeatureFlagCondition : MapsSuggestionsBaseCondition {
    NSString *_featureFlag;
}




-(BOOL)isTrue;
-(id)initWithFeatureFlag:(id)arg0 ;


@end


#endif