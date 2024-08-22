// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMCELLNUMBERMAPPER_H
#define EMCELLNUMBERMAPPER_H



#import "CMMapper.h"
#import "EDStyle.h"
#import "EDWorkbook.h"

@interface EMCellNumberMapper : CMMapper {
    CGFloat edValue;
    EDStyle *edStyle;
    EDWorkbook *workbook;
}


@property CGFloat columnWidth; // ivar: _columnWidth


-(id)formatValueAsNumber;
-(id)initWithDoubleValue:(CGFloat)arg0 style:(id)arg1 columnWidth:(CGFloat)arg2 workbook:(id)arg3 parent:(id)arg4 ;
-(id)insertRedSpanIfNegativeAt:(id)arg0 ;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;


@end


#endif