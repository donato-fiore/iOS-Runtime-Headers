// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFUBIQUITYMETADATAFACTORY_H
#define PFUBIQUITYMETADATAFACTORY_H

@class NSMutableDictionary, NSRecursiveLock;

#import <Foundation/Foundation.h>

#import "NSManagedObjectModel.h"

@interface PFUbiquityMetadataFactory : NSObject {
    NSMutableDictionary *_rootLocationToPeerIDToEntry;
    NSRecursiveLock *_rootLocationToPeerIDToEntryLock;
    NSManagedObjectModel *_cachedModel;
}




+(void)_invalidateStaticCaches;
+(void)initialize;
-(id)createMetadataModel;
-(id)description;
-(id)init;
-(id)newAttributeNamed:(id)arg0 attributeType:(NSUInteger)arg1 isOptional:(BOOL)arg2 isTransient:(BOOL)arg3 withDefaultValue:(id)arg4 andMinValue:(id)arg5 andMaxValue:(id)arg6 ;
-(id)newEntityForName:(id)arg0 ;
-(id)newRelationshipNamed:(id)arg0 withDestinationEntity:(id)arg1 andInverseRelationship:(id)arg2 isOptional:(BOOL)arg3 isToMany:(BOOL)arg4 andDeleteRule:(NSUInteger)arg5 ;
-(void)addModelingToolUserInfoToEntity:(id)arg0 ;
-(void)addModelingToolUserInfoToProperty:(id)arg0 ;
-(void)dealloc;


@end


#endif