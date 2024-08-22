// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABPOSTALNAMEGROUPITEM_H
#define ABPOSTALNAMEGROUPITEM_H

@class CNMutableContact, NSString;


#import "CNCardGroupItem.h"

@interface ABPostalNameGroupItem : CNCardGroupItem

@property (retain, nonatomic) CNMutableContact *contact; // ivar: _contact
@property (copy, nonatomic) NSString *placeholder; // ivar: _placeholder
@property (copy, nonatomic) NSString *property; // ivar: _property
@property (nonatomic) SEL setter; // ivar: _setter
@property (copy, nonatomic) NSString *value; // ivar: _value




@end


#endif