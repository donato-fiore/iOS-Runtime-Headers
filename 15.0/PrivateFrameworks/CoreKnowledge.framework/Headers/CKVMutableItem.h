// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVMUTABLEITEM_H
#define CKVMUTABLEITEM_H

@class NSArray, NSString;


#import "CKVItem.h"

@interface CKVMutableItem : CKVItem

@property (copy, nonatomic) NSArray *fields;
@property (copy, nonatomic) NSString *itemId;
@property (nonatomic) NSInteger itemType;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif