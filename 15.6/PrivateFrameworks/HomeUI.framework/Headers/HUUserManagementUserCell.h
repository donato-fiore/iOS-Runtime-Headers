// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUUSERMANAGEMENTUSERCELL_H
#define HUUSERMANAGEMENTUSERCELL_H

@class UITableViewCell, NSString;



@interface HUUserManagementUserCell : UITableViewCell

@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) NSString *invitationStatusString; // ivar: _invitationStatusString


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif