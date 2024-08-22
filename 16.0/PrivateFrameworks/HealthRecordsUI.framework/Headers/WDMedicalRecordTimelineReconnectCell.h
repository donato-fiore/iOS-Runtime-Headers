// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDMEDICALRECORDTIMELINERECONNECTCELL_H
#define WDMEDICALRECORDTIMELINERECONNECTCELL_H

@class HKDynamicButton;


#import "WDMedicalRecordGroupableCell.h"

@interface WDMedicalRecordTimelineReconnectCell : WDMedicalRecordGroupableCell

@property (retain, nonatomic) HKDynamicButton *reconnectButton; // ivar: _reconnectButton


-(void)_updateBasedOnAccessibilityCategory:(BOOL)arg0 ;
-(void)_updateForContentSizeCategory:(id)arg0 ;
-(void)prepareForReuse;
-(void)setUpConstraints;
-(void)setupSubviews;


@end


#endif