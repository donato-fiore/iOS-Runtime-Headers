// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPSHAIRLINEVIEW_H
#define CPSHAIRLINEVIEW_H

@class UIView, NSLayoutConstraint;



@interface CPSHairlineView : UIView

@property (nonatomic) NSInteger axis; // ivar: _axis
@property (retain, nonatomic) NSLayoutConstraint *strokeThicknessConstraint; // ivar: _strokeThicknessConstraint


+(id)grayHairlineViewAlongAxis:(NSInteger)arg0 ;
-(id)initWithAxis:(NSInteger)arg0 color:(id)arg1 ;
-(void)_updateStrokeThickness;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif