// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSHOLIDAYCALENDAREVENTOVERRIDES_H
#define CLSHOLIDAYCALENDAREVENTOVERRIDES_H

@class NSString, NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface CLSHolidayCalendarEventOverrides : NSObject

@property (readonly, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (readonly, nonatomic) NSArray *dateRuleOverrides; // ivar: _dateRuleOverrides
@property (readonly, nonatomic) CGFloat locationScore; // ivar: _locationScore
@property (readonly, nonatomic) NSDictionary *sceneImportanceOverrides; // ivar: _sceneImportanceOverrides
@property (readonly, nonatomic) NSString *uuid; // ivar: _uuid


-(id)initWithUUID:(id)arg0 countryCode:(id)arg1 dateRuleOverrides:(id)arg2 locationScore:(CGFloat)arg3 sceneImportanceOverrides:(id)arg4 ;
-(id)sceneImportanceStringForSceneName:(id)arg0 ;


@end


#endif