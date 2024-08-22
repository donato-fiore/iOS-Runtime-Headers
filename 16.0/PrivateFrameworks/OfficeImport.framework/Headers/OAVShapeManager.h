// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OAVSHAPEMANAGER_H
#define OAVSHAPEMANAGER_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "OCPPackagePart.h"
#import "OAVReadState.h"

@interface OAVShapeManager : NSObject {
    ? mShape;
    unsigned short mType;
    OCPPackagePart *mPackagePart;
    NSDictionary *mShapeStyle;
    NSDictionary *mTextBoxStyle;
    OAVReadState *mOAVState;
}




-(?)initWithShape:(?)arg0 type:(?)arg1 packagePartstate;
-(?)shape;
-(BOOL)autoInsets;
-(BOOL)fitShapeToText;
-(BOOL)isFillOK;
-(BOOL)isFilled;
-(BOOL)isImage;
-(BOOL)isPolyline;
-(BOOL)isShadowOK;
-(BOOL)isShadowed;
-(BOOL)isStrokeOK;
-(BOOL)isStroked;
-(BOOL)isWordArt;
-(float)fillAngle;
-(float)fillBgAlpha;
-(float)fillFgAlpha;
-(float)fillFocus;
-(float)shadowAlpha;
-(float)strokeFgAlpha;
-(float)strokeMiterLimit;
-(float)strokeWidth;
-(id)fillBgColor;
-(id)fillFgColor;
-(id)fillGradientColors;
-(id)fillType;
-(id)imageFillId;
-(id)imageFillTitle;
-(id)imageRelId;
-(id)limo;
-(id)movieRelId;
-(id)oavState;
-(id)packagePart;
-(id)path;
-(id)points;
-(id)shadowColor;
-(id)shadowType;
-(id)strokeBgColor;
-(id)strokeCapStyle;
-(id)strokeCompoundType;
-(id)strokeDashStyle;
-(id)strokeEndArrowLength;
-(id)strokeEndArrowType;
-(id)strokeEndArrowWidth;
-(id)strokeFgColor;
-(id)strokeFillType;
-(id)strokeJoinStyle;
-(id)strokeStartArrowLength;
-(id)strokeStartArrowType;
-(id)strokeStartArrowWidth;
-(id)textAltLayoutFlow;
-(id)textAnchor;
-(id)textBodyRects;
-(id)textLayoutFlow;
-(id)textRotation;
-(id)textWrapStyle;
-(struct CGPoint )shadowOffsets;
-(struct OAVTextBoxInsets )textInsets;
-(unsigned short)type;


@end


#endif