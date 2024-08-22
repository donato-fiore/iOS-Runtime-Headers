// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9SEYMOURUI25TVFILTERRESULTACTIONSCELL_H
#define _TTC9SEYMOURUI25TVFILTERRESULTACTIONSCELL_H

@class UICollectionViewCell, NSArray;



@interface _TtC9SeymourUI25TVFilterResultActionsCell : UICollectionViewCell {
    ? delegate;
    ? itemInfo;
    ? titleLabel;
    ? sortButton;
    ? bottomFocusGuide;
}


@property (nonatomic, readonly) BOOL canBecomeFocused;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)clearButtonTapped;
-(void)prepareForReuse;
-(void)sortButtonTapped;


@end


#endif