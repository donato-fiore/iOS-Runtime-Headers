// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKLINESTYLEPICKER_H
#define AKLINESTYLEPICKER_H



#import "AKModernToolbarPicker.h"

@interface AKLineStylePicker : AKModernToolbarPicker

@property (readonly) NSInteger lineStyle; // ivar: _lineStyle
@property (readonly) NSUInteger lineType; // ivar: _lineType


-(NSInteger)_shapeTagForType:(NSUInteger)arg0 ;
-(id)_buttonImagesForType:(NSUInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 lineType:(NSUInteger)arg1 controller:(id)arg2 ;
-(void)_styleButtonPressed:(id)arg0 ;
-(void)revalidateItems:(id)arg0 ;


@end


#endif