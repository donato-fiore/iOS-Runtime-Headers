// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSHOLIDAYCALENDAREVENTRULETRAITS_H
#define CLSHOLIDAYCALENDAREVENTRULETRAITS_H


#import <Foundation/Foundation.h>


@interface CLSHolidayCalendarEventRuleTraits : NSObject

@property (nonatomic) BOOL containsMePerson; // ivar: _containsMePerson
@property (nonatomic) NSUInteger locationTrait; // ivar: _locationTrait
@property (nonatomic) NSUInteger numberOfPeople; // ivar: _numberOfPeople
@property (nonatomic) NSUInteger peopleTrait; // ivar: _peopleTrait


-(id)description;
-(id)init;


@end


#endif