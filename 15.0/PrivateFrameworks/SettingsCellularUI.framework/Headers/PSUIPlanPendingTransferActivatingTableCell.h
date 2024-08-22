// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSUIPLANPENDINGTRANSFERACTIVATINGTABLECELL_H
#define PSUIPLANPENDINGTRANSFERACTIVATINGTABLECELL_H

@class CTCellularPlanPendingTransfer;


#import "PSUIDanglingPlanTableCell.h"

@interface PSUIPlanPendingTransferActivatingTableCell : PSUIDanglingPlanTableCell

@property (retain, nonatomic) CTCellularPlanPendingTransfer *planPendingTransfer; // ivar: _planPendingTransfer


-(id)_setStatusLabelText;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;


@end


#endif