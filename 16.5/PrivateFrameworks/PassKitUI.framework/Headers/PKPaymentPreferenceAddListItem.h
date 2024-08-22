// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTPREFERENCEADDLISTITEM_H
#define PKPAYMENTPREFERENCEADDLISTITEM_H

@class UIColor;


#import "PKPaymentPreferenceListItem.h"

@interface PKPaymentPreferenceAddListItem : PKPaymentPreferenceListItem

@property (retain, nonatomic) UIColor *buttonTextColor; // ivar: _buttonTextColor
@property (readonly, nonatomic) id *handler; // ivar: _handler
@property (readonly, nonatomic) int type; // ivar: _type


-(id)_text;
-(id)configuration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAddPreferenceType:(int)arg0 forSectionPreference:(id)arg1 handler:(id)arg2 ;


@end


#endif