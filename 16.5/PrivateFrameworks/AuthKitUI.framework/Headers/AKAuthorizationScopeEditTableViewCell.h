// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKAUTHORIZATIONSCOPEEDITTABLEVIEWCELL_H
#define AKAUTHORIZATIONSCOPEEDITTABLEVIEWCELL_H

@class UITableViewCell, UITextField;



@interface AKAuthorizationScopeEditTableViewCell : UITableViewCell

@property (readonly, nonatomic) UITextField *detailTextField; // ivar: _detailTextField


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setup;
-(void)_setupDetailTextField;


@end


#endif