// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9SEYMOURUI18ACTIONBRICKROWCELL_H
#define _TTC9SEYMOURUI18ACTIONBRICKROWCELL_H

@class UICollectionViewListCell;



@interface _TtC9SeymourUI18ActionBrickRowCell : UICollectionViewListCell {
    ? delegate;
    ? itemInfo;
    ? showSeparator;
    ? artworkView;
    ? downloadButton;
    ? separator;
    ? subtitleLabel;
    ? titleLabel;
    ? layout;
    ? textLayoutGuide;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)handleDownloadButtonTapped:(id)arg0 ;
-(void)prepareForReuse;


@end


#endif