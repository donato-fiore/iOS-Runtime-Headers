// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLIMAGESCROLLVIEW_H
#define PLIMAGESCROLLVIEW_H

@class UIScrollView;



@interface PLImageScrollView : UIScrollView

@property (nonatomic) BOOL adjustZoomScaleAfterRotation; // ivar: _adjustZoomScaleAfterRotation


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)willAnimateRotationToInterfaceOrientation:(id)arg0 ;


@end


#endif