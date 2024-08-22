// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TISTATISTICSPROACTIVETRACKER_H
#define _TISTATISTICSPROACTIVETRACKER_H

@class PETScalarEventTracker, TIAutocorrectionList, TIKeyboardCandidate, PETDistributionEventTracker;

#import <Foundation/Foundation.h>


@interface _TIStatisticsProactiveTracker : NSObject

@property (retain, nonatomic) PETScalarEventTracker *engagementCategoryEventDescriptionTracker; // ivar: _engagementCategoryEventDescriptionTracker
@property (retain, nonatomic) PETScalarEventTracker *engagementEventDescriptionTracker; // ivar: _engagementEventDescriptionTracker
@property (retain, nonatomic) PETScalarEventTracker *failureCategoryEventDescriptionTracker; // ivar: _failureCategoryEventDescriptionTracker
@property (retain, nonatomic) PETScalarEventTracker *failureCategoryEventTracker; // ivar: _failureCategoryEventTracker
@property (retain, nonatomic) PETScalarEventTracker *failureEventDescriptionTracker; // ivar: _failureEventDescriptionTracker
@property (retain, nonatomic) PETScalarEventTracker *failureEventTracker; // ivar: _failureEventTracker
@property (retain, nonatomic) TIAutocorrectionList *lastAutocorrectionList; // ivar: _lastAutocorrectionList
@property (retain, nonatomic) PETScalarEventTracker *personalizationEngagementTracker; // ivar: _personalizationEngagementTracker
@property (retain, nonatomic) PETScalarEventTracker *personalizationOfferTracker; // ivar: _personalizationOfferTracker
@property (retain, nonatomic) PETScalarEventTracker *personalizationWordAcceptanceTracker; // ivar: _personalizationWordAcceptanceTracker
@property (retain, nonatomic) TIKeyboardCandidate *responseKitEntryOffered; // ivar: _responseKitEntryOffered
@property (retain, nonatomic) PETScalarEventTracker *selectedCategoryEventTracker; // ivar: _selectedCategoryEventTracker
@property (retain, nonatomic) PETScalarEventTracker *selectedEventTracker; // ivar: _selectedEventTracker
@property (retain, nonatomic) PETScalarEventTracker *suggestedCategoryEventTracker; // ivar: _suggestedCategoryEventTracker
@property (retain, nonatomic) PETScalarEventTracker *suggestedEventTracker; // ivar: _suggestedEventTracker
@property (retain, nonatomic) PETDistributionEventTracker *timeInPredictionBarCategoryEventTracker; // ivar: _timeInPredictionBarCategoryEventTracker
@property (retain, nonatomic) PETDistributionEventTracker *timeInPredictionBarEventTracker; // ivar: _timeInPredictionBarEventTracker
@property (retain, nonatomic) PETScalarEventTracker *triggeredCategoryEventTracker; // ivar: _triggeredCategoryEventTracker
@property (retain, nonatomic) PETScalarEventTracker *triggeredEventTracker; // ivar: _triggeredEventTracker


+(id)sharedInstance;
-(id)init;
-(void)trackEngagementFailureWithDescription:(unsigned char)arg0 description:(id)arg1 categories:(id)arg2 locale:(id)arg3 fieldType:(id)arg4 ;
-(void)trackFailureWithDescription:(unsigned char)arg0 description:(id)arg1 categories:(id)arg2 locale:(id)arg3 fieldType:(id)arg4 ;
-(void)trackFailureWithSource:(unsigned char)arg0 reason:(unsigned char)arg1 categories:(id)arg2 locale:(id)arg3 fieldType:(id)arg4 ;
-(void)trackPredictionTimeWithSource:(unsigned char)arg0 time:(CGFloat)arg1 selected:(BOOL)arg2 categories:(id)arg3 locale:(id)arg4 fieldType:(id)arg5 ;
-(void)trackSelectedWithSource:(unsigned char)arg0 position:(NSUInteger)arg1 categories:(id)arg2 locale:(id)arg3 fieldType:(id)arg4 ;
-(void)trackSuggestedWithSource:(unsigned char)arg0 count:(NSUInteger)arg1 categories:(id)arg2 locale:(id)arg3 fieldType:(id)arg4 ;
-(void)trackTriggeredWithSource:(unsigned char)arg0 categories:(id)arg1 locale:(id)arg2 fieldType:(id)arg3 ;


@end


#endif