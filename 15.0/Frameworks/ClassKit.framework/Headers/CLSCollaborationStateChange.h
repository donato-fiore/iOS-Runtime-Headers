// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSCOLLABORATIONSTATECHANGE_H
#define CLSCOLLABORATIONSTATECHANGE_H

@class NSSet, NSString, NSArray;


#import "CLSObject.h"

@interface CLSCollaborationStateChange : CLSObject

@property (copy, nonatomic) NSSet *changedDomains; // ivar: _changedDomains
@property (copy, nonatomic) NSSet *deletedDomains; // ivar: _deletedDomains
@property (copy, nonatomic) NSString *ownerPersonID; // ivar: _ownerPersonID
@property (copy, nonatomic) NSString *recipientPersonID; // ivar: _recipientPersonID
@property (copy, nonatomic) NSString *senderPersonID; // ivar: _senderPersonID
@property (copy, nonatomic) NSArray *states; // ivar: _states
@property (copy, nonatomic) NSString *targetClassID; // ivar: _targetClassID
@property (copy, nonatomic) NSString *targetEntityName; // ivar: _targetEntityName
@property (copy, nonatomic) NSString *targetObjectID; // ivar: _targetObjectID


+(BOOL)supportsSecureCoding;
-(BOOL)addStateForDomain:(NSInteger)arg0 domainVersion:(NSInteger)arg1 state:(NSInteger)arg2 flags:(NSUInteger)arg3 note:(id)arg4 assetURL:(id)arg5 ;
-(BOOL)addStates:(id)arg0 ;
-(BOOL)addValidStates:(id)arg0 ;
-(BOOL)hasChanges;
-(BOOL)setAssetURL:(id)arg0 forDomain:(NSInteger)arg1 ;
-(BOOL)setClassID:(id)arg0 forDomain:(NSInteger)arg1 ;
-(BOOL)setDomainVersion:(NSInteger)arg0 forDomain:(NSInteger)arg1 ;
-(BOOL)setFlags:(NSUInteger)arg0 forDomain:(NSInteger)arg1 ;
-(BOOL)setInfoValue:(id)arg0 forKey:(id)arg1 forDomain:(NSInteger)arg2 ;
-(BOOL)setNote:(id)arg0 forDomain:(NSInteger)arg1 ;
-(BOOL)setState:(NSInteger)arg0 forDomain:(NSInteger)arg1 ;
-(BOOL)validateObject:(*id)arg0 ;
-(id)_init;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObject:(id)arg0 ownerPersonID:(id)arg1 targetClassID:(id)arg2 recipientPersonID:(id)arg3 ;
-(id)stateForDomain:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeChangesFrom:(id)arg0 ;
-(void)mergeWithObject:(id)arg0 ;
-(void)removeStateForDomain:(NSInteger)arg0 ;


@end


#endif