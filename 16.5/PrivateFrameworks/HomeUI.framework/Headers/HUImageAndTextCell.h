// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUIMAGEANDTEXTCELL_H
#define HUIMAGEANDTEXTCELL_H

@class UITableViewCell, NSArray, NSString, UIImageView, UILayoutGuide, HFItem, UITextView;
@protocol HUCellSeparatorAppearanceDefining, HUCellProtocol, HUResizableCellDelegate;



@interface HUImageAndTextCell : UITableViewCell <HUCellSeparatorAppearanceDefining, HUCellProtocol>



@property (retain, nonatomic) NSArray *contentConstraints; // ivar: _contentConstraints
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGSize imageViewRecommendedSize; // ivar: _imageViewRecommendedSize
@property (readonly, nonatomic) UIImageView *infoImageView; // ivar: _infoImageView
@property (readonly, nonatomic) UILayoutGuide *infoImageViewTrailingMarginLayoutGuide; // ivar: _infoImageViewTrailingMarginLayoutGuide
@property (retain, nonatomic) HFItem *item; // ivar: _item
@property (readonly, nonatomic) UITextView *messageTextView; // ivar: _messageTextView
@property (readonly, nonatomic) BOOL prefersSeparatorsHidden;
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)prepareForReuse;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif