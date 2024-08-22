// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENCDGROUP_H
#define ENCDGROUP_H

@class NSManagedObject, NSData;
@protocol ENCypher;


#import "ENGroupID.h"
#import "ENStableGroupID.h"

@interface ENCDGroup : NSManagedObject

@property (retain, nonatomic) NSObject<ENCypher> *cypher;
@property (retain, nonatomic) ENGroupID *groupID;
@property (nonatomic) NSInteger groupIDGeneration;
@property (retain, nonatomic) NSData *sharedApplicationData;
@property (retain, nonatomic) ENStableGroupID *stableGroupID;


+(id)fetchRequest;
+(id)groupFromGroup:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;
+(id)insertIntoManagedObjectContext:(id)arg0 ;
+(id)predicateForGroupID:(id)arg0 ;
+(id)predicateForGroupIDs:(id)arg0 ;
+(id)predicateForStableGroupID:(id)arg0 ;


@end


#endif