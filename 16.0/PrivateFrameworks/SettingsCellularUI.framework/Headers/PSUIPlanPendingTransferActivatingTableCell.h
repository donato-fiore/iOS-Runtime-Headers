// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSUIPLANPENDINGTRANSFERACTIVATINGTABLECELL_H
#define PSUIPLANPENDINGTRANSFERACTIVATINGTABLECELL_H

@class CTCellularPlanPendingTransfer, UIActivityIndicatorView;


#import "PSUIDanglingPlanTableCell.h"

@interface PSUIPlanPendingTransferActivatingTableCell : PSUIDanglingPlanTableCell

@property (retain, nonatomic) CTCellularPlanPendingTransfer *planPendingTransfer; // ivar: _planPendingTransfer
@property (retain, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner


-(id)_setStatusLabelText;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;


@end


#endif