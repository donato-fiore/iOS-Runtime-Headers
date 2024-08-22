// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUIMPORTADDTOALBUMSPICKERCELL_H
#define PUIMPORTADDTOALBUMSPICKERCELL_H

@class UITableViewCell, UIButton, UIImage;
@protocol PXDisplayCollection;



@interface PUImportAddToAlbumsPickerCell : UITableViewCell {
    BOOL _isPerformingUpdate;
    BOOL _showingSelectionMark;
}


@property (weak, nonatomic) UIButton *checkMarkButton; // ivar: _checkMarkButton
@property (readonly, nonatomic) NSObject<PXDisplayCollection> *collection; // ivar: _collection
@property (readonly, nonatomic) UIImage *thumbail; // ivar: _thumbail
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(BOOL)isSelectable;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)mutableChangeObject;
-(void)_configureCell;
-(void)didAddSubview:(id)arg0 ;
-(void)layoutSubviews;
-(void)performChanges:(id)arg0 ;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg0 ;
-(void)setThumbnail:(id)arg0 ;


@end


#endif