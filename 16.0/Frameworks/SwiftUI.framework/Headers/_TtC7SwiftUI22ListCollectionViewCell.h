// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC7SWIFTUI22LISTCOLLECTIONVIEWCELL_H
#define _TTC7SWIFTUI22LISTCOLLECTIONVIEWCELL_H

@class UICollectionViewListCell;



@interface _TtC7SwiftUI22ListCollectionViewCell : UICollectionViewListCell {
    ? delegate;
    ? style;
    ? isHeader;
    ? isTableRowOrHeader;
    ? headerLeadingMargin;
    ? wasEditing;
    ? lastConfiguration;
    ? host;
    ? isDisplaying;
    ? selectionBehavior;
    ? hasItemProviderTrait;
    ? popUpButtonSeed;
    ? viewListID;
}


@property (nonatomic, readonly) BOOL canBecomeFocused;
@property (nonatomic) BOOL isAccessibilityElement;


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg0 ;
-(void)_bridgedUpdateConfigurationUsingState:(id)arg0 ;
-(void)removeFromSuperview;


@end


#endif