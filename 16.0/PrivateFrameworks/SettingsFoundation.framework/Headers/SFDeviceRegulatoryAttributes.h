// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFDEVICEREGULATORYATTRIBUTES_H
#define SFDEVICEREGULATORYATTRIBUTES_H

@class NSString, NSDate, UIImage;

#import <Foundation/Foundation.h>


@interface SFDeviceRegulatoryAttributes : NSObject

@property (retain, nonatomic) NSString *_resolvedIndiaBISNumber; // ivar: __resolvedIndiaBISNumber
@property (retain, nonatomic) NSDate *_resolvedManufacturingDate; // ivar: __resolvedManufacturingDate
@property (retain, nonatomic) UIImage *_resolvedRegulatoryImage; // ivar: __resolvedRegulatoryImage
@property (retain, nonatomic) NSDate *_resolvedStartingWeek; // ivar: __resolvedStartingWeek
@property (readonly, copy, nonatomic) NSString *indiaBISRegulatoryNumber;
@property (readonly, nonatomic) NSDate *manufacturingDate; // ivar: _manufacturingDate
@property (readonly, nonatomic) NSUInteger monthOfManufacture; // ivar: _monthOfManufacture
@property (readonly, copy, nonatomic) NSString *plantCode;
@property (readonly, copy, nonatomic) UIImage *regulatoryImage;
@property (readonly, copy, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (readonly, nonatomic) NSUInteger weekOfManufacture; // ivar: _weekOfManufacture
@property (readonly, nonatomic) NSUInteger yearForWeekOfManufacture; // ivar: _yearForWeekOfManufacture
@property (readonly, nonatomic) NSUInteger yearOfManufacture; // ivar: _yearOfManufacture


+(id)_calendar;
+(id)_dateFormatter;
+(id)_weekCodeLookup;
+(id)_yearCodeToStartDateLookup;
+(id)currentDeviceAttributes;
+(id)getRegulatoryAttributes;
-(id)initWithRegulatoryAttributes:(id)arg0 serialNumber:(id)arg1 ;
-(void)_resolveDeviceAttributes:(id)arg0 ;
-(void)_resolveIndiaBISRegulatoryNumber:(id)arg0 ;
-(void)_resolveManufacturingDateRelatedFields:(id)arg0 ;
-(void)_resolveRegulatoryImage:(id)arg0 ;


@end


#endif