// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTCARDFIELDPICKERPHOTOCELL_H
#define CNCONTACTCARDFIELDPICKERPHOTOCELL_H

@class UITableViewCell;


#import "CNAvatarView.h"

@interface CNContactCardFieldPickerPhotoCell : UITableViewCell

@property (retain, nonatomic) CNAvatarView *avatarView; // ivar: _avatarView


-(id)init;
-(void)prepareCellWithContact:(id)arg0 ;
-(void)prepareForReuse;
-(void)setConfiguration;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif