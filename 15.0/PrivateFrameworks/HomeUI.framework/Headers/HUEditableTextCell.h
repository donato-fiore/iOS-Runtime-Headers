// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUEDITABLETEXTCELL_H
#define HUEDITABLETEXTCELL_H

@class UITableViewCell, NSString, UITextField;
@protocol HUEditableTextCellProtocol, HUDisableableCellProtocol;



@interface HUEditableTextCell : UITableViewCell <HUEditableTextCellProtocol, HUDisableableCellProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITextField *textField; // ivar: _textField


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif