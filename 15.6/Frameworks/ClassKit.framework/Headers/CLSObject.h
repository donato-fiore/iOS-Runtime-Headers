// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSOBJECT_H
#define CLSOBJECT_H

@class NSString, NSDictionary, NSDate;
@protocol CLSRelationable, CLSGraphVertex, NSLocking, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CLSDataStore.h"
#import "CLSObject.h"

@interface CLSObject : NSObject <CLSRelationable, CLSGraphVertex, NSLocking, NSSecureCoding>

 {
    BOOL _deleted;
    BOOL _modified;
    BOOL _enforceImmutability;
    CLSDataStore *_dataStore;
    NSString *_parentObjectID;
    NSString *_appIdentifier;
    CLSObject *_parent;
    os_unfair_recursive_lock_s _lock;
    BOOL _needsRepair;
}


@property (copy, nonatomic) NSString *appIdentifier;
@property (copy, nonatomic) NSDictionary *childrenByID; // ivar: _childrenByID
@property (weak, nonatomic) CLSDataStore *dataStore;
@property (retain, nonatomic) NSDate *dateCreated; // ivar: _dateCreated
@property (retain, nonatomic) NSDate *dateExpires; // ivar: _dateExpires
@property (retain, nonatomic) NSDate *dateLastModified; // ivar: _dateLastModified
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDeleted) BOOL deleted;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isImmutabilityEnforced) BOOL enforceImmutability;
@property unsigned int generation; // ivar: _generation
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isModified) BOOL modified;
@property (copy, nonatomic) NSString *objectID; // ivar: _objectID
@property (weak, nonatomic) CLSObject *parent;
@property (copy, nonatomic) NSString *parentObjectID;
@property (readonly) Class superclass;
@property (nonatomic, getter=isTemporary) BOOL temporary; // ivar: _temporary
@property (readonly, nonatomic) id *vertexID;


+(BOOL)supportsSecureCoding;
+(id)dateFormatter;
+(id)relations;
-(BOOL)needsRepair;
-(BOOL)validateObject:(*id)arg0 ;
-(NSInteger)effectiveAuthorizationStatus;
-(id)_init;
-(id)ancestorOfClass:(Class)arg0 ;
-(id)childrenOfClass:(Class)arg0 ;
-(id)childrenPassingTest:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)identity;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeletedObjectID:(id)arg0 ;
-(id)removeChildWithoutDeleting:(id)arg0 ;
-(void)_addChild:(id)arg0 ;
-(void)_addChild:(id)arg0 lock:(BOOL)arg1 ;
-(void)addChild:(id)arg0 ;
-(void)addChild:(id)arg0 changedPropertyName:(id)arg1 ;
-(void)didSaveObject;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateChildren:(id)arg0 ;
-(void)enumerateTree:(id)arg0 ;
-(void)lock;
-(void)mergeWithObject:(id)arg0 ;
-(void)removeChild:(id)arg0 ;
-(void)removeChild:(id)arg0 changedPropertyName:(id)arg1 ;
-(void)removeFromParentWithoutDeleting;
-(void)setNeedsRepair:(BOOL)arg0 ;
-(void)unlock;
-(void)willSaveObject;


@end


#endif