// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ODDCOLORTRANSFORMSTYLELABEL_H
#define ODDCOLORTRANSFORMSTYLELABEL_H


#import <Foundation/Foundation.h>

#import "ODDFillColorList.h"

@interface ODDColorTransformStyleLabel : NSObject {
    ODDFillColorList *mFillColors;
    ODDFillColorList *mLineColors;
    ODDFillColorList *mEffectColors;
    ODDFillColorList *mTextLineColors;
    ODDFillColorList *mTextFillColors;
    ODDFillColorList *mTextEffectColors;
}




-(id)effectColors;
-(id)fillColors;
-(id)lineColors;
-(id)textEffectColors;
-(id)textFillColors;
-(id)textLineColors;
-(void)applyToShapeStyle:(id)arg0 index:(unsigned int)arg1 count:(unsigned int)arg2 state:(id)arg3 ;
-(void)setEffectColors:(id)arg0 ;
-(void)setFillColors:(id)arg0 ;
-(void)setLineColors:(id)arg0 ;
-(void)setTextEffectColors:(id)arg0 ;
-(void)setTextFillColors:(id)arg0 ;
-(void)setTextLineColors:(id)arg0 ;


@end


#endif