// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXFALLBACKACTIONS_H
#define ATXFALLBACKACTIONS_H

@class NSBundle, ATXProactiveSuggestionClientModelSpecification;

#import <Foundation/Foundation.h>


@interface ATXFallbackActions : NSObject {
    NSBundle *_bundle;
    ATXProactiveSuggestionClientModelSpecification *_clientModelSpec;
}




+(NSUInteger)fallbackActionTypeForString:(id)arg0 ;
+(id)dateWithoutMinutesAndSeconds:(id)arg0 ;
+(id)fallbackActionsBundle;
+(id)stringForFallbackActionType:(NSUInteger)arg0 ;
-(id)createAnEventForCurrentDate:(id)arg0 ;
-(id)init;
-(id)initWithClientModelSpec:(id)arg0 ;
-(id)localizedStringForKey:(id)arg0 ;
-(id)proactiveSuggestionForAction:(id)arg0 ;
-(id)searchSafari;
-(id)sendAMessage;
-(id)startATimer;
-(id)suggestionforSpecifiedFallbackActionType:(NSUInteger)arg0 ;
-(id)suggestionsForAllFallbackActions;
-(id)viewPhotos;


@end


#endif