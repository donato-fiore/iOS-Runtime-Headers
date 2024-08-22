// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFSHARINGUTILITIES_H
#define PFSHARINGUTILITIES_H


#import <Foundation/Foundation.h>


@interface PFSharingUtilities : NSObject



+(id)_dateFormatterTemplate;
+(id)_exifDateTimeFormatter;
+(id)_exifSubsecTimeFormatter;
+(id)_gpsDateFormatter;
+(id)_gpsTimeFormatter;
+(id)addAccessibilityDescription:(id)arg0 toAVMetadata:(id)arg1 ;
+(id)addCreationDate:(id)arg0 toExifDictionary:(id)arg1 ;
+(id)addCreationDate:(id)arg0 toTIFFDictionary:(id)arg1 ;
+(id)addCustomDate:(id)arg0 toAVMetadata:(id)arg1 ;
+(id)addCustomLocation:(id)arg0 toAVMetadata:(id)arg1 ;
+(id)addDescription:(id)arg0 toAVMetadata:(id)arg1 ;
+(id)exifDateTimeFromDate:(id)arg0 ;
+(id)exifSubsecTimeFromDate:(id)arg0 ;
+(id)gpsDictionaryForLocation:(id)arg0 ;
+(id)setString:(id)arg0 forKey:(id)arg1 inKeySpace:(id)arg2 inAVMetadata:(id)arg3 ;


@end


#endif