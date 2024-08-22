// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMEXPANDINGTICKMARKSVIEW_H
#define CAMEXPANDINGTICKMARKSVIEW_H

@class UIView, NSMutableArray;



@interface CAMExpandingTickMarksView : UIView

@property (nonatomic) _NSRange _selectedRange; // ivar: __selectedRange
@property (readonly, nonatomic) NSMutableArray *_tickViews; // ivar: __tickViews
@property (nonatomic) BOOL expanded; // ivar: _expanded


-(NSUInteger)_collapsedTickIndexForIndex:(NSUInteger)arg0 ;
-(NSUInteger)_middleTickIndex;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)layoutSubviews;
-(void)setSelectedValue:(CGFloat)arg0 ;


@end


#endif