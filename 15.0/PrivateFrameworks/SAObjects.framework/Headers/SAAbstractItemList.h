// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAABSTRACTITEMLIST_H
#define SAABSTRACTITEMLIST_H

@class NSArray, NSNumber;


#import "SADomainObject.h"

@interface SAAbstractItemList : SADomainObject

@property (copy, nonatomic) NSArray *domainObjects;
@property (copy, nonatomic) NSNumber *selectedIndex;


+(id)abstractItemList;
+(id)abstractItemListWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif