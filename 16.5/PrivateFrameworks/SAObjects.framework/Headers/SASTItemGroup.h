// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASTITEMGROUP_H
#define SASTITEMGROUP_H

@class NSArray;


#import "SAUISnippet.h"

@interface SASTItemGroup : SAUISnippet

@property (copy, nonatomic) NSArray *fallbackCommands;
@property (copy, nonatomic) NSArray *templateItems;


+(id)itemGroup;
+(id)itemGroupWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif