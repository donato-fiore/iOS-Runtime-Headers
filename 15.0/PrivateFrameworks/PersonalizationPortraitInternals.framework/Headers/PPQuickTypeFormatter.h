// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPQUICKTYPEFORMATTER_H
#define PPQUICKTYPEFORMATTER_H

@class PPQuickTypeQuery, NSLocale, NSString, _PASLock, NSDateFormatter, NSCache, NSURL, NSMeasurementFormatter, NSLengthFormatter, NSDateComponentsFormatter;

#import <Foundation/Foundation.h>


@interface PPQuickTypeFormatter : NSObject {
    PPQuickTypeQuery *_query;
    NSLocale *_locale;
    NSString *_desiredLanguage;
    NSString *_fallbackLanguage;
    _PASLock *_localizedStrings;
    NSDateFormatter *_birthdayFormatter;
    NSDateFormatter *_chineseBirthdayFormatter;
    NSDateFormatter *_yearlessChineseBirthdayFormatter;
    NSDateFormatter *_shortEventFormatter;
    NSDateFormatter *_longEventFormatter;
    NSCache *_localizedLabelCache;
    NSCache *_dateFormatCache;
    NSURL *_labeledValueLocalizationURL;
    NSCache *_appNameCache;
    NSMeasurementFormatter *_measurementWholeFormatter;
    NSMeasurementFormatter *_measurementDecimalFormatter;
    NSMeasurementFormatter *_measurementUnscaledFormatter;
    NSLengthFormatter *_lengthFormatter;
    NSDateComponentsFormatter *_dateComponentFormatter;
}




+(id)formatterWithQuery:(id)arg0 ;
+(id)new;
-(id)attributionPattern;
-(id)destinationLabel;
-(id)distanceLabel;
-(id)etaLabel;
-(id)formattedBirthday:(id)arg0 ;
-(id)formattedEventTime:(id)arg0 ;
-(id)formattedLengthInMeters:(CGFloat)arg0 ;
-(id)formattedMeasurement:(id)arg0 allowDecimals:(BOOL)arg1 scaleUnits:(BOOL)arg2 ;
-(id)formattedPostalAddress:(id)arg0 ;
-(id)formattedStringForLabel:(id)arg0 ;
-(id)formattedStringsForLabels:(id)arg0 ;
-(id)formattedTimeInterval:(CGFloat)arg0 ;
-(id)init;
-(id)inviteLinkLabel;
-(id)localizedAppNameForBundleIdentifier:(id)arg0 ;
-(id)makeBirthdayFormatter;
-(id)makeChineseBirthdayFormatter;
-(id)makeDateComponentFormatter;
-(id)makeLengthFormatter;
-(id)makeLongEventFormatter;
-(id)makeMeasurementDecimalFormatter;
-(id)makeMeasurementUnscaledFormatter;
-(id)makeMeasurementWholeFormatter;
-(id)makeShortEventFormatter;
-(id)makeYearlessChineseBirthdayFormatter;
-(id)navigationItemLabelForTypeLabel:(id)arg0 destination:(id)arg1 ;
-(id)streetLabel;
-(id)timeLeftLabel;


@end


#endif