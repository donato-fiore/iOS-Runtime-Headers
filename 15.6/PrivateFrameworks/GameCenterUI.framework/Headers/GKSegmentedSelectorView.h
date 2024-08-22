// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKSEGMENTEDSELECTORVIEW_H
#define GKSEGMENTEDSELECTORVIEW_H

@class UISegmentedControl, NSLayoutConstraint;


#import "GKHeaderWithUnderlineView.h"

@interface GKSegmentedSelectorView : GKHeaderWithUnderlineView

@property (retain, nonatomic) UISegmentedControl *segmentedControl; // ivar: _segmentedControl
@property (nonatomic) id *target; // ivar: _target
@property (retain, nonatomic) NSLayoutConstraint *widthConstraint; // ivar: _widthConstraint


-(BOOL)drawsUnderline;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)pinningStateChangedTo:(BOOL)arg0 ;
-(void)prepareForReuse;


@end


#endif