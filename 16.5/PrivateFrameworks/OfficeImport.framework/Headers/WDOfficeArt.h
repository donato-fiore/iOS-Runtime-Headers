// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDOFFICEART_H
#define WDOFFICEART_H



#import "WDRunWithCharacterProperties.h"
#import "OADDrawable.h"

@interface WDOfficeArt : WDRunWithCharacterProperties {
    OADDrawable *mDrawable;
    BOOL mFloating;
}




+(int)textBoxTextTypeForRegularTextType:(int)arg0 ;
-(BOOL)isDrawableOverridden;
-(BOOL)isFloating;
-(id)description;
-(id)drawable;
-(id)imageBlipRef;
-(id)imageData;
-(id)imageName;
-(id)initWithParagraph:(id)arg0 ;
-(id)overrideDrawable;
-(int)runType;
-(void)checkForFloating:(id)arg0 ;
-(void)clearDrawable;
-(void)propagateTextTypeToDrawables;
-(void)setDrawable:(id)arg0 ;
-(void)setFloating:(BOOL)arg0 ;
-(void)setImageBlipRef:(id)arg0 ;
-(void)setTextType:(int)arg0 recursivelyToDrawable:(id)arg1 ;


@end


#endif