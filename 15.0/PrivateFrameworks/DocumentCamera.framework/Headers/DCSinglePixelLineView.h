// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DCSINGLEPIXELLINEVIEW_H
#define DCSINGLEPIXELLINEVIEW_H

@class UIView;



@interface DCSinglePixelLineView : UIView

@property (nonatomic) BOOL hasSetUpSizeConstraint; // ivar: _hasSetUpSizeConstraint


-(id)addSizeConstraint;
-(id)findSizeLayoutConstraintIfExists;
-(void)setUpHeightConstraintIfNecessary;
-(void)updateConstraints;


@end


#endif