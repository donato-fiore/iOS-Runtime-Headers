// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSPACEINSERTIONVIEW_H
#define PKSPACEINSERTIONVIEW_H

@class UIView;


#import "PKDrawingAdjustmentKnob.h"

@interface PKSpaceInsertionView : UIView {
    *CGPath _lassoPath;
    CGPoint _handleLocation;
    CGFloat _scale;
    PKDrawingAdjustmentKnob *_knobHandle;
}


@property (nonatomic) NSUInteger insertionType; // ivar: _insertionType
@property (nonatomic) BOOL isDragging; // ivar: _isDragging


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 insertionType:(NSUInteger)arg1 path:(struct CGPath *)arg2 handleLocation:(struct CGPoint )arg3 scale:(CGFloat)arg4 ;
-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif