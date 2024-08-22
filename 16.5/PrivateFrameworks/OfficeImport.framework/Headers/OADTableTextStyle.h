// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OADTABLETEXTSTYLE_H
#define OADTABLETEXTSTYLE_H


#import <Foundation/Foundation.h>

#import "OADFontReference.h"
#import "OADColor.h"

@interface OADTableTextStyle : NSObject {
    OADFontReference *mFontReference;
    OADColor *mColor;
    int mBold;
    int mItalic;
}




+(id)defaultColor;
+(id)defaultFontReference;
+(id)defaultStyle;
+(int)defaultBold;
+(int)defaultItalic;
-(id)color;
-(id)description;
-(id)fontReference;
-(id)init;
-(id)shallowCopy;
-(int)bold;
-(int)italic;
-(void)applyOverridesFrom:(id)arg0 ;
-(void)setBold:(int)arg0 ;
-(void)setColor:(id)arg0 ;
-(void)setFontReference:(id)arg0 ;
-(void)setItalic:(int)arg0 ;


@end


#endif