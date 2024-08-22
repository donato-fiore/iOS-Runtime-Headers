// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPOIEVENT_H
#define GEOPOIEVENT_H

@class NSArray, NSDateInterval, NSString, NSTimeZone;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GEOMapItemIdentifier.h"
#import "GEOCacheInvalidationData.h"

@interface GEOPOIEvent : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *categories; // ivar: _categories
@property (nonatomic) ? centerCoordinate; // ivar: _centerCoordinate
@property (retain, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (nonatomic) NSInteger expectedAttendance; // ivar: _expectedAttendance
@property (retain, nonatomic) NSArray *hours; // ivar: _hours
@property (retain, nonatomic) GEOMapItemIdentifier *identifier; // ivar: _identifier
@property (retain, nonatomic) GEOCacheInvalidationData *invalidationData; // ivar: _invalidationData
@property (retain, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (retain, nonatomic) NSArray *performers; // ivar: _performers
@property (retain, nonatomic) NSArray *relatedPOIIdentifiers; // ivar: _relatedPOIIdentifiers
@property (retain, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone
@property (readonly, nonatomic, getter=isUpdateRequired) BOOL updateRequired; // ivar: _updateRequired


+(BOOL)isUpdateRequiredForInvalidationData:(id)arg0 ;
+(BOOL)isUpdateRequiredForInvalidationToken:(id)arg0 error:(*id)arg1 ;
+(BOOL)supportsSecureCoding;
-(BOOL)configureWithComponents:(id)arg0 ;
-(BOOL)configureWithPOIComponent:(id)arg0 ;
-(BOOL)configureWithPlaceInfoComponent:(id)arg0 ;
-(id)dateIntervalFromDateTimeRanges:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMapItemIdentifier:(id)arg0 ;
-(id)initWithPlace:(id)arg0 ;
-(id)invalidationToken;
-(void)encodeWithCoder:(id)arg0 ;
-(void)geoPOIEventCommonInit;


@end


#endif