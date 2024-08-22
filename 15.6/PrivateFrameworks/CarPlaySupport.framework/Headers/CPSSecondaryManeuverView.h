// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPSSECONDARYMANEUVERVIEW_H
#define CPSSECONDARYMANEUVERVIEW_H

@class UIView, CPTravelEstimates, CPManeuver, UIImageView;


#import "CPSAbridgableLabel.h"

@interface CPSSecondaryManeuverView : UIView

@property (retain, nonatomic) CPTravelEstimates *currentTravelEstimates; // ivar: _currentTravelEstimates
@property (nonatomic) CGFloat generatedHeight; // ivar: _generatedHeight
@property (nonatomic) CGFloat generatedWidth; // ivar: _generatedWidth
@property (nonatomic) NSUInteger guidanceStyle; // ivar: _guidanceStyle
@property (retain, nonatomic) CPSAbridgableLabel *instructionLabel; // ivar: _instructionLabel
@property (readonly, nonatomic) CPManeuver *maneuver; // ivar: _maneuver
@property (nonatomic) NSInteger style; // ivar: _style
@property (retain, nonatomic) UIImageView *symbolView; // ivar: _symbolView


-(CGFloat)horizontalInset;
-(id)accessibilityName:(id)arg0 ;
-(id)initWithManeuver:(id)arg0 ;
-(void)generateLayoutConfigurationsForSizeIfNecessary:(struct CGSize )arg0 force:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif