// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CACLABELEDELEMENTSOVERLAYVIEW_H
#define CACLABELEDELEMENTSOVERLAYVIEW_H

@class UIView, NSMutableArray;



@interface CACLabeledElementsOverlayView : UIView {
    NSMutableArray *_labeledElements;
    BOOL _positionAtLeft;
}


@property (retain, nonatomic) UIView *badgesContainer; // ivar: _badgesContainer
@property (retain, nonatomic) UIView *contrastBadgesContainer; // ivar: _contrastBadgesContainer
@property (nonatomic) BOOL displayElementRectangles; // ivar: _displayElementRectangles


-(id)_badgeViewContainerWithFrame:(struct CGRect )arg0 usingContrast:(BOOL)arg1 ;
-(id)_viewShowingDebuggingRect:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)addLabeledElements:(id)arg0 ;
-(void)clearLabeledElements;


@end


#endif