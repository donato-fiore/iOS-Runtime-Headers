// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNPROPERTYPHONENUMBERCELL_H
#define CNPROPERTYPHONENUMBERCELL_H

@class UIImageView;


#import "CNPropertySimpleTransportCell.h"

@interface CNPropertyPhoneNumberCell : CNPropertySimpleTransportCell

@property (retain, nonatomic) UIImageView *emergencyImageView; // ivar: _emergencyImageView
@property (nonatomic, getter=isEmergencyPhoneNumber) BOOL emergencyPhoneNumber; // ivar: _emergencyPhoneNumber


-(BOOL)shouldPerformDefaultAction;
-(BOOL)shouldShowEmergencyBadge;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)buildEmergencyImageView;
-(void)copy:(id)arg0 ;
-(void)setProperty:(id)arg0 ;
-(void)updateEmergencyBadge;
-(void)updateTransportButtons;


@end


#endif