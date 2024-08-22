// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OABFILLPROPERTIESMANAGER_H
#define OABFILLPROPERTIESMANAGER_H

@class NSString;
@protocol OABFillPropertiesManager, OABPropertiesManager;

#import <Foundation/Foundation.h>


@interface OABFillPropertiesManager : NSObject <OABFillPropertiesManager>

 {
    *EshFill mFill;
    int mShapeType;
    id<OABPropertiesManager> *mMasterManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)fillGradientColors;
-(BOOL)isFilled;
-(BOOL)isStroked;
-(id)fillBlipName;
-(id)initWithFill:(struct EshFill *)arg0 shapeType:(int)arg1 masterShape:(struct EshShape *)arg2 ;
-(int)fillAngle;
-(int)fillBgAlpha;
-(int)fillFgAlpha;
-(int)fillFocus;
-(int)fillFocusBottom;
-(int)fillFocusLeft;
-(int)fillFocusRight;
-(int)fillFocusTop;
-(int)fillType;
-(struct EshBlip *)fillBlipDataReference;
-(struct EshColor )fillBgColor;
-(struct EshColor )fillFgColor;
-(struct EshColor )shadowColor;
-(struct EshColor )strokeBgColor;
-(struct EshColor )strokeFgColor;
-(unsigned int)fillBlipID;


@end


#endif