// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFEDITABLETABLEVIEWCELL_H
#define SFEDITABLETABLEVIEWCELL_H

@class UITableViewCell;
@protocol SFEditableTableViewCellDelegate;



@interface SFEditableTableViewCell : UITableViewCell

@property (weak, nonatomic) NSObject<SFEditableTableViewCellDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled


-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(id)initWithEnabledState:(BOOL)arg0 ;
-(void)_updateTextFieldTextColor;
-(void)copy:(id)arg0 ;
-(void)tintColorDidChange;


@end


#endif