// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9SEYMOURUI23TVMODALITYBRICKITEMCELL_H
#define _TTC9SEYMOURUI23TVMODALITYBRICKITEMCELL_H

@class TtC9SeymourUI29TVFocusableCollectionViewCell;



@interface _TtC9SeymourUI23TVModalityBrickItemCell : TtC9SeymourUI29TVFocusableCollectionViewCell {
    ? delegate;
    ? itemInfo;
    ? layout;
    ? artworkView;
    ? floatingView;
    ? titleLabel;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)prepareForReuse;


@end


#endif