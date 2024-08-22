// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWKUIAQIMODEL_H
#define NWKUIAQIMODEL_H

@class NSString, UIColor, NSDate;

#import <Foundation/Foundation.h>


@interface NWKUIAQIModel : NSObject

@property (readonly) NSString *categoryDescription; // ivar: _categoryDescription
@property (readonly) UIColor *color; // ivar: _color
@property (readonly) NSDate *date; // ivar: _date
@property (readonly) NSDate *expiration; // ivar: _expiration
@property (readonly) NSString *label; // ivar: _label
@property (readonly) NSString *name; // ivar: _name


-(id)initWithAirQualityConditions:(id)arg0 color:(id)arg1 ;
-(id)initWithName:(id)arg0 label:(id)arg1 categoryDescription:(id)arg2 color:(id)arg3 date:(id)arg4 expiration:(id)arg5 ;


@end


#endif