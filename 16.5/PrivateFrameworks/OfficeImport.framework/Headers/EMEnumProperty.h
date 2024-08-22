// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMENUMPROPERTY_H
#define EMENUMPROPERTY_H



#import "CMProperty.h"

@interface EMEnumProperty : CMProperty {
    int wdValue;
}




+(id)mapHorizontalAlignmentValue:(int)arg0 ;
+(id)mapUnderlineValue:(int)arg0 ;
+(id)mapVerticalAlignmentValue:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)cssStringForName:(id)arg0 ;
-(id)description;
-(id)initWithEnum:(int)arg0 ;
-(id)mapHorizontalAlignment;
-(id)mapUnderline;
-(id)mapVerticalAlignment;
-(int)value;


@end


#endif