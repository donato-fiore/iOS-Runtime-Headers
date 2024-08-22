// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNPROPERTYGROUPINSTANTMESSAGEITEM_H
#define CNPROPERTYGROUPINSTANTMESSAGEITEM_H

@class CNInstantMessageAddress;


#import "CNPropertyGroupItem.h"

@interface CNPropertyGroupInstantMessageItem : CNPropertyGroupItem

@property (readonly, nonatomic) CNInstantMessageAddress *imAddress;


+(id)emptyValueForLabel:(id)arg0 ;
-(BOOL)isEquivalentToItem:(id)arg0 ;
-(id)defaultActionURL;
-(id)displayLabel;
-(id)displayStringForValue:(id)arg0 ;
-(id)editingStringValue;
-(id)valueForDisplayString:(id)arg0 ;


@end


#endif