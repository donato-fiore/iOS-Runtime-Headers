// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMBORDERSPROPERTY_H
#define CMBORDERSPROPERTY_H



#import "CMProperty.h"
#import "OITSUColor.h"

@interface CMBordersProperty : CMProperty {
    OITSUColor *mBorderColor;
    OITSUColor *mBorderTopColor;
    OITSUColor *mBorderLeftColor;
    OITSUColor *mBorderBottomColor;
    OITSUColor *mBorderRightColor;
    int mBorderStyle;
    int mBorderWidth;
    int mCustomWidth;
}




+(BOOL)isStroked:(id)arg0 ;
-(BOOL)isNoneAtLocation:(int)arg0 ;
-(id)colorString;
-(id)cssString;
-(id)cssStringForName:(id)arg0 ;
-(id)init;
-(id)initWithOADStroke:(id)arg0 ;
-(id)stringFromColor:(id)arg0 ;
-(id)stringFromStyleEnum:(int)arg0 ;
-(id)stringFromWidthEnum:(int)arg0 ;
-(id)styleString;
-(id)widthString;
-(void)adjustValues;
-(void)setFromOadStroke:(id)arg0 atLocation:(int)arg1 state:(id)arg2 ;
-(void)setNoneAtLocation:(int)arg0 ;


@end


#endif