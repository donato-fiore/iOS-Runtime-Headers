// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMLENGTHPROPERTY_H
#define CMLENGTHPROPERTY_H



#import "CMProperty.h"

@interface CMLengthProperty : CMProperty {
    CGFloat value;
    int unitType;
}




+(CGFloat)convertToPoints:(CGFloat)arg0 unit:(int)arg1 ;
+(id)cssStringValue:(CGFloat)arg0 unit:(int)arg1 ;
-(CGFloat)value;
-(id)cssString;
-(id)cssStringForName:(id)arg0 ;
-(id)description;
-(id)initWithNumber:(CGFloat)arg0 ;
-(id)initWithNumber:(CGFloat)arg0 unit:(int)arg1 ;
-(int)compareValue:(id)arg0 ;
-(int)intValue;
-(int)unitType;
-(void)addNumber:(CGFloat)arg0 unit:(int)arg1 ;


@end


#endif