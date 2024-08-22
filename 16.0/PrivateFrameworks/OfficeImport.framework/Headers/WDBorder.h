// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDBORDER_H
#define WDBORDER_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "OITSUColor.h"

@interface WDBorder : NSObject <NSCopying>

 {
    int mStyle;
    OITSUColor *mColor;
    unsigned char mWidth;
    unsigned char mSpace;
    BOOL mShadow;
    BOOL mFrame;
}




-(BOOL)frame;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToBorder:(id)arg0 ;
-(BOOL)shadow;
-(NSUInteger)hash;
-(id)color;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(int)style;
-(unsigned char)space;
-(unsigned char)width;
-(void)setBorder:(id)arg0 ;
-(void)setColor:(id)arg0 ;
-(void)setFrame:(BOOL)arg0 ;
-(void)setNullBorder;
-(void)setShadow:(BOOL)arg0 ;
-(void)setSingleBlackBorder;
-(void)setSpace:(unsigned char)arg0 ;
-(void)setStyle:(int)arg0 ;
-(void)setWidth:(unsigned char)arg0 ;


@end


#endif