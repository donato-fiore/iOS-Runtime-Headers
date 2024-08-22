// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHPAGEMANAGEMENTICON_H
#define SBHPAGEMANAGEMENTICON_H



#import "SBLeafIcon.h"
#import "SBIconListModel.h"

@interface SBHPageManagementIcon : SBLeafIcon

@property (readonly, nonatomic) SBIconListModel *listModel; // ivar: _listModel


-(BOOL)canBeAddedToMultiItemDrag;
-(BOOL)canBeAddedToSubfolder;
-(BOOL)canBeReceivedByIcon;
-(BOOL)canReceiveGrabbedIcon;
-(id)initWithListModel:(id)arg0 ;


@end


#endif