// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIANIMATINGLABEL_H
#define _UIANIMATINGLABEL_H



#import "UILabel.h"

@interface _UIAnimatingLabel : UILabel {
    BOOL _shouldAnimateVariantWeight;
}




+(Class)layerClass;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(void)drawLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)setFont:(id)arg0 ;


@end


#endif