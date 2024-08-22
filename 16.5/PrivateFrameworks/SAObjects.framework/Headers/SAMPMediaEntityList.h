// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAMPMEDIAENTITYLIST_H
#define SAMPMEDIAENTITYLIST_H



#import "SAAbstractItemList.h"
#import "SAMPCollection.h"

@interface SAMPMediaEntityList : SAAbstractItemList

@property (nonatomic) int mediaType;
@property (retain, nonatomic) SAMPCollection *parentCollection;


+(id)mediaEntityList;
+(id)mediaEntityListWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif