// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUEDITABLETEXTCOLLECTIONLISTCELL_H
#define HUEDITABLETEXTCOLLECTIONLISTCELL_H

@class UICollectionViewListCell, NSString, UIListContentView, NSArray, UITextField;
@protocol HUEditableTextCellProtocol, HUDisableableCellProtocol;



@interface HUEditableTextCollectionListCell : UICollectionViewListCell <HUEditableTextCellProtocol, HUDisableableCellProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIListContentView *listContentView; // ivar: _listContentView
@property (retain, nonatomic) NSArray *listContentViewConstraints; // ivar: _listContentViewConstraints
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITextField *textField; // ivar: _textField
@property (retain, nonatomic) NSArray *textFieldConstraints; // ivar: _textFieldConstraints


+(BOOL)requiresConstraintBasedLayout;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)prepareForReuse;
-(void)setContentConfiguration:(id)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)updateConstraints;


@end


#endif