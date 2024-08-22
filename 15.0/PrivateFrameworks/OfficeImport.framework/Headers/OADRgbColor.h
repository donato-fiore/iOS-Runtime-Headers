// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OADRGBCOLOR_H
#define OADRGBCOLOR_H



#import "OADColor.h"

@interface OADRgbColor : OADColor {
    float mRed;
    float mGreen;
    float mBlue;
}




+(id)black;
+(id)rgbColorWithRed:(float)arg0 green:(float)arg1 blue:(float)arg2 ;
+(id)rgbColorWithRedByte:(float)arg0 greenByte:(float)arg1 blueByte:(float)arg2 ;
+(id)rgbColorWithTSUColor:(id)arg0 ;
+(id)rgbColorWithWhite:(float)arg0 ;
+(id)rgbColorWithWhiteByte:(float)arg0 ;
+(id)white;
-(BOOL)isBlack;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isWhite;
-(NSUInteger)hash;
-(float)blue;
-(float)green;
-(float)red;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRed:(float)arg0 green:(float)arg1 blue:(float)arg2 ;
-(id)initWithRedByte:(float)arg0 greenByte:(float)arg1 blueByte:(float)arg2 ;
-(id)initWithWhite:(float)arg0 ;
-(id)initWithWhiteByte:(float)arg0 ;
-(id)rgbColorWithFraction:(float)arg0 ofRgbColor:(id)arg1 ;
-(unsigned char)blueByte;
-(unsigned char)greenByte;
-(unsigned char)redByte;


@end


#endif