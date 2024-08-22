// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STPRESETSENABLERESTRICTIONSCOREANALYTICSEVENT_H
#define STPRESETSENABLERESTRICTIONSCOREANALYTICSEVENT_H

@class NSString, NSNumber, NSDictionary;
@protocol STCoreAnalyticsEvent;

#import <Foundation/Foundation.h>


@interface STPresetsEnableRestrictionsCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent>



@property (readonly, copy) NSString *description;
@property (readonly) NSNumber *lowerBoundAgeRange; // ivar: _lowerBoundAgeRange
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSDictionary *payload;
@property (readonly) NSInteger selectionType; // ivar: _selectionType
@property (readonly) NSString *sessionId; // ivar: _sessionId
@property (readonly) NSNumber *upperBoundAgeRange; // ivar: _upperBoundAgeRange


-(id)_stringDescriptionForSelectionType:(NSInteger)arg0 ;
-(id)initWithSessionId:(id)arg0 selectionType:(NSInteger)arg1 lowerBoundAgeRange:(id)arg2 upperBoundAgeRange:(id)arg3 ;


@end


#endif