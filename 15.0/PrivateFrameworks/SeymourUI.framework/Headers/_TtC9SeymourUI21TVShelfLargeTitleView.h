// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9SEYMOURUI21TVSHELFLARGETITLEVIEW_H
#define _TTC9SEYMOURUI21TVSHELFLARGETITLEVIEW_H

@class UICollectionReusableView, UILabel;



@interface _TtC9SeymourUI21TVShelfLargeTitleView : UICollectionReusableView {
    ? indexPath;
    ? delegate;
    ? shelf;
    ? titleLabel;
    ? subtitleLabel;
}


@property (nonatomic, readonly) UILabel *accessibilitySubtitleLabel;
@property (nonatomic, readonly) UILabel *accessibilityTitleLabel;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)prepareForReuse;


@end


#endif