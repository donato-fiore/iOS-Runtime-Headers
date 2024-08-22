// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASPORTSENTITYGROUP_H
#define SASPORTSENTITYGROUP_H

@class NSArray, NSString;


#import "SASportsEntity.h"

@interface SASportsEntityGroup : SASportsEntity

@property (copy, nonatomic) NSArray *entities;
@property (copy, nonatomic) NSString *groupType;


+(id)entityGroup;
+(id)entityGroupWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif