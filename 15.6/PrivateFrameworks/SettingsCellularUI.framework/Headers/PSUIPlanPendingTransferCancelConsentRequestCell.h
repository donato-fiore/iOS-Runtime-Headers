// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSUIPLANPENDINGTRANSFERCANCELCONSENTREQUESTCELL_H
#define PSUIPLANPENDINGTRANSFERCANCELCONSENTREQUESTCELL_H

@class PSTableCell, CTCellularPlanManager, CTCellularPlanPendingTransfer;



@interface PSUIPlanPendingTransferCancelConsentRequestCell : PSTableCell

@property (retain, nonatomic) CTCellularPlanManager *cellularPlanManager; // ivar: _cellularPlanManager
@property (retain, nonatomic) CTCellularPlanPendingTransfer *planPendingTransfer; // ivar: _planPendingTransfer


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(void)cancelPressed;


@end


#endif