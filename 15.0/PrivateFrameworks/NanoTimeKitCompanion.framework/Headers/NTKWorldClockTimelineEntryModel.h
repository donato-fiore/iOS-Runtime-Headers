// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKWORLDCLOCKTIMELINEENTRYMODEL_H
#define NTKWORLDCLOCKTIMELINEENTRYMODEL_H

@class WorldClockCity;


#import "NTKTimelineEntryModel.h"

@interface NTKWorldClockTimelineEntryModel : NTKTimelineEntryModel

@property (retain, nonatomic) WorldClockCity *city; // ivar: _city
@property (nonatomic) BOOL showIdealizedTime; // ivar: _showIdealizedTime


+(id)_analogImageProvider;
-(CGFloat)_timeZoneOffset;
-(id)_abbreviationTextProvider;
-(id)_dayOffsetTextProvider;
-(id)_differenceTextProvider;
-(id)_differenceTextProviderWithSize:(NSInteger)arg0 andCaps:(BOOL)arg1 ;
-(id)_graphicCircularMetadata;
-(id)_newCircularMediumTemplate;
-(id)_newCircularSmallTemplate;
-(id)_newExtraLargeTemplate;
-(id)_newLargeModularTemplate;
-(id)_newLargeUtilityTemplate;
-(id)_newSignatureBezelTemplate;
-(id)_newSignatureCircularTemplate;
-(id)_newSignatureExtraLargeCircularTemplate;
-(id)_newSignatureRectangularTemplate;
-(id)_newSmallFlatUtilityTemplate;
-(id)_newSmallModularTemplate;
-(id)_signatureCorner;
-(id)_timeAndAbbreviationTextProvider;
-(id)_timeAndCityNameOffsetTextProvider;
-(id)_timeAndDayOffsetTextProvider;
-(id)_timeAndDifferenceOffsetTextProvider;
-(id)_timeCityNameTimeZoneOffsetTextProvider;
-(id)_timeTextProvider;
-(id)_timeZone;
-(id)init;
-(id)templateForComplicationFamily:(NSInteger)arg0 ;


@end


#endif