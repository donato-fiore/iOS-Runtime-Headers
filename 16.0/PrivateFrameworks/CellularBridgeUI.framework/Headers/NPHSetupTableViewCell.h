// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPHSETUPTABLEVIEWCELL_H
#define NPHSETUPTABLEVIEWCELL_H

@class UITableViewCell, UITextField;



@interface NPHSetupTableViewCell : UITableViewCell

@property (retain, nonatomic) UITextField *editableTextField; // ivar: _editableTextField


+(CGFloat)rowHeight;
-(id)initWithTag:(NSInteger)arg0 delegate:(id)arg1 ;


@end


#endif