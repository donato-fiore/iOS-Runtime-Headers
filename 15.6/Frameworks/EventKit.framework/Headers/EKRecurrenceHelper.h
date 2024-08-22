// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKRECURRENCEHELPER_H
#define EKRECURRENCEHELPER_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface EKRecurrenceHelper : NSObject {
    NSString *_specifier;
    BOOL _dirty;
    BOOL _parsed;
    NSArray *_daysOfTheWeek;
    NSArray *_daysOfTheMonth;
    NSArray *_daysOfTheYear;
    NSArray *_weeksOfTheYear;
    NSArray *_monthsOfTheYear;
    NSArray *_setPositions;
}


@property (copy, nonatomic) NSArray *daysOfTheMonth;
@property (copy, nonatomic) NSArray *daysOfTheWeek;
@property (copy, nonatomic) NSArray *daysOfTheYear;
@property (readonly, nonatomic) BOOL isDirty;
@property (copy, nonatomic) NSArray *monthsOfTheYear;
@property (copy, nonatomic) NSArray *setPositions;
@property (copy, nonatomic) NSString *specifier;
@property (copy, nonatomic) NSArray *weeksOfTheYear;


-(BOOL)isEqual:(id)arg0 ;
-(id)_parseDaysOfWeek:(struct ? *)arg0 range:(struct ? )arg1 ;
-(id)_parseIndexList:(struct ? *)arg0 range:(struct ? )arg1 ;
-(id)initWithSpecifier:(id)arg0 ;
-(void)_appendDaysOfTheWeek:(id)arg0 toSpecifier:(id)arg1 ;
-(void)_appendIndexList:(id)arg0 toSpecifier:(id)arg1 propertyKey:(unsigned short)arg2 ;
-(void)_clearArrays;
-(void)_parseSpecifierIfNeeded;
-(void)_updateSpecifier;
-(void)revert;


@end


#endif