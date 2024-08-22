// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDETAILSWALLETITEMSEARCHCONTROLLER_H
#define CKDETAILSWALLETITEMSEARCHCONTROLLER_H



#import "CKWalletItemSearchController.h"
#import "CKWalletItemSearchResultsCell.h"

@interface CKDetailsWalletItemSearchController : CKWalletItemSearchController

@property (retain, nonatomic) CKWalletItemSearchResultsCell *sizingCell; // ivar: _sizingCell


+(id)sectionIdentifier;
-(id)layoutGroupWithEnvironment:(id)arg0 ;


@end


#endif