// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXMODEGLOBALS_H
#define ATXMODEGLOBALS_H

@class NSDictionary;
@protocol ATXLocationParameters;

#import <Foundation/Foundation.h>


@interface ATXModeGlobals : NSObject <ATXLocationParameters>

 {
    NSDictionary *_parameters;
}




+(id)sharedInstance;
-(BOOL)isAutomationTriggerSuggestionsForFocusEnabled;
-(BOOL)isSetupSuggestionsForFocusEnabled;
-(id)init;
-(id)initWithAssetClass:(Class)arg0 ;
-(int)currentLocationUpdateInterval;
-(int)frequentLOIMinimumVisits;
-(int)homeLOISearchRadius;
-(int)locationOfInterestSearchRadius;
-(int)locationOfInterestUpdateInterval;
-(int)predictedExitTimesUpdateInterval;
-(int)predictedLocationsOfInterestUpdateInterval;
-(int)previousLOIExpirationTime;
-(int)workLOISearchRadius;


@end


#endif