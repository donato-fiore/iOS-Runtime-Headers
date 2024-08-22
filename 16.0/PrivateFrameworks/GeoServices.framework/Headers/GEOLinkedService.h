// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOLINKEDSERVICE_H
#define GEOLINKEDSERVICE_H

@class NSArray, NSString, NSTimeZone;

#import <Foundation/Foundation.h>

#import "GEOPDLinkedService.h"
#import "GEOFeatureStyleAttributes.h"

@interface GEOLinkedService : NSObject {
    GEOPDLinkedService *_linkedService;
    NSArray *_cachedBusinessHours;
    BOOL _checkedForBusinessHoursAlready;
}


@property (retain, nonatomic) NSArray *businessHours; // ivar: _businessHours
@property (retain, nonatomic) NSString *localizedCategoryName; // ivar: _localizedCategoryName
@property (retain, nonatomic) GEOFeatureStyleAttributes *styleAttributes; // ivar: _styleAttributes
@property (retain, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone


-(id)initWithGEOPDLinkedService:(id)arg0 timeZone:(id)arg1 ;


@end


#endif