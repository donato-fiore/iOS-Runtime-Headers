// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMSHAPETEXTMAPPER_H
#define PMSHAPETEXTMAPPER_H



#import "CMMapper.h"
#import "OADTextBody.h"
#import "OADOrientedBounds.h"
#import "CMStyle.h"

@interface PMShapeTextMapper : CMMapper {
    OADTextBody *mTextBody;
    OADOrientedBounds *mBounds;
    CMStyle *mStyle;
    BOOL mRectangular;
}




-(BOOL)isTableCellContent;
-(id)initWithOadTextBody:(id)arg0 bounds:(id)arg1 parent:(id)arg2 ;
-(unsigned char)textAnchor;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;
-(void)setRectangular:(BOOL)arg0 ;


@end


#endif