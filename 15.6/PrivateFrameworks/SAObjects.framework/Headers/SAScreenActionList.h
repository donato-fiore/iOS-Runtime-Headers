// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASCREENACTIONLIST_H
#define SASCREENACTIONLIST_H

@class NSString, NSURL;


#import "SAAbstractItemList.h"

@interface SAScreenActionList : SAAbstractItemList

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *mainEntitySemanticData;
@property (copy, nonatomic) NSURL *viewId;


+(id)list;
+(id)listWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif