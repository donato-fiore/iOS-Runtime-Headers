// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIBARBUTTONITEMSEARCHBARGROUP_H
#define _UIBARBUTTONITEMSEARCHBARGROUP_H



#import "UIBarButtonItemGroup.h"
#import "UIBarButtonItem.h"
#import "UISearchBar.h"

@interface _UIBarButtonItemSearchBarGroup : UIBarButtonItemGroup {
    BOOL _hadRepresentativeItemBeforeMovingToProvisionalState;
    BOOL _disabledExpansion;
    CGFloat _contextualExpandedPadding;
    BOOL _providesRestingMeasurementValues;
    UIBarButtonItem *_searchItem;
    UISearchBar *_searchBar;
    UIBarButtonItem *_searchIconItem;
}




-(BOOL)_disabledExpansion;
-(BOOL)_isCritical;
-(CGFloat)_contextualExpandedPadding;
-(id)initWithBarButtonItems:(id)arg0 representativeItem:(id)arg1 ;
-(void)setBarButtonItems:(id)arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)setRepresentativeItem:(id)arg0 ;


@end


#endif