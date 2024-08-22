// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKFILLABLESHAPESTYLEPICKER_H
#define AKFILLABLESHAPESTYLEPICKER_H

@class NSArray;


#import "AKModernToolbarPicker.h"

@interface AKFillableShapeStylePicker : AKModernToolbarPicker {
    NSArray *_buttons;
}


@property (nonatomic) BOOL showFill; // ivar: _showFill


-(id)initWithFrame:(struct CGRect )arg0 controller:(id)arg1 ;
-(void)_styleButtonPressed:(id)arg0 ;
-(void)_updateImagesForAnnotationType:(id)arg0 ;
-(void)revalidateItems:(id)arg0 ;


@end


#endif