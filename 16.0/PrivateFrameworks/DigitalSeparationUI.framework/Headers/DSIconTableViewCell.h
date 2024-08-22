// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DSICONTABLEVIEWCELL_H
#define DSICONTABLEVIEWCELL_H

@class UITableViewCell;



@interface DSIconTableViewCell : UITableViewCell



+(id)iconTableViewCellFromTableView:(id)arg0 withRightAlignedLabel:(id)arg1 detail:(id)arg2 icon:(id)arg3 ;
+(id)iconTableViewCellFromTableView:(id)arg0 withText:(id)arg1 detail:(id)arg2 icon:(id)arg3 ;
-(id)initWithRightAlignedLabel:(id)arg0 detail:(id)arg1 icon:(id)arg2 ;
-(id)initWithText:(id)arg0 detail:(id)arg1 icon:(id)arg2 ;
-(void)customizeProperties;
-(void)willTransitionToState:(NSUInteger)arg0 ;


@end


#endif