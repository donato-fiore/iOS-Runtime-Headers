// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRAUTHORIZATIONCELL_H
#define SRAUTHORIZATIONCELL_H

@class UITableViewCell, NSIndexPath, UISwitch;
@protocol SRAuthorizationCellDelegate;



@interface SRAuthorizationCell : UITableViewCell

@property (weak, nonatomic) NSObject<SRAuthorizationCellDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSIndexPath *indexPath; // ivar: _indexPath
@property (retain, nonatomic) UISwitch *toggle; // ivar: _toggle


+(id)authorizationCellForIndexPath:(id)arg0 title:(id)arg1 state:(id)arg2 delegate:(id)arg3 tableView:(id)arg4 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)switchChanged;


@end


#endif