// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMRESULTWITHOWNERSANDGROUPSBASEFACT_H
#define MCMRESULTWITHOWNERSANDGROUPSBASEFACT_H


#import <Foundation/Foundation.h>


@interface MCMResultWithOwnersAndGroupsBaseFact : NSObject

@property (readonly, nonatomic) NSUInteger groupIndex; // ivar: _groupIndex
@property (readonly, nonatomic) NSUInteger ownerIndex; // ivar: _ownerIndex


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithOwnerIndex:(NSUInteger)arg0 groupIndex:(NSUInteger)arg1 ;


@end


#endif