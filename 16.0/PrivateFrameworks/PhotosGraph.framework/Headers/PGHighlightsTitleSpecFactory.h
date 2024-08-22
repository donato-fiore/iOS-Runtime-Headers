// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGHIGHLIGHTSTITLESPECFACTORY_H
#define PGHIGHLIGHTSTITLESPECFACTORY_H


#import <Foundation/Foundation.h>


@interface PGHighlightsTitleSpecFactory : NSObject



+(id)orderedHighlightTitleSpecTypesForMeaningLabel:(id)arg0 ;
+(id)specCollectionForMeaningLabel:(id)arg0 allowAllCities:(BOOL)arg1 ;
+(id)specPoolForAOILocation;
+(id)specPoolForBusinessItem;
+(id)specPoolForGenericLocation:(BOOL)arg0 ;
+(id)specPoolForPublicEvent;
+(id)specPoolForPublicEventWithBusiness;
+(id)specPoolsForBirthdayIncludingLocationIfPossible:(BOOL)arg0 allowAllCities:(BOOL)arg1 ;
+(id)specPoolsForHolidayEventIncludingLocationIfPossible:(BOOL)arg0 allowAllCities:(BOOL)arg1 ;
+(id)titleSpecForGenericLocation:(BOOL)arg0 ;
+(id)titleSpecForHolidayEventIncludingLocationIfPossible:(BOOL)arg0 ;


@end


#endif