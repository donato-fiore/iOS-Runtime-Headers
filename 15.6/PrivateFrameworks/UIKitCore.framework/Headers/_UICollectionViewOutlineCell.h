// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONVIEWOUTLINECELL_H
#define _UICOLLECTIONVIEWOUTLINECELL_H



#import "UICollectionViewListCell.h"
#import "_UICollectionViewOutlineCellDisclosureConfiguration.h"
#import "UIImageView.h"
#import "UIView.h"
#import "UILabel.h"

@interface _UICollectionViewOutlineCell : UICollectionViewListCell

@property (nonatomic) BOOL automaticallyTogglesExpansionState; // ivar: _automaticallyTogglesExpansionState
@property (copy, nonatomic) _UICollectionViewOutlineCellDisclosureConfiguration *disclosureConfiguration; // ivar: _disclosureConfiguration
@property (copy, nonatomic) id *disclosureWasTappedHandler; // ivar: _disclosureWasTappedHandler
@property (nonatomic) CGFloat highlightCornerRadius; // ivar: _highlightCornerRadius
@property (retain, nonatomic) id *identifier;
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) UIView *outlineContentView; // ivar: _outlineContentView
@property (nonatomic) BOOL selectionFollowsTintColor; // ivar: _selectionFollowsTintColor
@property (readonly, nonatomic) UILabel *textLabel; // ivar: _textLabel




@end


#endif