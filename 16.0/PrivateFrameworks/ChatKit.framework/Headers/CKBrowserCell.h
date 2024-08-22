// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKBROWSERCELL_H
#define CKBROWSERCELL_H

@class UICollectionViewCell, UIImageView, UILabel, UIView;
@protocol CKBrowserCellDelegate;


#import "CKBadgeView.h"
#import "CKBrowserSelectionLabelAccessoryView.h"

@interface CKBrowserCell : UICollectionViewCell

@property (retain, nonatomic) CKBadgeView *badgeView; // ivar: _badgeView
@property (retain, nonatomic) UIImageView *borderView; // ivar: _borderView
@property (retain, nonatomic) UILabel *browserLabel; // ivar: _browserLabel
@property (weak, nonatomic) NSObject<CKBrowserCellDelegate> *delegate; // ivar: _delegate
@property (readonly) UIView *iconView;
@property (nonatomic) BOOL jitter; // ivar: _jitter
@property (nonatomic) CGRect selectionFrame; // ivar: _selectionFrame
@property (nonatomic) NSUInteger shinyStatus; // ivar: _shinyStatus
@property (retain, nonatomic) CKBrowserSelectionLabelAccessoryView *shinyStatusView; // ivar: _shinyStatusView
@property (nonatomic) BOOL shouldShowLabel; // ivar: _shouldShowLabel


+(Class)classForItemType:(NSInteger)arg0 ;
+(id)reuseIdentifier;
-(CGFloat)browserCellSelectionBorderOutset;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )browserCellIconFrame;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setBorderStyle:(NSInteger)arg0 ;


@end


#endif