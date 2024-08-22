// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMCOLUMNINFOMAPPER_H
#define EMCOLUMNINFOMAPPER_H



#import "CMMapper.h"
#import "EDColumnInfo.h"

@interface EMColumnInfoMapper : CMMapper {
    EDColumnInfo *edColumnInfo;
    CGFloat columnWidth;
    NSUInteger columnSpan;
}




-(CGFloat)columnWidth;
-(id)initWithDefaultWidth:(CGFloat)arg0 span:(NSUInteger)arg1 parent:(id)arg2 ;
-(id)initWithEDColumnInfo:(id)arg0 maxSpan:(NSUInteger)arg1 parent:(id)arg2 ;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;


@end


#endif