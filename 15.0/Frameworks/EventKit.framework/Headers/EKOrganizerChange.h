// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKORGANIZERCHANGE_H
#define EKORGANIZERCHANGE_H

@protocol EKOwnerIDProviding;


#import "EKParticipantChange.h"
#import "EKObjectID.h"

@interface EKOrganizerChange : EKParticipantChange <EKOwnerIDProviding>



@property (readonly, nonatomic) EKObjectID *ownerID; // ivar: _ownerID


+(int)entityType;
+(void)fetchOrganizerChangesInCalendar:(id)arg0 resultHandler:(id)arg1 ;
+(void)fetchOrganizerChangesInSource:(id)arg0 resultHandler:(id)arg1 ;
+(void)fetchOrganizerChangesInStore:(id)arg0 resultHandler:(id)arg1 ;
-(id)initWithChangeProperties:(id)arg0 ;


@end


#endif