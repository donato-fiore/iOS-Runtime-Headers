// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUIMPORTSECTIONBACKGROUNDVIEW_H
#define PUIMPORTSECTIONBACKGROUNDVIEW_H

@class UICollectionReusableView, UIColor, UIView;



@interface PUImportSectionBackgroundView : UICollectionReusableView

@property (retain, nonatomic) UIColor *bottomStrokeColor; // ivar: _bottomStrokeColor
@property (retain, nonatomic) UIView *bottomStrokeView; // ivar: _bottomStrokeView
@property (nonatomic) BOOL needsBottomStrokeViewUpdate; // ivar: _needsBottomStrokeViewUpdate
@property (nonatomic) CGFloat strokeWidth; // ivar: _strokeWidth


-(BOOL)needsStroke;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)layoutSubviews;
-(void)updateBottomStrokeViewIfNeeded;


@end


#endif