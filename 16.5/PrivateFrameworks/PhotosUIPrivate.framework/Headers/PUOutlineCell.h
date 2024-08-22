// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUOUTLINECELL_H
#define PUOUTLINECELL_H

@class UICollectionViewOutlineCell, UIImageView, UIImage, NSString;
@protocol PUOutlineCellDelegate, PXNavigationListItem;



@interface PUOutlineCell : UICollectionViewOutlineCell

@property (retain, nonatomic) UIImageView *accessoryImageView; // ivar: _accessoryImageView
@property (weak, nonatomic) NSObject<PUOutlineCellDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) NSObject<PXNavigationListItem> *item; // ivar: _item
@property (nonatomic) NSInteger mediaRequestID; // ivar: _mediaRequestID
@property (nonatomic) NSInteger style; // ivar: _style
@property (copy, nonatomic) NSString *text; // ivar: _text


-(BOOL)_hasEditSpecificAccessories;
-(BOOL)canBecomeFocused;
-(id)_editingConfigurationForState:(NSUInteger)arg0 ;
-(void)_renameItem:(id)arg0 toTitle:(id)arg1 ;
-(void)_updateViewConfigurationsWithState:(NSUInteger)arg0 ;
-(void)prepareForReuse;


@end


#endif