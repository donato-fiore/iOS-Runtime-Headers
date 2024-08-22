// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKAUTHORIZATIONLOGINCHOICECELL_H
#define AKAUTHORIZATIONLOGINCHOICECELL_H

@class UITableViewCell, UIImage, AKAuthorizationLoginChoice;



@interface AKAuthorizationLoginChoiceCell : UITableViewCell

@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) AKAuthorizationLoginChoice *loginChoice; // ivar: _loginChoice


-(id)initWithLoginChoice:(id)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setupContent;
-(void)_setupFormat;
-(void)layoutSubviews;


@end


#endif