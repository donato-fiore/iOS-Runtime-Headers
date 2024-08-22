// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUQUICKCONTROLVIEWCONTROLLERCOLLECTIONVIEWCELL_H
#define HUQUICKCONTROLVIEWCONTROLLERCOLLECTIONVIEWCELL_H



#import "HUViewControllerCollectionViewCell.h"
#import "HUQuickControlCollectionViewLayoutAttributes.h"
#import "HUQuickControlCollectionViewCellContainerViewController.h"

@interface HUQuickControlViewControllerCollectionViewCell : HUViewControllerCollectionViewCell

@property (retain, nonatomic) HUQuickControlCollectionViewLayoutAttributes *activeLayoutAttributes; // ivar: _activeLayoutAttributes
@property (retain, nonatomic) HUQuickControlCollectionViewCellContainerViewController *viewController;


+(NSUInteger)quickControlSizeForItemSize:(NSUInteger)arg0 ;
-(void)_updateContentViewControllerForActiveLayoutAttributes;
-(void)applyLayoutAttributes:(id)arg0 ;


@end


#endif