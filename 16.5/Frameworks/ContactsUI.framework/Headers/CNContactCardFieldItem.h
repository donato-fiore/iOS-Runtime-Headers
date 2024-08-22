// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTCARDFIELDITEM_H
#define CNCONTACTCARDFIELDITEM_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CNPropertyGroupItem.h"

@interface CNContactCardFieldItem : NSObject

@property (readonly, nonatomic) NSString *displayLabel; // ivar: _displayLabel
@property (readonly, nonatomic) NSString *displayValue; // ivar: _displayValue
@property (readonly, nonatomic) CNPropertyGroupItem *groupItem; // ivar: _groupItem


+(id)photoItem;
-(id)initWithDisplayLabel:(id)arg0 ;
-(id)initWithGroupItem:(id)arg0 ;


@end


#endif