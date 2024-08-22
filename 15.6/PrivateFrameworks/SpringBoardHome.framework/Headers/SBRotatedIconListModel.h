// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBROTATEDICONLISTMODEL_H
#define SBROTATEDICONLISTMODEL_H



#import "SBIconListModel.h"

@interface SBRotatedIconListModel : SBIconListModel

@property (weak, nonatomic) SBIconListModel *unrotatedIconListModel; // ivar: _unrotatedIconListModel


+(BOOL)supportsRotatedLayout;
-(void)_notifyListObserversDidAddIcons:(id)arg0 didRemoveIcons:(id)arg1 movedIcons:(id)arg2 didReplaceIcon:(id)arg3 withIcon:(id)arg4 ;
-(void)clearParentNodeForIconIfNecessary:(id)arg0 ;
-(void)updateParentNodeForIconIfNecessary:(id)arg0 ;


@end


#endif