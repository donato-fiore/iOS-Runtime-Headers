// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMCMANAGEDMEDIADETAILSCELL_H
#define DMCMANAGEDMEDIADETAILSCELL_H

@protocol DMCManagedMediaCell;


#import "DMCItemSummaryCell.h"

@interface DMCManagedMediaDetailsCell : DMCItemSummaryCell <DMCManagedMediaCell>





+(id)localizedManagedAppRestrictionsTitle;
-(void)setManagedApp:(id)arg0 ;
-(void)setManagedBook:(id)arg0 ;


@end


#endif