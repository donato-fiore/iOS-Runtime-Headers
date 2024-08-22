// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OABDEFAULTSMANAGER_H
#define OABDEFAULTSMANAGER_H

@class NSString;
@protocol OABPropertiesManager;

#import <Foundation/Foundation.h>


@interface OABDefaultsManager : NSObject <OABPropertiesManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)fillGradientColors;
-(*void)strokeCustomDash;
-(BOOL)hidden;
-(BOOL)isFillOK;
-(BOOL)isFilled;
-(BOOL)isShadowOK;
-(BOOL)isShadowed;
-(BOOL)isStrokeOK;
-(BOOL)isStroked;
-(BOOL)isTextPath;
-(BOOL)textPathBold;
-(BOOL)textPathItalic;
-(BOOL)textPathSmallcaps;
-(BOOL)textPathStrikethrough;
-(BOOL)textPathUnderline;
-(id)fillBlipName;
-(id)strokeFillBlipName;
-(id)textPathFontFamily;
-(id)textPathUnicodeString;
-(int)fillAngle;
-(int)fillBgAlpha;
-(int)fillFgAlpha;
-(int)fillFocus;
-(int)fillFocusBottom;
-(int)fillFocusLeft;
-(int)fillFocusRight;
-(int)fillFocusTop;
-(int)fillType;
-(int)shadowAlpha;
-(int)shadowOffsetX;
-(int)shadowOffsetY;
-(int)shadowSoftness;
-(int)shadowType;
-(int)strokeCapStyle;
-(int)strokeCompoundType;
-(int)strokeEndArrowLength;
-(int)strokeEndArrowType;
-(int)strokeEndArrowWidth;
-(int)strokeFgAlpha;
-(int)strokeFillType;
-(int)strokeJoinStyle;
-(int)strokeMiterLimit;
-(int)strokePresetDash;
-(int)strokeStartArrowLength;
-(int)strokeStartArrowType;
-(int)strokeStartArrowWidth;
-(int)strokeWidth;
-(int)textPathFontSize;
-(int)textPathTextAlignment;
-(struct EshBlip *)fillBlipDataReference;
-(struct EshBlip *)strokeFillBlipDataReference;
-(struct EshColor )fillBgColor;
-(struct EshColor )fillFgColor;
-(struct EshColor )shadowColor;
-(struct EshColor )strokeBgColor;
-(struct EshColor )strokeFgColor;
-(unsigned int)fillBlipID;
-(unsigned int)strokeFillBlipID;


@end


#endif