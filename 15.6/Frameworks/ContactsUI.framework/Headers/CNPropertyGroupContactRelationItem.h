// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNPROPERTYGROUPCONTACTRELATIONITEM_H
#define CNPROPERTYGROUPCONTACTRELATIONITEM_H

@class CNContactRelation;


#import "CNPropertyGroupItem.h"

@interface CNPropertyGroupContactRelationItem : CNPropertyGroupItem

@property (readonly, nonatomic) CNContactRelation *contactRelation;


+(id)emptyValueForLabel:(id)arg0 ;
-(id)displayStringForValue:(id)arg0 ;
-(id)normalizedValue;
-(id)valueForDisplayString:(id)arg0 ;


@end


#endif