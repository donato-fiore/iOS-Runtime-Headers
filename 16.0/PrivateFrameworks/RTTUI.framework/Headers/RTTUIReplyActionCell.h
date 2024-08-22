// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RTTUIREPLYACTIONCELL_H
#define RTTUIREPLYACTIONCELL_H

@class UITableViewCell;
@protocol RTTUIReplyActionCellDelegate;



@interface RTTUIReplyActionCell : UITableViewCell

@property (weak, nonatomic) NSObject<RTTUIReplyActionCellDelegate> *delegate; // ivar: _delegate


-(CGFloat)adjustedHeight;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 andDelegate:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif