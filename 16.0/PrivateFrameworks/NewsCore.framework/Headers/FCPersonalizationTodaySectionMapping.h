// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCPERSONALIZATIONTODAYSECTIONMAPPING_H
#define FCPERSONALIZATIONTODAYSECTIONMAPPING_H

@class NTPBTodaySectionsMapping, NSDictionary;

#import <Foundation/Foundation.h>


@interface FCPersonalizationTodaySectionMapping : NSObject {
    NTPBTodaySectionsMapping *_pbTodaySectionMapping;
}


@property (retain, nonatomic) NSDictionary *todaySectionIdentifiersToFRGroupViewExposureTypes; // ivar: _todaySectionIdentifiersToFRGroupViewExposureTypes


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)groupViewExposureTypesForTodaySectionIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPBTodaySectionMapping:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif