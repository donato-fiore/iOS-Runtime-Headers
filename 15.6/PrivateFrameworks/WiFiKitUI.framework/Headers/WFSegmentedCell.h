// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSEGMENTEDCELL_H
#define WFSEGMENTEDCELL_H

@class UITableViewCell, UISegmentedControl;



@interface WFSegmentedCell : UITableViewCell

@property (copy) id *handler; // ivar: _handler
@property (weak, nonatomic) UISegmentedControl *segmentedControl; // ivar: _segmentedControl


-(void)_segmentedControlDidChange:(id)arg0 ;
-(void)addSubview:(id)arg0 ;
-(void)awakeFromNib;


@end


#endif