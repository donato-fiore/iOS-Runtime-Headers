// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMCELLTEXTMAPPER_H
#define EMCELLTEXTMAPPER_H



#import "CMMapper.h"
#import "EDString.h"
#import "EDStyle.h"

@interface EMCellTextMapper : CMMapper {
    EDString *edString;
    EDStyle *edStyle;
}




+(CGFloat)contentWidthForString:(id)arg0 style:(id)arg1 ;
-(CGFloat)contentWidth;
-(id)initWithEDString:(id)arg0 style:(id)arg1 parent:(id)arg2 ;
-(void)mapAt:(id)arg0 withState:(id)arg1 columnWidth:(CGFloat)arg2 height:(CGFloat)arg3 spreadLeft:(BOOL)arg4 ;
-(void)mapTextRunsAt:(id)arg0 ;
-(void)mapVerticalTextAt:(id)arg0 withState:(id)arg1 width:(CGFloat)arg2 height:(CGFloat)arg3 ;


@end


#endif