// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNPROPERTYGROUPPOSTALADDRESSITEM_H
#define CNPROPERTYGROUPPOSTALADDRESSITEM_H

@class CNPostalAddress;


#import "CNPropertyGroupItem.h"

@interface CNPropertyGroupPostalAddressItem : CNPropertyGroupItem

@property (readonly, nonatomic) CNPostalAddress *address;


+(id)emptyValueForLabel:(id)arg0 ;
-(BOOL)_isMinimalAddress:(id)arg0 ;
-(BOOL)isEquivalentToItem:(id)arg0 whenEditing:(BOOL)arg1 ;
-(id)bestValue:(id)arg0 ;
-(id)defaultActionURL;
-(id)displayStringForValue:(id)arg0 ;
-(id)normalizedValue;


@end


#endif