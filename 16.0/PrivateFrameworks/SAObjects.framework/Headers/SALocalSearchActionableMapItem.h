// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SALOCALSEARCHACTIONABLEMAPITEM_H
#define SALOCALSEARCHACTIONABLEMAPITEM_H

@class NSArray;


#import "SALocalSearchMapItem.h"

@interface SALocalSearchActionableMapItem : SALocalSearchMapItem

@property (copy, nonatomic) NSArray *commands;


+(id)actionableMapItem;
+(id)actionableMapItemWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif