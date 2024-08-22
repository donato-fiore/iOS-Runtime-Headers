// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STCANDYBARVIEW_H
#define STCANDYBARVIEW_H

@class UIView, NSArray;



@interface STCandyBarView : UIView

@property (copy, nonatomic) NSArray *usageItems; // ivar: _usageItems
@property (readonly) BOOL useVibrancy; // ivar: _useVibrancy
@property (copy, nonatomic) NSArray *viewItems; // ivar: _viewItems


-(id)capImageWithHeight:(CGFloat)arg0 leadingLineCap:(int)arg1 trailingLineCap:(int)arg2 ;
-(id)initWithVibrancy:(BOOL)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;
-(void)updateSectionViewImages;


@end


#endif