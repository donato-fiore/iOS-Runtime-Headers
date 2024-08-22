// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMBORDERSPROPERTY_H
#define EMBORDERSPROPERTY_H

@protocol NSCopying;


#import "CMProperty.h"
#import "OITSUColor.h"

@interface EMBordersProperty : CMProperty <NSCopying>

 {
    OITSUColor *mBorderColor;
    OITSUColor *mBorderTopColor;
    OITSUColor *mBorderLeftColor;
    OITSUColor *mBorderBottomColor;
    OITSUColor *mBorderRightColor;
    int mBorderStyle;
    int mBorderWidth;
}




-(*int)borderStyles;
-(*int)borderWidths;
-(BOOL)hasSameColorsAs:(id)arg0 ;
-(BOOL)hasSameStylesAs:(id)arg0 ;
-(BOOL)hasSameWidthsAs:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isNoneAtLocation:(int)arg0 ;
-(id)borderColor;
-(id)colorString;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)cssString;
-(id)cssStringForName:(id)arg0 ;
-(id)initWithEDBorders:(id)arg0 ;
-(id)initWithOADStroke:(id)arg0 ;
-(id)stringFromColor:(id)arg0 ;
-(id)stringFromStyleEnum:(int)arg0 ;
-(id)stringFromWidthEnum:(int)arg0 ;
-(id)styleHashNumber;
-(id)styleString;
-(id)widthHashNumber;
-(id)widthString;
-(void)setBorderStyleAndWidth:(int)arg0 location:(unsigned int)arg1 ;
-(void)setNoneAtLocation:(int)arg0 ;


@end


#endif