// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIDEBUGGINGINFORMATIONHIERARCHYCELL_H
#define UIDEBUGGINGINFORMATIONHIERARCHYCELL_H

@class NSIndexPath, NSLayoutConstraint, NSString;
@protocol UIDebuggingInformationHierarchyCellDelegate;


#import "UICollectionViewCell.h"
#import "UIButton.h"
#import "UILabel.h"

@interface UIDebuggingInformationHierarchyCell : UICollectionViewCell {
    UIButton *_disclosureButton;
    UILabel *_mainLabel;
    UIButton *_infoButton;
    NSIndexPath *_indexPath;
    BOOL _collapsedBeneath;
    NSLayoutConstraint *_disclosureButtonAvailableConstraint;
    NSLayoutConstraint *_disclosureButtonUnavailableConstraint;
}


@property (weak, nonatomic) NSObject<UIDebuggingInformationHierarchyCellDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL disclosureIndicatorHidden; // ivar: _disclosureIndicatorHidden
@property (readonly, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) UIButton *infoButton;
@property (retain, nonatomic) NSString *name; // ivar: _name


-(void)applyLayoutAttributes:(id)arg0 ;
-(void)deliverToggle;
-(void)displayDetailsForCell;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif