// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUSPLITVIEW_H
#define SUSPLITVIEW_H

@class UIView;



@interface SUSplitView : UIView

@property (retain, nonatomic) UIView *firstView; // ivar: _firstView
@property (nonatomic) NSInteger layoutType; // ivar: _layoutType
@property (nonatomic) CGFloat minimumPaneSize; // ivar: _minimumPaneSize
@property (retain, nonatomic) UIView *secondView; // ivar: _secondView
@property (nonatomic) CGFloat splitPosition; // ivar: _splitPosition
@property (nonatomic, getter=isVertical) BOOL vertical; // ivar: _vertical


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif