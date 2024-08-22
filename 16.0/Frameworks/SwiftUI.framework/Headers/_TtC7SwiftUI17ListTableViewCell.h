// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC7SWIFTUI17LISTTABLEVIEWCELL_H
#define _TTC7SWIFTUI17LISTTABLEVIEWCELL_H

@class UITableViewCell;



@interface _TtC7SwiftUI17ListTableViewCell : UITableViewCell {
    ? delegate;
    ? cellConfiguration;
    ? disclosureIndent;
    ? separatorConfiguration;
    ? host;
    ? isDisplaying;
    ? selectionBehavior;
    ? viewListID;
    ? outlineRootSeed;
    ? hasDragItemsPreference;
    ? hasItemProviderTrait;
    ? focusItem;
}


@property (nonatomic) BOOL isAccessibilityElement;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_bridgedUpdateConfigurationUsingState:(id)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutMarginsDidChange;
-(void)prepareForReuse;


@end


#endif