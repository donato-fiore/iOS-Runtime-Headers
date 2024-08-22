// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLDUPLICATEGROUP_H
#define PLDUPLICATEGROUP_H

@class NSMutableSet, NSSet;

#import <Foundation/Foundation.h>


@interface PLDuplicateGroup : NSObject {
    NSMutableSet *_mutableGroup;
    NSMutableSet *_mutableExcludedGroup;
    NSMutableSet *_mutableSubGroups;
}


@property (readonly) NSSet *excludedGroup;
@property (readonly) NSSet *group;
@property (readonly) BOOL hasExcludedItems;
@property (readonly) BOOL hasSubGroups;
@property (readonly) NSSet *subGroups;


-(id)debugDescription;
-(id)init;
-(id)initWithGroupResults:(id)arg0 ;
-(id)printStringListFromOIDs:(id)arg0 ;
-(void)addManagedObjectID:(id)arg0 ;
-(void)addSubGroup:(id)arg0 ;
-(void)compactSubGroups;
-(void)excludeManagedObjectID:(id)arg0 ;
-(void)replaceSubGroups:(id)arg0 ;


@end


#endif