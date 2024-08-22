// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFIMAGEMETADATABUILDER_H
#define PFIMAGEMETADATABUILDER_H

@class NSDictionary, NSMutableDictionary;


#import "PFMetadataBuilder.h"

@interface PFImageMetadataBuilder : PFMetadataBuilder

@property (readonly, copy, nonatomic) NSDictionary *exifDictionary;
@property (retain, nonatomic) NSMutableDictionary *exifMutableDictionary; // ivar: _exifMutableDictionary
@property (readonly, copy, nonatomic) NSDictionary *iptcDictionary;
@property (retain, nonatomic) NSMutableDictionary *iptcMutableDictionary; // ivar: _iptcMutableDictionary
@property (readonly, copy, nonatomic) NSDictionary *tiffDictionary;
@property (retain, nonatomic) NSMutableDictionary *tiffMutableDictionary; // ivar: _tiffMutableDictionary


+(id)_dateFormatterTemplate;
+(id)_exifDateTimeFormatter;
+(id)_exifSubsecTimeFormatter;
+(id)_exifTimeZoneOffsetFormatter;
+(id)_gpsDateFormatter;
+(id)_gpsTimeFormatter;
+(id)iptcDateFormatter;
+(id)iptcTimeFormatter;
-(id)init;
-(void)_updateCreationDate;
-(void)setAccessibilityDescription:(id)arg0 ;
-(void)setCaption:(id)arg0 ;
-(void)setCreationDate:(id)arg0 timeZone:(id)arg1 ;
-(void)setKeywords:(id)arg0 ;
-(void)setPeopleNames:(id)arg0 ;
-(void)setTitle:(id)arg0 ;


@end


#endif