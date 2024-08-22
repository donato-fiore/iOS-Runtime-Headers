// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKCALENDARDAYCELLICONCONFIGURATION_H
#define _HKCALENDARDAYCELLICONCONFIGURATION_H

@class UIColor;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _HKCalendarDayCellIconConfiguration : NSObject <NSCopying>

 {
    NSInteger _dateIndex;
    UIColor *_color;
    NSInteger _style;
}




+(id)configurationWithDateIndex:(NSInteger)arg0 color:(id)arg1 style:(NSInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif