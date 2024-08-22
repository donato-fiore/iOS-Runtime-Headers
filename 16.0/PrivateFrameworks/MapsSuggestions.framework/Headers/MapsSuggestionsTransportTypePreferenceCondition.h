// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSUGGESTIONSTRANSPORTTYPEPREFERENCECONDITION_H
#define MAPSSUGGESTIONSTRANSPORTTYPEPREFERENCECONDITION_H



#import "MapsSuggestionsBaseCondition.h"

@interface MapsSuggestionsTransportTypePreferenceCondition : MapsSuggestionsBaseCondition {
    NSInteger _requiredTransportTypePreference;
}




-(BOOL)isTrue;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 requiresTransportType:(NSInteger)arg1 ;


@end


#endif