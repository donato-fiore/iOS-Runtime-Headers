// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKPERSISTENTSHAREE_H
#define EKPERSISTENTSHAREE_H



#import "EKPersistentObject.h"

@interface EKPersistentSharee : EKPersistentObject



+(Class)meltedClass;
+(id)defaultPropertiesToLoad;
+(id)relations;
-(id)UUID;
-(id)address;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)displayName;
-(id)externalID;
-(id)firstName;
-(id)lastName;
-(id)owner;
-(int)entityType;
-(int)shareeAccessLevelRaw;
-(int)shareeStatusRaw;
-(void)setAddress:(id)arg0 ;
-(void)setDisplayName:(id)arg0 ;
-(void)setExternalID:(id)arg0 ;
-(void)setFirstName:(id)arg0 ;
-(void)setLastName:(id)arg0 ;
-(void)setOwner:(id)arg0 ;
-(void)setShareeAccessLevelRaw:(int)arg0 ;
-(void)setShareeStatusRaw:(int)arg0 ;
-(void)setUUID:(id)arg0 ;


@end


#endif