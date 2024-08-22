// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DBANALYTICSSCREENINFO_H
#define _DBANALYTICSSCREENINFO_H

@class DBAnalyticsTimeAccumulator, NSString, NSDictionary, CARScreenInfo, CARScreenViewArea;



@interface _DBAnalyticsScreenInfo : DBAnalyticsTimeAccumulator

@property (readonly, copy, nonatomic) NSString *analyticsPrefix; // ivar: _analyticsPrefix
@property (readonly, nonatomic) NSDictionary *analytics_sessionEndedDictionaryRepresentation;
@property (readonly, nonatomic) NSDictionary *analytics_sessionStartedDictionaryRepresentation;
@property (nonatomic) BOOL hasTransitionControlsWithinViewAreas; // ivar: _hasTransitionControlsWithinViewAreas
@property (readonly, nonatomic) NSUInteger indexOfLargestViewArea; // ivar: _indexOfLargestViewArea
@property (readonly, nonatomic) CARScreenInfo *screenInfo; // ivar: _screenInfo
@property (readonly, nonatomic) CARScreenViewArea *sessionStartViewArea; // ivar: _sessionStartViewArea
@property (nonatomic) NSUInteger viewAreaChangeCount; // ivar: _viewAreaChangeCount
@property (nonatomic) NSUInteger viewAreaChangeUsingTransitionControlCount; // ivar: _viewAreaChangeUsingTransitionControlCount


-(id)_identifierForViewArea:(id)arg0 ;
-(id)initWithScreenInfo:(id)arg0 analyticsPrefix:(id)arg1 sessionStartViewArea:(id)arg2 ;
-(void)startCountingTimeForViewArea:(id)arg0 ;


@end


#endif