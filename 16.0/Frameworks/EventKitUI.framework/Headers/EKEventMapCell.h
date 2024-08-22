// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKEVENTMAPCELL_H
#define EKEVENTMAPCELL_H

@class UITableViewCell;


#import "EKEventMapDetailItem.h"

@interface EKEventMapCell : UITableViewCell

@property (nonatomic) BOOL currentlyLoading; // ivar: _currentlyLoading
@property (weak, nonatomic) EKEventMapDetailItem *detailItem; // ivar: _detailItem
@property (nonatomic) BOOL mapViewSetup; // ivar: _mapViewSetup
@property (nonatomic) BOOL setupAsEmptyView; // ivar: _setupAsEmptyView


-(void)_drawContentInRect:(struct CGRect )arg0 selected:(BOOL)arg1 ;
-(void)_drawSeparatorInRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif