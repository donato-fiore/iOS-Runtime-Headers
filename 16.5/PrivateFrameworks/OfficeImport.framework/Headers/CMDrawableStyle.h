// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMDRAWABLESTYLE_H
#define CMDRAWABLESTYLE_H



#import "EMCellStyle.h"
#import "OADDrawable.h"

@interface CMDrawableStyle : EMCellStyle {
    OADDrawable *mDrawable;
}




-(void)addPositionProperties:(struct CGRect )arg0 ;
-(void)addPositionUsingOffsets:(struct CGRect )arg0 ;


@end


#endif