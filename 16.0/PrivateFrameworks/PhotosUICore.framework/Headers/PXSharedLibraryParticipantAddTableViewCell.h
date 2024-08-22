// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYPARTICIPANTADDTABLEVIEWCELL_H
#define PXSHAREDLIBRARYPARTICIPANTADDTABLEVIEWCELL_H

@class UITableViewCell;


#import "PXSharedLibraryParticipantAddButton.h"

@interface PXSharedLibraryParticipantAddTableViewCell : UITableViewCell

@property (readonly, nonatomic) PXSharedLibraryParticipantAddButton *addButton; // ivar: _addButton


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif