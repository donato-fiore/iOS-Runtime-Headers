// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSWELCOMETABLEVIEWCELL_H
#define DSWELCOMETABLEVIEWCELL_H

@class UITableViewCell, NSMutableArray;



@interface DSWelcomeTableViewCell : UITableViewCell

@property (retain, nonatomic) NSMutableArray *constraints; // ivar: _constraints


-(id)init;
-(void)constrainImageViews;
-(void)constrainTextLabels;
-(void)customizeProperties;


@end


#endif