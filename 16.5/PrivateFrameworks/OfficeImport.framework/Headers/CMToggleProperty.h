// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMTOGGLEPROPERTY_H
#define CMTOGGLEPROPERTY_H



#import "CMProperty.h"

@interface CMToggleProperty : CMProperty {
    int wdValue;
}




-(id)cssStringForName:(id)arg0 ;
-(id)initWithCMTogglePropertyValue:(int)arg0 ;
-(id)mapBold;
-(id)mapItalic;
-(id)mapStrikeTrough;
-(int)compareValue:(id)arg0 ;
-(int)value;
-(void)resolveWithBaseProperty:(id)arg0 ;


@end


#endif