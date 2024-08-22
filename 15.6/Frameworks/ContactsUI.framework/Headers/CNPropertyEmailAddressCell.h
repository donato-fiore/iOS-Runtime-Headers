// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNPROPERTYEMAILADDRESSCELL_H
#define CNPROPERTYEMAILADDRESSCELL_H



#import "CNPropertySimpleTransportCell.h"

@interface CNPropertyEmailAddressCell : CNPropertySimpleTransportCell

@property (nonatomic, getter=isVIP) BOOL VIP; // ivar: _VIP


-(BOOL)shouldPerformDefaultAction;
-(BOOL)shouldShowStar;
-(void)updateTransportButtons;
-(void)updateValueWithPropertyItem:(id)arg0 ;


@end


#endif