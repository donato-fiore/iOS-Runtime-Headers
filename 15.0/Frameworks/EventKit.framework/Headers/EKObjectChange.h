// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKOBJECTCHANGE_H
#define EKOBJECTCHANGE_H


#import <Foundation/Foundation.h>

#import "EKObjectID.h"

@interface EKObjectChange : NSObject

@property (readonly, nonatomic) NSInteger changeID; // ivar: _changeID
@property (readonly, nonatomic) int changeType; // ivar: _changeType
@property (readonly, nonatomic) EKObjectID *changedObjectID; // ivar: _changedObjectID
@property (readonly, nonatomic) NSInteger sequenceNumber; // ivar: _sequenceNumber


+(NSInteger)objectType;
+(id)CADObjectChangeIDsFromEKObjectChanges:(id)arg0 ;
+(id)_filterObjectChangesNotConformingToOwnerIDProvidingProtocol:(SEL)arg0 ;
+(id)objectChangeWithProperties:(id)arg0 ;
+(id)processFetchResults:(SEL)arg0 ;
+(int)entityType;
// +(void)callClientResultsHandler:(id)arg0 changesTruncated:(unk)arg1 latestToken:(BOOL)arg2 changes:(NSInteger)arg3  ;
+(void)fetchChangesToObjectsOfTypes:(id)arg0 inCalendar:(id)arg1 resultHandler:(id)arg2 ;
+(void)fetchChangesToObjectsOfTypes:(id)arg0 inSource:(id)arg1 resultHandler:(id)arg2 ;
+(void)fetchChangesToObjectsOfTypes:(id)arg0 inStore:(id)arg1 resultHandler:(id)arg2 ;
+(void)fetchChangesToOwnerIDProvidingObjectsOfTypes:(id)arg0 inCalendar:(id)arg1 resultHandler:(id)arg2 ;
+(void)fetchChangesToOwnerIDProvidingObjectsOfTypes:(id)arg0 inSource:(id)arg1 resultHandler:(id)arg2 ;
+(void)fetchChangesToOwnerIDProvidingObjectsOfTypes:(id)arg0 inStore:(id)arg1 resultHandler:(id)arg2 ;
+(void)fetchObjectChangesInCalendar:(id)arg0 resultHandler:(id)arg1 ;
+(void)fetchObjectChangesInSource:(id)arg0 resultHandler:(id)arg1 ;
+(void)fetchObjectChangesInStore:(id)arg0 resultHandler:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithChangeProperties:(id)arg0 ;
-(id)serializedPropertiesForConsumingChange;


@end


#endif