// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUINSTRUCTIONSCELL_H
#define HUINSTRUCTIONSCELL_H

@class UITableViewCell, NSArray, NSString, UITextView, HFItem, UILabel;
@protocol UITextViewDelegate, HUCellProtocol, HUResizableCellDelegate;



@interface HUInstructionsCell : UITableViewCell <UITextViewDelegate, HUCellProtocol>



@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property (nonatomic) CGFloat contentBottomMargin; // ivar: _contentBottomMargin
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UITextView *descriptionView; // ivar: _descriptionView
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesTopSpacing; // ivar: _hidesTopSpacing
@property (retain, nonatomic) HFItem *item; // ivar: _item
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)updateConstraints;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif