// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STTABLEWELCOMECONTROLLER_H
#define STTABLEWELCOMECONTROLLER_H

@class OBTableWelcomeController, NSLayoutConstraint, UITableViewController;



@interface STTableWelcomeController : OBTableWelcomeController

@property (retain, nonatomic) NSLayoutConstraint *heightConstraint; // ivar: _heightConstraint
@property (retain, nonatomic) UITableViewController *tableViewController; // ivar: _tableViewController


-(void)_contentSizeDidChangeFrom:(struct CGSize )arg0 to:(struct CGSize )arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setTableView:(id)arg0 ;


@end


#endif