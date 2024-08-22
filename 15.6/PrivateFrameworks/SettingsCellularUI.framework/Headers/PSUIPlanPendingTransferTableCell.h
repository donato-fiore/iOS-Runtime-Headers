// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSUIPLANPENDINGTRANSFERTABLECELL_H
#define PSUIPLANPENDINGTRANSFERTABLECELL_H

@class CTCellularPlanPendingTransfer, UIImageView;


#import "PSUIDanglingPlanTableCell.h"

@interface PSUIPlanPendingTransferTableCell : PSUIDanglingPlanTableCell

@property (retain, nonatomic) CTCellularPlanPendingTransfer *planPendingTransfer; // ivar: _planPendingTransfer
@property (retain, nonatomic) UIImageView *view; // ivar: _view


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;


@end


#endif