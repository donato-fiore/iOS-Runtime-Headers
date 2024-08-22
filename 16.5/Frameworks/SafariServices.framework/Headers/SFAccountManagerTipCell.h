// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFACCOUNTMANAGERTIPCELL_H
#define SFACCOUNTMANAGERTIPCELL_H



#import "SFAccountManagerPlatterWithDeclineButtonCell.h"

@interface SFAccountManagerTipCell : SFAccountManagerPlatterWithDeclineButtonCell

@property (readonly, nonatomic) NSInteger tipType; // ivar: _tipType


-(void)configureForTip:(NSInteger)arg0 ;


@end


#endif