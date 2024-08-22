// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUROOMLISTITEMCELL_H
#define HUROOMLISTITEMCELL_H

@class UITableViewCell, UILabel, NSString;
@protocol HFIconDescriptor;



@interface HURoomListItemCell : UITableViewCell

@property (readonly, nonatomic) UILabel *nameLabel; // ivar: _nameLabel
@property (retain, nonatomic) NSObject<HFIconDescriptor> *roomIconDescriptor; // ivar: _roomIconDescriptor
@property (copy, nonatomic) NSString *roomName;


+(BOOL)requiresConstraintBasedLayout;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;


@end


#endif