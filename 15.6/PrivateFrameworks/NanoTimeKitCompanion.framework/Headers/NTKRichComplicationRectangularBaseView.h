// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKRICHCOMPLICATIONRECTANGULARBASEVIEW_H
#define NTKRICHCOMPLICATIONRECTANGULARBASEVIEW_H

@protocol NTKRichComplicationRectangularBaseViewDelegate;


#import "NTKRichComplicationView.h"

@interface NTKRichComplicationRectangularBaseView : NTKRichComplicationView

@property (weak, nonatomic) NSObject<NTKRichComplicationRectangularBaseViewDelegate> *delegate; // ivar: _delegate


+(id)viewWithLegacyComplicationType:(NSUInteger)arg0 ;
+(void)updateCustomDataAnimationFromEarlierView:(id)arg0 laterView:(id)arg1 isForward:(BOOL)arg2 animationType:(NSUInteger)arg3 animationDuration:(CGFloat)arg4 animationFraction:(float)arg5 ;
-(CGFloat)contentMargin;
-(id)_createAndAddColoringLabelWithFontSize:(CGFloat)arg0 weight:(CGFloat)arg1 usesTextProviderTintColoring:(BOOL)arg2 ;
-(id)init;
-(id)initWithFamily:(NSInteger)arg0 ;
-(void)_transitToHighlightState:(BOOL)arg0 fraction:(CGFloat)arg1 ;


@end


#endif