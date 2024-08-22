// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9SEYMOURUI19PROGRAMBRICKROWCELL_H
#define _TTC9SEYMOURUI19PROGRAMBRICKROWCELL_H

@class UICollectionViewCell;



@interface _TtC9SeymourUI19ProgramBrickRowCell : UICollectionViewCell {
    ? delegate;
    ? currentContainerSize;
    ? currentLayout;
    ? itemInfo;
    ? artworkView;
    ? programContentView;
    ? supportsScrolling;
    ? vibrantShadowView;
    ? oldWidth;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif