// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OABSHAPEBASEMANAGER_H
#define OABSHAPEBASEMANAGER_H

@class NSString;
@protocol OABBasePropertiesManager;


#import "OABFillPropertiesManager.h"

@interface OABShapeBaseManager : OABFillPropertiesManager <OABBasePropertiesManager>

 {
    *void mShapeBase;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)strokeCustomDash;
-(BOOL)isShadowed;
-(BOOL)isStroked;
-(id)initWithShapeBase:(*void)arg0 shapeType:(int)arg1 masterShape:(struct EshShape *)arg2 ;
-(id)strokeFillBlipName;
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
-(struct EshBlip *)strokeFillBlipDataReference;
-(struct EshColor )shadowColor;
-(struct EshColor )strokeBgColor;
-(struct EshColor )strokeFgColor;
-(unsigned int)strokeFillBlipID;


@end


#endif