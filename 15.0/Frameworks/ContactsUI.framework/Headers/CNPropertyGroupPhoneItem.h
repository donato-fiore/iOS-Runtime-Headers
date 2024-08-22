// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNPROPERTYGROUPPHONEITEM_H
#define CNPROPERTYGROUPPHONEITEM_H

@class CNPhoneNumber;


#import "CNPropertyGroupItem.h"

@interface CNPropertyGroupPhoneItem : CNPropertyGroupItem

@property (readonly, nonatomic) CNPhoneNumber *phoneNumber;


+(id)emptyValueForLabel:(id)arg0 ;
-(id)bestLabel:(id)arg0 ;
-(id)defaultActionURL;
-(id)displayStringForValue:(id)arg0 ;
-(id)normalizedValue;
-(id)valueForDisplayString:(id)arg0 ;


@end


#endif