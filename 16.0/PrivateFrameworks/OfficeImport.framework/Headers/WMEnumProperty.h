// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WMENUMPROPERTY_H
#define WMENUMPROPERTY_H



#import "CMProperty.h"

@interface WMEnumProperty : CMProperty {
    NSUInteger wdValue;
}




-(NSUInteger)value;
-(id)cssStringForName:(id)arg0 ;
-(id)description;
-(id)initWithEnum:(NSUInteger)arg0 ;
-(id)mapCellTextVAlign;
-(id)mapJustification;
-(id)mapUnderline;
-(id)mapVerticalAlign;


@end


#endif