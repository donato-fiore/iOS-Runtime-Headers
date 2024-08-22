// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLLISTCELL_H
#define QLLISTCELL_H

@class UITableViewCell, NSLayoutConstraint, UILabel, UIImageView, NSString, QLItem, UIImage;



@interface QLListCell : UITableViewCell {
    NSLayoutConstraint *_leftConstraint;
    UILabel *_title;
    UILabel *_subtitle;
    UIImageView *_thumbnailView;
    NSInteger _loadingID;
}


@property (nonatomic) NSInteger fileDepthLevel; // ivar: _fileDepthLevel
@property (retain, nonatomic) NSString *folderName; // ivar: _folderName
@property (retain, nonatomic) QLItem *item; // ivar: _item
@property NSUInteger row; // ivar: _row
@property (copy, nonatomic) NSString *subtitleString; // ivar: _subtitleString
@property (retain, nonatomic) UIImage *thumbnail; // ivar: _thumbnail


+(id)listCell;
-(id)_folderImage;
-(void)awakeFromNib;
-(void)prepareForReuse;


@end


#endif