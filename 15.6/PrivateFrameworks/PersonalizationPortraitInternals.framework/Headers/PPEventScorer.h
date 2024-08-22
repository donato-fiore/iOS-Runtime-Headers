// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPEVENTSCORER_H
#define PPEVENTSCORER_H

@class NSDictionary, EAEmailAddressSet, NSSet;

#import <Foundation/Foundation.h>

#import "PPTrialWrapper.h"

@interface PPEventScorer : NSObject {
    NSDictionary *_pastEventTitlesAndParticipants;
    CGFloat _earliestStartTime;
    BOOL _shouldConsiderAlarms;
    EAEmailAddressSet *_emailVIPEmailAddresses;
    NSSet *_favoritesEmailAddresses;
    int _rankingOptions;
    NSInteger _pastTitlesCount;
    PPTrialWrapper *_trialWrapper;
}




+(id)enrichDictionary:(id)arg0 withEvent:(id)arg1 ;
+(void)clearAssetCache;
+(void)setLocationsOfInterestLocations:(id)arg0 withReferenceDate:(id)arg1 ;
-(BOOL)isHomeCalendar:(id)arg0 ;
-(BOOL)isWorkCalendar:(id)arg0 ;
-(BOOL)scoreIsExtraordinary:(CGFloat)arg0 rankingOptions:(int)arg1 ;
-(id)init;
-(id)initWithPastEventTitlesAndParticipants:(id)arg0 andEarliestStartTime:(CGFloat)arg1 shouldConsiderAlarms:(BOOL)arg2 withOptions:(int)arg3 trialWrapper:(id)arg4 ;
-(id)initWithTrialWrapper:(id)arg0 ;
-(id)scoreEvent:(id)arg0 usingDate:(id)arg1 ;
-(void)setEmailVIPEmailAddresses:(id)arg0 ;
-(void)setFavoritesEmailAddresses:(id)arg0 ;


@end


#endif