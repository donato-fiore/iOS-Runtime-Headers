// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDATEPICKERCOMPONENT_H
#define _UIDATEPICKERCOMPONENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _UIDatePickerComponent : NSObject {
    NSUInteger _equivalentUnit;
}


@property (readonly, nonatomic) NSUInteger calendarUnit; // ivar: _calendarUnit
@property (readonly, nonatomic) NSUInteger equivalentUnit;
@property (readonly, nonatomic) NSString *formatString; // ivar: _formatString
@property (nonatomic) _NSRange unitRange; // ivar: _unitRange
@property (nonatomic) CGFloat width; // ivar: _width


+(id)componentsFromDateFormatString:(id)arg0 locale:(id)arg1 ;
+(id)componentsFromDateFormatString:(id)arg0 locale:(id)arg1 desiredUnits:(NSInteger)arg2 ;
-(id)_initWithFormatString:(id)arg0 calendarUnit:(NSUInteger)arg1 ;
-(id)description;


@end


#endif