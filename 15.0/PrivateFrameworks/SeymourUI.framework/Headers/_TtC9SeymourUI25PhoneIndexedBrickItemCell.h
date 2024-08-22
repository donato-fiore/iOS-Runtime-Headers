// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9SEYMOURUI25PHONEINDEXEDBRICKITEMCELL_H
#define _TTC9SEYMOURUI25PHONEINDEXEDBRICKITEMCELL_H

@class UICollectionViewCell;



@interface _TtC9SeymourUI25PhoneIndexedBrickItemCell : UICollectionViewCell {
    ? delegate;
    ? itemInfo;
    ? storefrontLanguageIsRTL;
    ? showSeparator;
    ? artworkView;
    ? downloadButton;
    ? indexLabel;
    ? hairline;
    ? layoutGuide;
    ? subtitleLabel;
    ? titleLabel;
    ? indexLeadingConstraint;
    ? lastConstraints;
    ? layout;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)handleDownloadButtonTapped;
-(void)prepareForReuse;
-(void)textSizeChanged:(id)arg0 ;


@end


#endif