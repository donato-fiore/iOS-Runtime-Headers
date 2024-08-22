// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUIMPORTADDTOALBUMSPICKERCELL_H
#define PUIMPORTADDTOALBUMSPICKERCELL_H

@class UITableViewCell, NSArray, NSLayoutConstraint, UIImage, UIImageView, UILabel;
@protocol PXDisplayCollection;



@interface PUImportAddToAlbumsPickerCell : UITableViewCell {
    BOOL _isPerformingUpdate;
}


@property (readonly, nonatomic) NSObject<PXDisplayCollection> *collection; // ivar: _collection
@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property (retain, nonatomic) NSLayoutConstraint *labelLeadingConstraintNoImage; // ivar: _labelLeadingConstraintNoImage
@property (retain, nonatomic) NSLayoutConstraint *labelLeadingConstraintWithImage; // ivar: _labelLeadingConstraintWithImage
@property (readonly, nonatomic) UIImage *thumbnail; // ivar: _thumbnail
@property (retain, nonatomic) UIImageView *thumbnailView; // ivar: _thumbnailView
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(BOOL)isSelectable;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)mutableChangeObject;
-(void)_configureCell;
-(void)performChanges:(id)arg0 ;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg0 ;
-(void)updateConstraints;
-(void)updateTitle;


@end


#endif