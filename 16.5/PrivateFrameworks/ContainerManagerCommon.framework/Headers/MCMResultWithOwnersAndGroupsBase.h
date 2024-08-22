// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMRESULTWITHOWNERSANDGROUPSBASE_H
#define MCMRESULTWITHOWNERSANDGROUPSBASE_H

@class NSMutableArray, NSMutableSet, NSString, NSArray;
@protocol MCMResultWithOwnersAndGroups;


#import "MCMResultBase.h"
#import "MCMError.h"

@interface MCMResultWithOwnersAndGroupsBase : MCMResultBase <MCMResultWithOwnersAndGroups>

 {
    NSMutableArray *_mutableOwnerIdentifiers;
    NSMutableArray *_mutableGroupIdentifiers;
    NSMutableSet *_facts;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) MCMError *error;
@property (readonly, nonatomic) NSArray *groupIdentifiers;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *ownerIdentifiers;
@property (readonly) Class superclass;


-(BOOL)encodeResultOntoReply:(id)arg0 ;
-(id)init;
-(void)addOwner:(id)arg0 group:(id)arg1 ;


@end


#endif