// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKSTICKERDETAILCELL_H
#define CKSTICKERDETAILCELL_H

@class UITableViewCell, UILabel, NSString, NSDate, UIDateLabel, SKUIItemOfferButton;
@protocol CKStickerDetailCellDelegate;


#import "CKAnimatedImageView.h"

@interface CKStickerDetailCell : UITableViewCell

@property (weak, nonatomic) NSObject<CKStickerDetailCellDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UILabel *senderLabel; // ivar: _senderLabel
@property (retain, nonatomic) NSString *senderText; // ivar: _senderText
@property (retain, nonatomic) UILabel *stickerPackLabel; // ivar: _stickerPackLabel
@property (retain, nonatomic) NSString *stickerPackText; // ivar: _stickerPackText
@property (retain, nonatomic) id *stickerPreview; // ivar: _stickerPreview
@property (retain, nonatomic) CKAnimatedImageView *stickerView; // ivar: _stickerView
@property (retain, nonatomic) NSDate *timestampDate; // ivar: _timestampDate
@property (retain, nonatomic) UIDateLabel *timestampLabel; // ivar: _timestampLabel
@property (retain, nonatomic) SKUIItemOfferButton *viewButton; // ivar: _viewButton


+(id)identifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif