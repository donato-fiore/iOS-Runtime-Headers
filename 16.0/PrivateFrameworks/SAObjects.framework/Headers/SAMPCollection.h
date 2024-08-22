// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAMPCOLLECTION_H
#define SAMPCOLLECTION_H

@class NSArray;


#import "SAMPMediaEntity.h"

@interface SAMPCollection : SAMPMediaEntity

@property (nonatomic) BOOL editable;
@property (copy, nonatomic) NSArray *items;


+(id)collection;
+(id)collectionWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif