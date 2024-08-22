// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFROWOFICONSVIEW_H
#define WFROWOFICONSVIEW_H

@class UIView, NSMutableArray, UIStackView;



@interface WFRowOfIconsView : UIView

@property (readonly, nonatomic) CGFloat height; // ivar: _height
@property (readonly, nonatomic) NSMutableArray *iconViews; // ivar: _iconViews
@property (readonly, nonatomic) NSUInteger maxNumberOfIcons; // ivar: _maxNumberOfIcons
@property (readonly, nonatomic) UIStackView *stackView; // ivar: _stackView


-(id)initWithMaxNumberOfIcons:(NSUInteger)arg0 height:(CGFloat)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(void)rebuildSubviewsForItems:(id)arg0 ;
-(void)setHomeIcons:(id)arg0 ;
-(void)setIcons:(id)arg0 ;


@end


#endif