// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9SEYMOURUI21TVMETADATASECTIONCELL_H
#define _TTC9SEYMOURUI21TVMETADATASECTIONCELL_H

@class TtC9SeymourUI29TVFocusableCollectionViewCell;



@interface _TtC9SeymourUI21TVMetadataSectionCell : TtC9SeymourUI29TVFocusableCollectionViewCell {
    ? delegate;
    ? itemInfo;
    ? layout;
    ? metadataEntriesView;
    ? titleLabel;
}


@property (nonatomic, readonly) BOOL canBecomeFocused;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)prepareForReuse;


@end


#endif