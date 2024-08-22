// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9SEYMOURUI29TVDETAILDESCRIPTIONHEADERCELL_H
#define _TTC9SEYMOURUI29TVDETAILDESCRIPTIONHEADERCELL_H

@class TtC9SeymourUI21TVFloatingContentCell;



@interface _TtC9SeymourUI29TVDetailDescriptionHeaderCell : TtC9SeymourUI21TVFloatingContentCell {
    ? delegate;
    ? itemInfo;
    ? layout;
    ? textView;
    ? textViewHeightConstraint;
    ? textViewPaddingConstraints;
    ? textViewWidthConstraint;
}


@property (nonatomic, readonly) BOOL canBecomeFocused;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)prepareForReuse;


@end


#endif