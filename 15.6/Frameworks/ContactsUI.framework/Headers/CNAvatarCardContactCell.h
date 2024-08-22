// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNAVATARCARDCONTACTCELL_H
#define CNAVATARCARDCONTACTCELL_H

@class UIImageView;


#import "CNAvatarCardActionCell.h"

@interface CNAvatarCardContactCell : CNAvatarCardActionCell

@property (retain, nonatomic) UIImageView *contactImageView; // ivar: _contactImageView


-(BOOL)moreHighlighted;
-(void)_updateFonts;
-(void)awakeFromNib;
-(void)prepareForReuse;
-(void)reloadData;


@end


#endif