// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKPERSISTENTEVENTACTION_H
#define EKPERSISTENTEVENTACTION_H



#import "EKPersistentObject.h"

@interface EKPersistentEventAction : EKPersistentObject



+(Class)meltedClass;
+(id)relations;
-(id)externalFolderID;
-(id)externalID;
-(id)externalModificationTag;
-(id)externalRepresentation;
-(id)externalScheduleID;
-(id)owner;
-(int)entityType;
-(void)setExternalFolderID:(id)arg0 ;
-(void)setExternalID:(id)arg0 ;
-(void)setExternalModificationTag:(id)arg0 ;
-(void)setExternalRepresentation:(id)arg0 ;
-(void)setExternalScheduleID:(id)arg0 ;
-(void)setOwner:(id)arg0 ;


@end


#endif